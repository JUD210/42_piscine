/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:28:39 by hmin              #+#    #+#             */
/*   Updated: 2020/02/06 14:10:36 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int		main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (--i > 0)
	{
		write(1, argv[i], str_len(argv[i]));
		write(1, "\n", 1);
	}
	return (0);
}

/*
** ============================================================================
** 1st try
**
** int		main(int argc, char *argv[])
** {
** 	int	i;
** 	int	j;
**
** 	i = 0;
** 	while (++i < argc)
** 	{
** 		j = str_len(argv[i]);
** 		while (--j >= 0)
** 		{
** 			write(1, &argv[i][j], 1);
** 		}
** 		write(1, "\n", 1);
** 	}
** 	return (0);
** }
*/
