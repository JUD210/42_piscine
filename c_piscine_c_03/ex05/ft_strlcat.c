/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:33:49 by hmin              #+#    #+#             */
/*   Updated: 2020/01/30 14:46:51 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	My Word Definition with example
**
**	"abc" // {'a', 'b', 'c', '\0'}
**
**	len: 3
**	size: 4 (counts NUL)
*/

int				str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

char			*cat_str(char *dest, char *src, unsigned int tgt_size)
{
	unsigned int	dest_len;
	unsigned int	i;
	char			*rtn;

	rtn = dest;
	dest_len = str_len(dest);
	i = 0;
	while (dest[i])
	{
		rtn[i] = dest[i];
		i++;
	}
	while (src[i - dest_len] && i < tgt_size - 1 && tgt_size != 0)
	{
		rtn[i] = src[i - dest_len];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int tgt_size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	char			*rst;

	dest_len = str_len(dest);
	src_len = str_len(src);
	rst = cat_str(dest, src, tgt_size);
	if (tgt_size < dest_len)
		return (tgt_size + src_len);
	else
		return (dest_len + src_len);
}
