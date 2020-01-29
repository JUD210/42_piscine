/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 22:44:05 by hmin              #+#    #+#             */
/*   Updated: 2020/01/28 12:35:48 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int len)
{
	unsigned int	src_count;
	char			*saved;

	saved = dest;
	src_count = 0;
	while (*src)
	{
		*(dest++) = *(src++);
		if (++src_count == len)
			break ;
	}
	while (src_count++ < len)
		*(dest++) = '\0';
	return (saved);
}
