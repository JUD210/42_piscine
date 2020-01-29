/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:03:47 by hmin              #+#    #+#             */
/*   Updated: 2020/01/28 17:56:26 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The ASCII value of all control characters are
**	 0  1  2  3  4  5  6  7  8  9
**	10 11 12 13 14 15 16 17 18 19
**	20 21 22 23 24 25 26 27 28 29
**	30 31
**	127
*/

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 127)
			return (0);
		str++;
	}
	return (1);
}