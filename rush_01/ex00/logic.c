/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 22:37:52 by hmin              #+#    #+#             */
/*   Updated: 2020/02/02 23:41:34 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	int	g_pattern_list;
extern	int	g_level;
extern	int	g_idx[16];
extern	int	g_board[4][4];
extern	int	g_pattern[24][4];
extern	int	g_end;

int		is_promising_first(int order, int g_level);

int		print_sol(void)
{
	int		i;
	int		j;
	char	ch;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ch = '0' + g_board[i][j];
			write(1, &ch, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (777);
}

int		recur_col(int g_level, int *order)
{
	int	i;

	i = 0;
	while (*order < 24)
	{
		if (is_promising_first(*order, g_level))
		{
			while (i < 4)
			{
				g_board[g_level][i] = g_pattern[*order][i];
				i++;
			}
			return (1);
		}
		else
			(*order)++;
	}
	return (0);
}

void	recur_row(int g_level)
{
	int		*order;
	int		ord;

	order = &ord;
	if (g_end == 777)
		return ;
	if (g_level == 4)
	{
		g_end = print_sol();
	}
	if (g_board[g_level][3] && *order < 24)
	{
		(*order)++;
	}
	else
		*order = 0;
	while (g_end != 777 && recur_col(g_level, order))
	{
		recur_row(g_level + 1);
	}
}
