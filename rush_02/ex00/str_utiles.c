/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utiles.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 19:20:29 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 22:48:01 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** Compare two string
** (s1 > s2) : return (positive)
** (s1 < s2) : return (negative);
** (s1 == s2) : return (0);
*/

int		ft_strcmp(char *s1, char *s2)
{
	int idx;

	idx = 0;
	while (s1[idx] != '\0' && s2[idx] != '\0')
	{
		if ((unsigned int)s1[idx] > (unsigned int)s2[idx])
			return (s1[idx] - s2[idx]);
		else if (s1[idx] < s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	return (s1[idx] - s2[idx]);
}

/*
** Copy string from src to dest
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

/*
** Concatenate src and dest
** At the end of the dest, add the src, and finally add a '\0'
*/

char	*ft_strcat(char *dest, char *src)
{
	int dest_idx;
	int src_idx;

	dest_idx = 0;
	src_idx = 0;
	if ((dest[dest_idx] || src[src_idx]) != '\0')
	{
		while (dest[dest_idx] != '\0')
			dest_idx++;
		while (src[src_idx] != '\0')
		{
			dest[dest_idx] = src[src_idx];
			dest_idx++;
			src_idx++;
		}
	}
	dest[dest_idx] = '\0';
	return (dest);
}
