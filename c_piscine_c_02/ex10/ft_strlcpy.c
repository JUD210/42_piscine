/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:48:16 by hmin              #+#    #+#             */
/*   Updated: 2020/01/29 08:30:21 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strlcpy() take the full size of the destination buffer and
**  guarantee NUL-termination if there is room.
**
**	Note that room for the NUL should be included in dstsize.
**
**	copies up to dstsize - 1 characters from the string src to
**	dst, NUL-terminating the result if dstsize is not 0.
**
**	return the total length of the string they tried to create.
**	For strlcpy() that means the length of src.
*/

/*
** WARNING NO NULL OVER!
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i + 1 <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (sizeof(src) + 1);
}
