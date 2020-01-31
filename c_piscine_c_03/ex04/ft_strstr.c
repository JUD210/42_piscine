/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 21:18:42 by hmin              #+#    #+#             */
/*   Updated: 2020/01/29 22:47:24 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	locates the first occurrence of the null-terminated string needle
**	in the null-terminated string haystack.
**
**
**	If needle's first character matches, check cmp if it is matching,
**	if matching, return a pointer to the first character of the
**	first occurrence of needle.
**
**	If needle is an empty string, haystack is returned.
**
**	If needle occurs nowhere in haystack, NULL is returned.
*/

int		is_matching(char *portion, char *needle)
{
	int	j;

	j = 0;
	while (needle[j])
	{
		if (needle[j] != portion[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *haystack, char *needle)
{
	int	i;

	i = 0;
	if (haystack[i] == '\0' && needle[i] != '\0')
		return (0);
	while (haystack[i])
	{
		if (is_matching(haystack + i, needle))
			return (haystack + i);
		i++;
	}
	if (i == 0)
		return (haystack);
	else
		return (0);
}
