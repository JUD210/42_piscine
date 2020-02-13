/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:04:32 by hmin              #+#    #+#             */
/*   Updated: 2020/02/13 08:36:21 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		g_col;
int		g_row;
char	g_empty;
char	g_obs;
char	g_full;

char	g_tmp_info[15];
char	**g_board;
int		**g_dp;

void	init_globals(void)
{
	int i;

	i = 0;
	while (i < 14)
	{
		g_tmp_info[i] = 0;
		i++;
	}
	g_tmp_info[i] = '\0';
	g_col = 0;
	g_row = -1;
	g_empty = 0;
	g_obs = 0;
	g_full = 0;
}

int		fill_g_board(char *file_name)
{
	int		fd;
	char	buf;
	int		i;
	int		j;
	int		is_first_line;

	fd = open(file_name, O_RDONLY);
	i = 0;
	j = 0;
	is_first_line = 1;
	while (read(fd, &buf, 1) > 0)
	{
		if (!is_first_line && buf != '\n')
		{
			if (buf == g_full)
				return (0);
			g_board[i][j] = buf;
			j++;
			check_g_row(&i, &j);
		}
		if (buf == '\n')
			is_first_line = 0;
	}
	return (1);
}

void	check_g_row(int *i, int *j)
{
	if (*j == g_row)
	{
		(*i)++;
		*j = 0;
	}
}

int		logic(char *file_name)
{
	init_globals();
	if (!check_valid_file(file_name))
	{
		write(1, "map error\n\n", 11);
		return (0);
	}
	init_g_board_dp();
	if (!fill_g_board(file_name))
	{
		write(1, "map error\n\n", 11);
		return (0);
	}
	if (check_error())
	{
		write(1, "map error\n\n", 11);
		return (0);
	}
	solution();
	free_g_board_dp();
	write(1, "\n", 1);
	return (1);
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
		logic("m1");
	while (++i < argc)
	{
		if (!logic(argv[i]))
			continue ;
	}
	return (0);
}
