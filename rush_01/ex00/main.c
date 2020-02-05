/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 22:13:44 by hmin              #+#    #+#             */
/*   Updated: 2020/02/03 10:52:29 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "argv.h"
#include "logic.h"
#include "init_pattern.h"
#include "promising.h"

int	g_pattern_list = 0;
int	g_level = 0;
int	g_idx[16];
int	g_board[4][4];
int	g_pattern[24][4];
int	g_end;

int		is_promising_first(int order, int g_level)
{
	int	i;
	int crt_row;

	i = -1;
	while (++i < 4)
	{
		crt_row = g_level;
		while (crt_row-- >= 0)
			if (g_pattern[order][i] == g_board[crt_row][i])
				return (0);
	}
	i = -1;
	crt_row = g_level;
	while (++i < 4)
	{
		if (6 - g_idx[crt_row + 8] + i <= g_pattern[order][i])
			return (0);
		if (6 - g_idx[crt_row + 12] + 3 - i <= g_pattern[order][i])
			return (0);
		if (6 - g_idx[i] + crt_row <= g_pattern[order][i])
			return (0);
		if (6 - g_idx[i + 4] + 3 - crt_row <= g_pattern[order][i])
			return (0);
	}
	return (1);
}


int		main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	argv_to_idx(g_idx, argv);
	if (is_valid_idx(g_idx))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (exception_handling(g_idx))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	create_pattern();
	recur_row(g_level);
	return (0);
}
