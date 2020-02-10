/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 20:08:11 by hmin              #+#    #+#             */
/*   Updated: 2020/02/10 13:56:34 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** int *arr_ptr_i
** ft_ult_rng (&arr_ptr_i, ...)
**
** *result = malloc(~)
** *arr_ptr_i = result
**
** arr_ptr_i		ptr_i[0]		i
** 0xA0				0x09			3
** 0xD8				0xA0			0x09
**
**					ptr_i[1]		i
**					0x87			4
**					0xA1			0x87
**
**					ptr_i[2]		i
**					0x14			5
**					0xA2			0x14
**
**					ptr_i[3]		i
**					0xAb			6
**					0xA3			0xAb
**
** ...
*/

#include <stdlib.h>

int	ft_ultimate_range(int **arr_ptr_i, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*arr_ptr_i = NULL;
		return (0);
	}
	*arr_ptr_i = (int *)malloc(sizeof(int) * (max - min));
	if (*arr_ptr_i == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		*(*(arr_ptr_i) + i) = i + min;
		i++;
	}
	return (max - min);
}
