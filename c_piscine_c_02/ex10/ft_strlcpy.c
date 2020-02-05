/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:48:16 by hmin              #+#    #+#             */
/*   Updated: 2020/01/29 15:13:49 by hmin             ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_size;

	i = 0;
	src_size = 0;
	while (src[i])
	{
		src_size++;
		i++;
	}
	i = 0;
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0 && i <= size)
		dest[i] = '\0';
	return (src_size);
}
