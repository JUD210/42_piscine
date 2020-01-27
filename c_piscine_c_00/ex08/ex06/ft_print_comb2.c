/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 11:06:23 by hmin              #+#    #+#             */
/*   Updated: 2020/01/26 15:08:48 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	if (d != ':')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a == '9' && b == '8')
			;
		else
			write(1, ", ", 2);
	}
}

void	calc_comb2(char a, char b, char c, char d)
{
	while (1)
	{
		print(a, b, c, d);
		if (a == '9' && b == '8' && c == '9' && d == '9')
			break ;
		d++;
		if (d > '9')
		{
			c++;
			d = '0';
		}
		if (c > '9')
		{
			b++;
			c = a;
			d = b + 1;
		}
		if (b > '9')
		{
			a++;
			b = '0';
			c = a;
			d = b + 1;
		}
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	calc_comb2(a, b, c, d);
}
