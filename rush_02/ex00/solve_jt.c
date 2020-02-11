/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_jt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:52:49 by hmin              #+#    #+#             */
/*   Updated: 2020/02/09 21:48:37 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** Parse(format) answer string
*/

void	ans_parse(char *quota, char *remainder, t_dic *dict, int i)
{
	ft_strcat(g_result, " ");
	ft_strcat(g_result, dict[i - 1].value);
	if (ft_strcmp(quota, "1") == 0 && ft_strcmp(remainder, "0") == 0)
		return ;
	ft_strcat(g_result, " ");
}

/*
** Ending trigger for a recursive
*/

int		recur_end(char *num, char *str, t_dic *dict)
{
	if (ft_strcmp(num, "1") == 0)
	{
		if (ft_cmp(str, "99") > 0)
			ft_strcat(g_result, dict[g_len - 2].value);
		return (1);
	}
	return (0);
}

/*
** 1. split string and calculate size
** 2. join splitted strings to str_to_print
** 3. print str_to_print
*/

void	split_join(void)
{
	char	**str_split;
	char	*str_to_print;
	int		size;
	int		i;

	size = 0;
	str_split = ft_str_split(g_result, " ");
	while (str_split[size])
		size++;
	str_to_print = ft_strjoin(size, str_split, " ");
	free_split(str_split);
	i = 0;
	while (str_to_print[i])
		write(1, &str_to_print[i++], 1);
	write(1, "\n", 1);
	free(str_to_print);
}

/*
** main logic using recursive
**
** num : number to be changed
** dict : array of t_dic(==struct s_dic)
** str : string to prevent some cases like "one twenty"
*/

void	solve(char *num, t_dic *dict, char *str, int i)
{
	char	quota[10000];
	char	remainder[10000];
	char	prev[10000];

	prev[0] = '\0';
	if (recur_end(num, str, dict) == 1)
		return ;
	while (i++ < g_len - 1)
	{
		divide(num, dict[i - 1].key, quota, remainder);
		if (*quota == '0')
			prev[0] = '\0';
		if (*quota == '0')
			continue;
		if (ft_strcmp(prev, num) == 0)
			g_error = 1;
		if (ft_strcmp(prev, num) == 0)
			break ;
		solve(quota, dict, dict[i - 1].key, 0);
		ans_parse(quota, remainder, dict, i);
		ft_strcpy(prev, num);
		ft_strcpy(num, remainder);
	}
}
