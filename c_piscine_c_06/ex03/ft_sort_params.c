/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 09:21:49 by hmin              #+#    #+#             */
/*   Updated: 2020/02/06 16:04:14 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Create a program that displays its given arguments sorted by ascii order.
**	One argument per line.
*/

#include <unistd.h>

int		str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

/*
** void	swap_arg()
*/

void	sort_args(int argc, char *argv[])
{
	int	argv_idx;
	int r_cmp_idx;
	int	arg_idx;

	if (argc < 3)
		return ;
	argv_idx = 1;
	while (argv_idx < argc - 1)
	{
		r_cmp_idx = argc - 2;

		while (argv_idx <= r_cmp_idx)
		{
			if (argv[])
		}
		argv_idx++;
	}
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 0;
	sort_args(argc, argv);
	while (++i < argc)
	{
		write(1, argv[i], str_len(argv[i]));
		write(1, "\n", 1);
	}

	return (0);
}

/*
**	1st try
**
**	void	swap_ch(char *a, char *b)
**	{
**		char tmp;
**
**		tmp = *a;
**		*a = *b;
**		*b = tmp;
**	}
**
**
**	 bubble sort from rightmost-side to leftmost-side
**
**	 sorted	| unsorted
**	 a b	| z e d h
**
**
**	void	sort_str(char *str)
**	{
**		int	sorted_idx;
**		int	r_cmp_idx;
**		int size;
**
**		size = str_len(str);
**		sorted_idx = 0;
**		while (sorted_idx < size - 1)
**		{
**			r_cmp_idx = size - 2;
**			while (sorted_idx <= r_cmp_idx)
**			{
**				if (str[r_cmp_idx] > str[r_cmp_idx + 1])
**					swap_ch(&str[r_cmp_idx], &str[r_cmp_idx + 1]);
**				r_cmp_idx--;
**			}
**			sorted_idx++;
**		}
**	}
**
**	int		main(int argc, char *argv[])
**	{
**		int	i;
**
**		i = 0;
**		while (++i < argc)
**		{
**			sort_str(argv[i]);
**			write(1, argv[i], str_len(argv[i]));
**			write(1, "\n", 1);
**		}
**		return (0);
**	}
*/
