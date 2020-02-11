/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_ntils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:52:18 by hsun              #+#    #+#             */
/*   Updated: 2020/02/09 21:54:17 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** When first is longer than sec, return -1
** find different part and compare, return 1 or -1
** if it is same, return 0
*/

int		cmp(int *first, int first_len, int *second, int second_len)
{
	int index;

	if (first_len < second_len)
		return (-1);
	index = 0;
	while (index < second_len)
	{
		if (first[index] < second[index])
			return (-1);
		if (first[index] > second[index])
			return (1);
		index++;
	}
	return (0);
}

/*
** Get string's length and save it to *len
** Input str's chars to arr for that length
*/

void	div_init(char *str, int *arr, int *len)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	*len = index;
	index = 0;
	while (index < *len)
	{
		arr[index] = str[index] - '0';
		index++;
	}
}

/*
** initiate int ptrs' pointing value
*/

void	go_init(int *first, int *second, int *third)
{
	*first = 0;
	*second = 10;
	*third = 0;
}
