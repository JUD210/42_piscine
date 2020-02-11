/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:27:38 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 21:48:19 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** Validate a number
** *nbr : A string of a number
*/

int		is_nbr(char *nbr, t_dic *save)
{
	int		idx;
	char	*no_str;

	idx = 0;
	while (nbr[idx] != '\0')
	{
		if (!(nbr[idx] >= '0' && nbr[idx] <= '9')
		|| (idx != 0 && nbr[0] == '0'))
		{
			g_error = 1;
			return (0);
		}
		idx++;
	}
	no_str = (char *)malloc(sizeof(char) * (idx + 1));
	idx = 0;
	while (nbr[idx] != '\0')
	{
		no_str[idx] = nbr[idx];
		idx++;
	}
	save->key = no_str;
	return (1);
}

/*
** get size of **strs
*/

int		get_size(char **strs)
{
	int		size;
	char	**cpy;

	cpy = strs;
	size = 0;
	while (*cpy != '\0')
	{
		size++;
		cpy++;
	}
	return (size);
}

/*
** Initiate a dictionary to parse
** file : A target file to parse
*/

t_dic	*parse_init(char *file, int *idx)
{
	t_dic	*ptr_dic;
	int		fd;
	int		cnt;
	int		buff;

	cnt = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buff, 1))
	{
		if (buff == '\n')
			cnt++;
	}
	ptr_dic = (t_dic *)malloc(sizeof(t_dic) * cnt);
	*idx = 0;
	return (ptr_dic);
}

/*
** Apply dic -> parse
** *array : t_dic line
** *str :
** flag : check if ':' found
*/

void	apply_line(t_dic *array, char *str, int flag)
{
	char	**split;
	char	*parse_str;

	if (flag == 0)
	{
		g_error = 1;
		return ;
	}
	split = ft_str_split(str, " ");
	if (is_nbr(split[0], &array[g_len]) == 0 || split[1] == 0)
	{
		g_error = 1;
		return ;
	}
	if ((parse_str = ft_strjoin(get_size(split + 1), split + 1, " ")) == 0)
	{
		g_error = 1;
		return ;
	}
	array[g_len].value = parse_str;
	g_len++;
	free_split(split);
}

/*
** parse dictionary
**
** fd : file descriptor
** flag : check if ':' found in the current line
** file : file path
*/

t_dic	*parse(int fd, int flag, char *file)
{
	t_dic	*ptr_dic;
	char	cur_line[100000];
	int		idx;

	ptr_dic = parse_init(file, &idx);
	while (read(fd, &cur_line[99999], 1) && g_error == 0)
	{
		if (flag == 0 && cur_line[99999] == ':')
		{
			cur_line[99999] = ' ';
			flag = 1;
		}
		if (cur_line[99999] == '\n')
		{
			if (idx != 0)
				cur_line[idx] = '\0';
			if (idx != 0)
				apply_line(ptr_dic, cur_line, flag);
			idx = 0;
			flag = 0;
			continue;
		}
		cur_line[idx++] = cur_line[99999];
	}
	return (ptr_dic);
}
