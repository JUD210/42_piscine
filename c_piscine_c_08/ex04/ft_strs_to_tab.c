/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:52:52 by hmin              #+#    #+#             */
/*   Updated: 2020/02/13 14:31:37 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int			str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

char		*str_dup(char *src)
{
	char	*dest;
	int		i;

	if (!(dest = (char *)malloc(sizeof(char) * str_len(src) + 1)))
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*stocks;
	int			i;

	if (!(stocks = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc + 1))))
		return (NULL);
	i = -1;
	while (++i < argc)
	{
		stocks[i].size = str_len(argv[i]);
		stocks[i].str = argv[i];
		stocks[i].copy = str_dup(argv[i]);
	}
	stocks[i] = (t_stock_str){0, 0, 0};
	return (stocks);
}
