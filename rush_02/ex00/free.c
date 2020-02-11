/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:39:45 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 21:37:29 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** free memories allocated in ft_str_split
*/

void	free_split(char **strs)
{
	int cnt;

	cnt = 0;
	while (strs[cnt] != '\0')
	{
		free(strs[cnt]);
		cnt++;
	}
	free(strs);
}

/*
** free allocated memories of dic's key and value
*/

void	free_dic(t_dic *dic)
{
	int idx;

	idx = 0;
	while (idx < g_len)
	{
		free(dic[idx].key);
		free(dic[idx].value);
		idx++;
	}
	free(dic);
}
