/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:50:28 by hmin              #+#    #+#             */
/*   Updated: 2020/02/09 20:59:45 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.h"

/*
** Swap two dictionary's keys and values
*/

void	swap(t_dic *d1, t_dic *d2)
{
	char *temp;

	temp = d1->key;
	d1->key = d2->key;
	d2->key = temp;
	temp = d1->value;
	d1->value = d2->value;
	d2->value = temp;
}

/*
** Count and return str's length (Doesn't count '\0')
*/

int		str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

/*
** Compare two strings
**
** if a length is different, return length's difference
** else if a character is different, return ASCII character value's difference
*/

int		ft_cmp(char *s1, char *s2)
{
	unsigned int	i;
	int				s1_len;
	int				s2_len;

	i = 0;
	s1_len = str_len(s1);
	s2_len = str_len(s2);
	if (s1_len != s2_len)
		return (s1_len - s2_len);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
** Bubble sort a dictionary's components
**
** sort maximum values to rightmost side by comparing keys
*/

void	sort(t_dic *dict, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_cmp((dict + j)->key, (dict + j + 1)->key) < 0)
				swap(dict + j, dict + j + 1);
			j++;
		}
		i++;
	}
}
