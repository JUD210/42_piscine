/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:57:37 by hmin              #+#    #+#             */
/*   Updated: 2020/01/31 15:10:58 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**	Prototypes
*/

int		str_len(char *str);

void	fill_nbr_to_str(char *str, int nbr);
void	rev_str(char *str);
void	prt_str(char *str, int nbr);

/*
**	CORE FUNCTION
**
**	-2147483648 <= int nbr <= 2147483647
*/

void	ft_putnbr(int nbr)
{
	char	str[11];

	fill_nbr_to_str(str, nbr);
	rev_str(str);
	prt_str(str, nbr);
}

/*
**	Implementations
*/

int		str_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

void	fill_nbr_to_str(char *str, int nbr)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (nbr < 0)
			str[i] = '0' + -(nbr % 10);
		else
			str[i] = '0' + (nbr % 10);
		nbr /= 10;
		i++;
		if (nbr == 0)
			break ;
	}
	str[i] = '\0';
}

void	rev_str(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = str_len(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
}

void	prt_str(char *str, int nbr)
{
	if (nbr < 0)
		write(1, "-", 1);
	write(1, str, str_len(str));
}
