/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 20:37:01 by hmin              #+#    #+#             */
/*   Updated: 2020/01/26 11:31:40 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	calc_comb(char a, char b, char c)
{
	while (1)
	{
		print(a, b, c);
		c++;
		if (c > '9')
		{
			b++;
			c = b + 1;
		}
		if (b > '8')
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
		if (a > '7')
		{
			break ;
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	calc_comb(a, b, c);
}
