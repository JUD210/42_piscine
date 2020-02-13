/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:55:00 by yoolee            #+#    #+#             */
/*   Updated: 2020/02/13 06:53:12 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_error(void)
{
	if (!is_valid_char())
		return (1);
	if (!is_board_info_not_identical())
		return (1);
	return (0);
}

int	is_valid_char(void)
{
	int i;
	int j;

	i = 0;
	while (i < g_col)
	{
		j = 0;
		while (j < g_row)
		{
			if (!(g_board[i][j] == g_empty || g_board[i][j] == g_obs))
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int	is_board_info_not_identical(void)
{
	if (g_empty == g_full || g_full == g_obs || g_empty == g_obs)
		return (FALSE);
	return (TRUE);
}
