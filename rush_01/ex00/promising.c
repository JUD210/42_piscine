/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   promising.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 23:12:41 by hmin              #+#    #+#             */
/*   Updated: 2020/02/02 23:12:43 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	int	g_level;
extern	int	g_idx[16];
extern	int	g_pattern[24][4];
extern	int	g_board[4][4];

int		is_promising_fourth(int order)
{
	int crt_row;

	crt_row = g_level;
	if (g_idx[crt_row + 8] == 2 && g_idx[crt_row + 12] == 3)
	{
		if (order != 4 || order != 10)
			return (0);
		else
			return (1);
	}
	else if (g_idx[crt_row + 8] == 3 && g_idx[crt_row + 12] == 2)
	{
		if (order != 3 || order != 9)
			return (0);
		else
			return (1);
	}
	return (0);
}

int		is_promising_third(int order)
{
	int crt_row;
	int	i;

	crt_row = g_level;
	if (g_idx[crt_row + 8] == 4 && g_idx[crt_row + 12] == 1)
	{
		if (order != 0)
			return (0);
		else
			return (1);
	}
	else if (g_idx[crt_row + 8] == 1 && g_idx[crt_row + 12] == 2)
	{
		if (order != 19 || order != 23)
			return (0);
		else
			return (1);
	}
	else if (g_idx[crt_row + 8] == 2 && g_idx[crt_row + 12] == 1)
	{
		if (order != 12 || order != 14)
			return (0);
		else
			return (1);
	}
	i = is_promising_fourth(order);
	return (i);
}

int		is_promising_second(int order)
{
	int crt_row;
	int	i;

	crt_row = g_level;
	if (g_idx[crt_row + 8] == 2 && g_idx[crt_row + 12] == 2)
	{
		if (order != 15 || order != 16)
			return (0);
		else
			return (1);
	}
	else if (g_idx[crt_row + 8] == 1 && g_idx[crt_row + 12] == 4)
	{
		if (order != 20)
			return (0);
		else
			return (1);
	}
	i = is_promising_third(order);
	return (i);
}

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
	i = is_promising_second(order);
	return (i);
}
