/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:00:59 by hmin              #+#    #+#             */
/*   Updated: 2020/01/27 19:11:58 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  ex) size = 3  ( 0 < size < 10 )
**	012, 013, 014, 015, 016, 017, 018, 019
**		 023, 024, 025, 026, 027, 028, 029
**			  034, 035, 036, 037, 038, 039
**
**  =============== Solution 1 ===============
**
**	#include <unistd.h>
**
**	char	g_ch[9];
**	int		g_len;
**
**	void	ft_recur(int prev, int idx)
**	{
**		int cur;
**
**		cur = prev;
**		if (g_len == idx)
**		{
**			write(1, g_ch, g_len);
**			if (g_ch[0] + idx != ':')
**				write(1, ", ", 2);
**			return ;
**		}
**		while (++cur <= 10 - (g_len - idx))
**		{
**			g_ch[idx] = cur + '0';
**			ft_recur(cur, idx + 1);
**		}
**	}
**
**	void	ft_print_combn(int len)
**	{
**		g_len = len;
**		ft_recur(-1, 0);
**	}
**  =============== Solution 2 ===============
**
**	#include <unistd.h>
**
**	char g_num[10];
**
**	void	init(int n)
**	{
**		int		i;
**
**		i = 0;
**		while (i < n)
**		{
**			g_num[i] = i + '0';
**			i++;
**		}
**	}
**
**	void	do_write(int start, int max)
**	{
**		while (start < max)
**		{
**			write(1, &g_num[start], 1);
**			start = start + 1;
**		}
**	}
**
**	void	dp(int start, int max)
**	{
**		if (start == max)
**		{
**			do_write(0, max);
**			if (g_num[0] == '9' - max + 1)
**			{
**				return ;
**			}
**			else
**			{
**				write(1, ",", 1);
**				write(1, " ", 1);
**			}
**			return ;
**		}
**		while (g_num[start] <= '9')
**		{
**			if (start + 1 < max)
**				g_num[start + 1] = g_num[start] + 1;
**			dp(start + 1, max);
**			g_num[start]++;
**		}
**	}
**
**	void	ft_print_combn(int n)
**	{
**		init(n);
**		dp(0, n);
**	}
*/
