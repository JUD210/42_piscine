/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:53:37 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 21:43:18 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** Allocate string
**
** *sep : seperator
** **strs : A string to allocate
** size : size to allocate
*/

char	*char_allocator(char *sep, char **strs, int size)
{
	char		*ptr_dic;
	long long	sep_len;
	long long	strs_len;
	long long	cnt[2];

	cnt[0] = 0;
	sep_len = 0;
	strs_len = 0;
	while (cnt[0]++ < size)
	{
		cnt[1] = -1;
		while (strs[cnt[0] - 1][++cnt[1]] != '\0')
			strs_len++;
	}
	cnt[0] = 0;
	while (*sep != '\0')
	{
		sep_len++;
		sep++;
	}
	ptr_dic = (char *)malloc(
		(sep_len * (size - 1) * strs_len + 1) * sizeof(char));
	return (ptr_dic);
}

/*
** Concatenate strings
**
** dest : destination string to be concatenated
** src : source string to concatenate
** sep : seperator
*/

void	custom_strcat(char *dest, char *src, char *sep)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	while (*sep != '\0')
	{
		*dest = *sep;
		sep++;
		dest++;
	}
	*dest = '\0';
}

/*
** Join strings
**
** size : size to join
** **strs : destination to join
** *sep : seperator
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr_dic;
	char	*temp;
	int		cnt;

	if (size == 0)
	{
		ptr_dic = (char *)malloc(1);
		ptr_dic[0] = '\0';
		return (ptr_dic);
	}
	ptr_dic = char_allocator(sep, strs, size);
	temp = ptr_dic;
	temp[0] = 0;
	cnt = 0;
	while (cnt < (size - 1))
		custom_strcat(temp, strs[cnt++], sep);
	custom_strcat(temp, strs[cnt], "");
	return (ptr_dic);
}
