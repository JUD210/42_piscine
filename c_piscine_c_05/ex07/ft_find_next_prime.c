/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:41:36 by hmin              #+#    #+#             */
/*   Updated: 2020/02/05 11:39:36 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 2 3 5 7 11 13 17 23 29 31 37 41 43 47 53 59 61 67 ...
** if (24 <= nb <= 29) { return (29) ;}
** while(nb) {ft_is_prime(nb); nb++;}
**
** if nb: 24 (nearest_sqrt: 5)
** sqrt(16) = 4
** sqrt(25) = 5
** 4:16(< 29), 5:25(< 29), 6:36(< 29)
**
** if nb: 25 (nearest_sqrt:  0)
** sqrt(25) = 5
** sqrt(36) = 6
** 5:25(< 29), 6:36(> 29)
**
** if nb: 26 (nearest_sqrt:  6)
** sqrt(25) = 5
** sqrt(36) = 6
** 5:25(< 29), 6:36(> 29)
*/

unsigned int	find_nearest_sqrt(unsigned int tgt_sq)
{
	unsigned int	sqrt;
	unsigned int	sq;

	sqrt = 1;
	while (sqrt)
	{
		sq = sqrt * sqrt;
		if (sq < tgt_sq)
			;
		else if (sq == tgt_sq)
			return (0);
		else if (sq > tgt_sq)
			return (sqrt);
		sqrt++;
	}
	return (777);
}

unsigned int	is_prime(unsigned int nb)
{
	unsigned int	i;
	unsigned int	nearest_sqrt;

	nearest_sqrt = find_nearest_sqrt(nb);
	if (nearest_sqrt == 0)
		return (0);
	i = 2;
	while (i < nearest_sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int				ft_find_next_prime(int nb_int)
{
	unsigned int	nb;

	if (nb_int < 2)
		return (2);
	nb = nb_int;
	while (nb)
	{
		if (is_prime(nb))
			return (nb);
		nb++;
	}
	return (777);
}
