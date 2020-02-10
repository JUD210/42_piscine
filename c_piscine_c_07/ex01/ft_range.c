/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:42:05 by hmin              #+#    #+#             */
/*   Updated: 2020/02/10 13:56:56 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr_i;

	if (min >= max)
	{
		ptr_i = NULL;
		return (ptr_i);
	}
	ptr_i = (int *)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		ptr_i[i - min] = i;
		i++;
	}
	return (ptr_i);
}
