/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:11:36 by hmin              #+#    #+#             */
/*   Updated: 2020/02/04 19:10:47 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	power_num(int n, int power)
{
	if (power > 1)
		return (n * power_num(n, power - 1));
	else
		return (n);
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (power_num(nb, power));
}
