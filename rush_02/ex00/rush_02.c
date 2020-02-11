/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 19:58:54 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 21:29:45 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** write string
*/

void	ft_putstr(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		idx++;
	}
}

/*
** Check Number Valid
*/

int		is_nbr_valid(char *nbr)
{
	int idx;

	idx = 0;
	while (nbr[idx] != '\0')
	{
		if (!(nbr[idx] >= '0' && nbr[idx] <= '9'))
		{
			ft_putstr("Error");
			return (0);
		}
		idx++;
	}
	if (nbr[0] == '0' && idx != 1)
	{
		ft_putstr("Error");
		return (0);
	}
	return (1);
}

/*
**	Initiate main
**
**	Error handling
**	Open a dict file
**	Parse the texts in the file to the *str_dic
*/

int		main_init(int argc, char *argv[], int *fd, t_dic **str_dic)
{
	if (argc > 3 || argc < 2)
		ft_putstr("Dict Error");
	if (argc > 3 || argc < 2)
		return (-1);
	if (argc == 2)
	{
		*fd = open("numbers.dict", O_RDONLY);
		if (is_nbr_valid(argv[1]) < 0)
			return (0);
	}
	else
	{
		*fd = open(argv[1], O_RDONLY);
		if (is_nbr_valid(argv[2]) < 0)
			return (0);
	}
	if (*fd == -1)
		ft_putstr("Dict Error\n");
	if (*fd == -1)
		return (-1);
	if (argc == 2)
		*str_dic = parse(*fd, 0, "numbers.dict");
	else
		*str_dic = parse(*fd, 0, argv[1]);
	return (0);
}

/*
** print zero
*/

void	zero_print(t_dic *dic)
{
	write(1, dic[g_len - 1].value, str_len(dic[g_len - 1].value));
	write(1, "\n", 1);
}

/*
**	main
*/

int		main(int argc, char *argv[])
{
	int		fd;
	t_dic	*ptr_dic;

	if (main_init(argc, argv, &fd, &ptr_dic) < 0)
		return (0);
	sort(ptr_dic, g_len);
	if (argc == 2)
	{
		if (ft_strcmp("0", argv[1]) == 0)
			zero_print(ptr_dic);
		if (ft_strcmp("0", argv[1]) == 0)
			return (0);
		solve(argv[1], ptr_dic, "100", 0);
	}
	if (argc == 3)
	{
		if (ft_strcmp("0", argv[2]) == 0)
		{
			zero_print(ptr_dic);
			return (0);
		}
		solve(argv[2], ptr_dic, "100", 0);
	}
	split_join();
	free_dic(ptr_dic);
}
