/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:38:30 by hmin              #+#    #+#             */
/*   Updated: 2020/02/04 19:13:46 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int rst;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	rst = 1;
	while (power-- > 0)
		rst *= nb;
	return (rst);
}
