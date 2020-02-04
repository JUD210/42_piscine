/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:37:46 by hmin              #+#    #+#             */
/*   Updated: 2020/02/04 11:18:25 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	invalid arguments
**	◦ str_base_char is empty or size of 1;
**	◦ str_base_charstr_base_char contains the same character twice ;
**	◦ str_base_char contains + or - ;
**
**	20 / 2 (0)
**	10 / 2 (0)
**	10 / 2 (0)
**	 5 / 2 (1)
**	 2 / 2 (0)
**	 1 / 2 (1)
**	10200
**
**	20 / 10 (0)
**	 2 / 10 (2)
**	20
**
**	20 / 8 (4)
**	 2 / 8 (2)
**	24
**
**	- poneyvif
**	- 01234567
*/

#include <unistd.h>

int		calc_str_len(char *str_base_char)
{
	int	cnt;

	cnt = 0;
	while (str_base_char[cnt])
		cnt++;
	return (cnt);
}

int		has_same_characters(char ch, char *used_characters)
{
	int	i;

	i = 0;
	while (used_characters[i])
	{
		if (ch == used_characters[i])
			return (1);
		i++;
	}
	return (0);
}

/*
** If the index of str array is over about 300, memory overflow(?)s
*/

int		is_valid_base_char(char *str_base_char)
{
	int		i;
	char	used_characters[200];

	if (calc_str_len(str_base_char) <= 1)
		return (0);
	i = 0;
	while (str_base_char[i])
	{
		if (has_same_characters(str_base_char[i], used_characters))
			return (0);
		else if (*str_base_char == '+' || *str_base_char == '-')
			return (0);
		used_characters[i] = str_base_char[i];
		used_characters[i + 1] = '\0';
		i++;
	}
	return (1);
}

/*
**	'0' + (20 - ((20 / 8) * 8))
**	'0' + 20 - (2 * 8)
**	'0' + 4
**	'4'
**
**	In 1 ~ n: convert nbr(20_10) to str_base_nbr(24_8)
**	Out n ~ 1: print str_base_nbr(24_8) using str_base_char(poneyvif)
*/

void	recur_solution(
long int nbr, char *str_base_nbr, char *str_base_char, int base_len)
{
	*str_base_nbr = '0' + (int)(nbr % base_len);
	nbr = nbr / base_len;
	if (nbr != 0)
		recur_solution(nbr, str_base_nbr + 1, str_base_char, base_len);
	write(1, &str_base_char[*str_base_nbr - '0'], 1);
}

void	ft_putnbr_base(int nbr_s, char *str_base_char)
{
	long int	nbr;
	int			base_len;
	char		str_base_nbr[200];

	nbr = nbr_s;
	if (!is_valid_base_char(str_base_char))
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	base_len = calc_str_len(str_base_char);
	recur_solution(nbr, str_base_nbr, str_base_char, base_len);
}
