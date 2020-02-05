/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pattern.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 23:12:33 by hmin              #+#    #+#             */
/*   Updated: 2020/02/02 23:12:59 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int g_pattern[24][4];
extern int g_pattern_list;

void	permutation(int *arr, int start)
{
	int i;
	int temp;

	if (start < 3)
	{
		i = start;
		while (i <= 3)
		{
			temp = arr[start];
			arr[start] = arr[i];
			arr[i] = temp;
			permutation(arr, start + 1);
			temp = arr[start];
			arr[start] = arr[i];
			arr[i] = temp;
			i++;
		}
	}
	else
	{
		i = -1;
		while (++i <= 3)
			g_pattern[g_pattern_list][i] = arr[i];
		g_pattern_list++;
	}
}

void	create_pattern(void)
{
	int arr[4];
	int i;

	i = 0;
	while (i <= 3)
	{
		arr[i] = i + 1;
		i++;
	}
	permutation(arr, 0);
}
