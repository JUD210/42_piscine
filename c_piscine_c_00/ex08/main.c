/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:01:00 by hmin              #+#    #+#             */
/*   Updated: 2020/01/27 16:56:41 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
**  ex) n = 3  ( 0 < n < 10 )
**	012, 013, 014, 015, 016, 017, 018, 019
**		 023, 024, 025, 026, 027, 028, 029
**			  034, 035, 036, 037, 038, 039
**  ...
*/

extern	void	ft_print_combn(int n);

int				main(void)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_print_combn(i);
		i++;
		printf("\n===============\n");
	}
}
