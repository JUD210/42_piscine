/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:52:19 by hsun              #+#    #+#             */
/*   Updated: 2020/02/09 22:32:22 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"
#include "divide_num.h"

/*
** Attach '0's to the str
*/

void	print(int *first, int len, char *str)
{
	int i;

	i = 0;
	while (i < len && !first[i])
		i++;
	if (i == len)
	{
		*str = '0';
		str++;
	}
	while (i < len)
	{
		*str = first[i++] + '0';
		str++;
	}
	*str = '\0';
}

void	norm_kill(int *i, int *j)
{
	g_quot[g_quot_len - 1]++;
	*j = 0;
	while ((*j)++ < g_s_l)
		g_fst[*i + *j - 1] -= g_sec[*j - 1];
	*j = g_s_l - 1;
	while ((*j)-- >= 0)
	{
		if (g_fst[*i + *j + 1] < 0)
		{
			g_fst[*i + *j]--;
			g_fst[*i + *j + 1] += 10;
		}
	}
	while (g_fst[*i + (*j)--] < 0)
	{
		g_fst[*i + *j]--;
		g_fst[*i + *j + 1] += 10;
	}
}

void	go(void)
{
	int i;
	int j;
	int k;
	int as;

	go_init(&i, &k, &as);
	while (as < g_f_l && !g_fst[as])
		as++;
	while (i + g_s_l <= g_f_l)
	{
		if (i < as || (i == as && cmp(g_fst + i, g_f_l - i, g_sec, g_s_l) < 0))
		{
			if (++i + g_s_l <= g_f_l)
				g_quot_len++;
			continue;
		}
		norm_kill(&i, &j);
		while (as < g_f_l && !g_fst[as])
			as++;
	}
	i = 0;
	while (i < g_f_l - as)
		g_rmd[g_rmd_len++] = g_fst[as + (i++)];
	if (g_rmd_len == 0)
		g_rmd_len++;
}

void	divide(char *first, char *second, char *quot, char *rmd)
{
	int i;

	i = 0;
	while (i < 10001)
	{
		g_rmd[i] = 0;
		g_quot[i++] = 0;
	}
	g_quot[10001] = 0;
	g_quot[10002] = 0;
	g_quot_len = 2;
	div_init(first, g_fst, &g_f_l);
	div_init(second, g_sec, &g_s_l);
	go();
	print(g_quot, g_quot_len, quot);
	print(g_rmd, g_rmd_len, rmd);
}
