/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:55:44 by hmin              #+#    #+#             */
/*   Updated: 2020/02/13 08:14:03 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fill_globals(int j)
{
	int i;
	int n;

	g_full = g_tmp_info[j - 1];
	g_obs = g_tmp_info[j - 2];
	g_empty = g_tmp_info[j - 3];
	i = 0;
	n = 0;
	while (i <= j - 4)
	{
		n = n * 10 + (g_tmp_info[i] - '0');
		i++;
	}
	g_col = n;
}

void	fill_g_tmp_info(char ch, int *j)
{
	if (ch != '\n')
	{
		g_tmp_info[*j] = ch;
		*j += 1;
	}
	else
	{
		fill_globals(*j);
		*j = 0;
	}
}

int		check_buf(int *i, int *j, char buf)
{
	if (!(32 <= buf && buf <= 126) && buf != '\n')
		return (0);
	if (g_empty == 0)
		fill_g_tmp_info(buf, j);
	else if (g_empty != 0 && buf != '\n')
		(*i)++;
	else if (g_empty != 0 && buf == '\n')
	{
		if (g_row == -1)
			g_row = *i;
		if (g_row != *i)
			return (0);
		*i = 0;
		(*j)++;
	}
	return (1);
}

int		check_valid_file(char *file_name)
{
	int		fd;
	char	buf;
	int		i;
	int		j;

	fd = open(file_name, O_RDONLY);
	i = 0;
	j = 0;
	while (read(fd, &buf, 1) > 0)
	{
		if (!check_buf(&i, &j, buf))
			return (0);
	}
	if (j != g_col || g_col == 0)
		return (0);
	close(fd);
	return (1);
}
