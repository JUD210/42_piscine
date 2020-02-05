/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 21:02:36 by hmin              #+#    #+#             */
/*   Updated: 2020/02/05 11:37:27 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int				ft_is_prime(int nb_int)
{
	unsigned int	i;
	unsigned int	nb;
	unsigned int	nearest_sqrt;

	if (nb_int < 2)
		return (0);
	nb = nb_int;
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
