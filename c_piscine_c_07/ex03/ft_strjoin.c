/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:41:16 by hmin              #+#    #+#             */
/*   Updated: 2020/02/09 09:24:28 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int		calc_joined_str_len(int size, char **strs, char *sep)
{
	int	joined_str_len;
	int	i;

	joined_str_len = 0;
	i = 0;
	while (i < size)
	{
		joined_str_len += str_len(strs[i]);
		if (i != size - 1)
			joined_str_len += str_len(sep);
		i++;
	}
	return (joined_str_len);
}

/*
**	*strs = NULL;
**	return (*strs);
**
**	if (size == 0)
**		return ((char *)malloc(sizeof(char)));
**
**************************************************
**
**	Q. WHY?
**
**	NOT Working : *(joined_str++) = strs[i][j];
**		Working : joined_str[idx++] = strs[i][j];
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		idx;
	int		joined_str_len;
	char	*joined_str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	joined_str_len = calc_joined_str_len(size, strs, sep);
	joined_str = (char *)malloc(sizeof(char) * joined_str_len + 1);
	idx = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			joined_str[idx++] = strs[i][j];
		j = -1;
		while (sep[++j] && i != size - 1)
			joined_str[idx++] = sep[j];
	}
	joined_str[idx] = '\0';
	return (joined_str);
}

/*
** char	**strs;
**
** strs = (char **)malloc(sizeof(char *) * 4);
** strs[0] = "Hello";
** strs[1] = "I'm";
** strs[2] = "Hyeogikarp";
** strs[3] = ":)";
**
***************************************************
**
** //x, y and z are pointer to char
** char x[3]={'1', '2', '3'};
** char y[3]={'4', '5', '6'};
** char z[3]={'7', '8', '9'};
**
** //arr is pointer to char pointer
** char* arr[3]={x, y, z};
** func1(arr);
** func2(arr);
*/
