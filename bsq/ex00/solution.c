/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:42:25 by yoolee            #+#    #+#             */
/*   Updated: 2020/02/13 08:33:28 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int g_col = 9;
int g_row = 27;

int g_max = 0;
int g_i_flag = 0;
int g_j_flag = 0;
int g_i = 0;
int g_j = 0;

void	board_to_dp(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_col)
	{
		j = 0;
		while (j < g_row)
		{
			if (g_board[i][j] == g_empty)
				g_dp[i][j] = 1;
			else if (g_board[i][j] == g_obs)
				g_dp[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	solution(void)
{
	board_to_dp();
	g_max = 0;
	while (++g_i < g_col)
	{
		g_j = 0;
		while (++g_j < g_row)
		{
			if (g_dp[g_i][g_j] == 1)
			{
				g_dp[g_i][g_j] = FIND_MIN(g_dp[g_i - 1][g_j],
				FIND_MIN(g_dp[g_i][g_j - 1], g_dp[g_i - 1][g_j - 1])) + 1;
				if (g_dp[g_i][g_j] > g_max)
				{
					g_max = g_dp[g_i][g_j];
					g_i_flag = g_i;
					g_j_flag = g_j;
				}
			}
		}
	}
	print_board(g_i_flag, g_j_flag, g_max);
}
