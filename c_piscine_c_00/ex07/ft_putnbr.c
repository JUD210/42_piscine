/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:25:28 by hmin              #+#    #+#             */
/*   Updated: 2020/01/27 11:56:35 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_char(char *ch)
{
	int idx;

	idx = 0;
	while (idx < 11)
	{
		*(ch + idx) = 'N';
		idx++;
	}
}

void	prt_rev_char(char *ch)
{
	int		idx;

	idx = 10;
	while (idx >= 0)
	{
		if (*(ch + idx) == 'N')
			;
		else
			write(1, ch + idx, 1);
		idx--;
	}
}

void	ft_putnbr(int nb)
{
	int		idx;
	char	ch[11];

	idx = 0;
	init_char(ch);
	if (nb < 0)
		ch[10] = '-';
	while (idx < 11)
	{
		if (nb < 0)
			ch[idx] = '0' + -(nb % 10);
		else
			ch[idx] = '0' + (nb % 10);
		nb /= 10;
		idx++;
		if (nb == 0)
			break ;
	}
	prt_rev_char(ch);
}
