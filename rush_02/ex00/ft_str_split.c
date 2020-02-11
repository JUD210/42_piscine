/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:56:19 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 22:22:23 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

int	g_no;
int	g_charset[256] = {0, };

/*
** Get length of *str
*/

int		get_word_size(char *str)
{
	int cnt;
	int flag;

	cnt = 0;
	flag = 0;
	while (*str != '\0')
	{
		if (g_charset[(unsigned char)(*str)] == 0)
		{
			cnt++;
			flag = 1;
		}
		else if (g_charset[(unsigned char)(*str) == 1 && flag == 1])
			break ;
		str++;
	}
	return (cnt);
}

/*
** Save words to **str
** size : *str[idx] => size
*/

char	*word_saver(char **str, int size)
{
	char	*ptr_dic;
	int		cnt;
	int		flag;

	flag = 0;
	cnt = 0;
	ptr_dic = (char *)malloc(sizeof(char) * (size + 1));
	while (**str != '\0')
	{
		if (g_charset[(unsigned char)(**str)] == 0)
		{
			ptr_dic[cnt++] = **str;
			flag = 1;
		}
		else if (g_charset[(unsigned char)(**str)] == 1 && flag == 1)
			break ;
		(*str)++;
	}
	ptr_dic[cnt] = '\0';
	return (ptr_dic);
}

/*
** Allocate str splitted
*/

char	**str_split_alloc(char *str)
{
	int		flag;
	char	**ptr_dic;

	g_no = 0;
	flag = 0;
	while (*str != '\0')
	{
		if (flag && g_charset[(unsigned char)(*str)] == 1)
		{
			flag = 0;
			g_no++;
		}
		else if (g_charset[(unsigned char)(*str)] == 0)
			flag = 1;
		str++;
	}
	if (g_charset[(unsigned char)*(str - 1)] == 0)
		g_no++;
	ptr_dic = (char **)malloc(sizeof(char *) * (g_no + 1));
	return (ptr_dic);
}

/*
** When parsing t_dic, split to charset
** *str : t_dic line string
** *charset : splitting char
*/

char	**ft_str_split(char *str, char *charset)
{
	char	**ptr_line;
	int		cnt;
	int		size;

	while (*charset != '\0')
	{
		g_charset[(unsigned char)(*charset)] = 1;
		charset++;
	}
	g_charset[0] = 1;
	ptr_line = str_split_alloc(str);
	cnt = 0;
	while (*str != '\0')
	{
		if (g_charset[(unsigned char)(*str)] == 0)
		{
			size = get_word_size(str);
			ptr_line[cnt++] = word_saver(&str, size);
			continue;
		}
		str++;
	}
	ptr_line[g_no] = 0;
	return (ptr_line);
}
