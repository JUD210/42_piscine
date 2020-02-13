/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:00:28 by hmin              #+#    #+#             */
/*   Updated: 2020/02/13 14:31:36 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/*
** There is a more nice technic!
**
** write(1, &"0123456789"[nbr % 10], 1);
*/

void	put_nbr(int nbr)
{
	char	ch;

	if (nbr > 9)
		put_nbr(nbr / 10);
	ch = (nbr % 10) + '0';
	write(1, &ch, 1);
}

void	ft_show_tab(t_stock_str *stocks)
{
	int	i;

	i = -1;
	while (stocks[++i].str != 0)
	{
		put_str(stocks[i].str);
		put_str("\n");
		put_nbr(stocks[i].size);
		put_str("\n");
		put_str(stocks[i].copy);
		put_str("\n");
	}
}
