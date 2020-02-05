/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:56:24 by hmin              #+#    #+#             */
/*   Updated: 2020/02/04 15:03:22 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mult_num(int n)
{
	if (n >= 1)
		return (n * mult_num(n - 1));
	else
		return (1);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
		return (mult_num(nb));
}
