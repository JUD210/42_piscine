/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_global.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 08:36:10 by hmin              #+#    #+#             */
/*   Updated: 2020/02/13 08:40:34 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**g_board;
int		**g_dp;
int		g_col;
int		g_row;

void	init_g_board_dp(void)
{
	int	i;

	g_board = (char **)malloc(g_col * sizeof(char *));
	g_dp = (int **)malloc(g_col * sizeof(int *));
	i = -1;
	while (++i < g_col)
	{
		g_board[i] = (char *)malloc(g_row * sizeof(char));
		g_dp[i] = (int *)malloc(g_row * sizeof(int));
	}
}

void	free_g_board_dp(void)
{
	int i;

	i = -1;
	while (++i < g_col)
	{
		free(g_board[i]);
		free(g_dp[i]);
	}
	free(g_board);
	free(g_dp);
}
