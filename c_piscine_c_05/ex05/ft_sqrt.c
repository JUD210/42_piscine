/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:51:52 by hmin              #+#    #+#             */
/*   Updated: 2020/02/05 10:19:10 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int tgt_sq_int)
{
	unsigned int	sq;
	unsigned int	sqrt;
	unsigned int	tgt_sq;

	if (tgt_sq_int <= 0)
		return (0);
	tgt_sq = tgt_sq_int;
	sqrt = 0;
	while (++sqrt)
	{
		sq = sqrt * sqrt;
		if (sq < tgt_sq)
			;
		else if (sq == tgt_sq)
			return ((int)sqrt);
		else if (sq > tgt_sq)
			return (0);
	}
	return (777);
}

/*
** ===== 1st solution
**
** int	cmp_sqrt(int sqrt, int tgt_sq)
** {
** 	int	sq;
**
** 	sq = sqrt * sqrt;
** 	if (sq < tgt_sq)
** 		cmp_sqrt(sqrt + 1, tgt_sq);
** 	else if (sq == tgt_sq)
** 		return (sq);
** 	else if (sq > tgt_sq)
** 		return (0);
** 	return (777);
** }
**
** int	ft_sqrt(int tgt_sq)
** {
** 	return (cmp_sqrt(1, tgt_sq));
** }
*/

/*
** ===== 2nd solution
**
** int	ft_sqrt(int tgt_sq_int)
** {
** 	int	sqrt;
** 	int	tgt_sq;
**
** 	tgt_sq = tgt_sq_int;
**
** 	if (tgt_sq <= 0)
** 		return (0);
** 	sqrt = 1;
** 	while (sqrt * sqrt <= a)
** 	{
** 		sqrt++;
** 	}
** 	sqrt--;
** 	if (sqrt * sqrt = a;
** 	return ((int)sqrt);
** }
*/
