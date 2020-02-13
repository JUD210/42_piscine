/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 10:08:35 by yoolee            #+#    #+#             */
/*   Updated: 2020/02/12 22:04:11 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int g_col;
int g_row;

void	print_board(int i_flag, int j_flag, int max)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_col)
	{
		j = 0;
		while (j < g_row)
		{
			if ((i_flag - max + 1) <= i && i <= i_flag
				&& (j_flag - max + 1) <= j && j <= j_flag)
				write(1, "x", 1);
			else
				write(1, &g_board[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
