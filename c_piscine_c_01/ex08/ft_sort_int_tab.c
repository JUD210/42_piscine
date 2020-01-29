/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 20:58:04 by hmin              #+#    #+#             */
/*   Updated: 2020/01/26 22:50:49 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int sorted_idx;
	int	r_compare_idx;

	sorted_idx = 0;
	while (sorted_idx < size - 1)
	{
		r_compare_idx = size - 2;
		while (sorted_idx < r_compare_idx)
		{
			if (tab[r_compare_idx] > tab[r_compare_idx + 1])
				swap(tab + r_compare_idx, tab + r_compare_idx + 1);
			r_compare_idx--;
		}
		sorted_idx++;
	}
}
