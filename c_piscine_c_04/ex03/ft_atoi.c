/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:25:15 by hmin              #+#    #+#             */
/*   Updated: 2020/02/04 11:09:56 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r' || *str == ' ')
		return (1);
	else
		return (0);
}

int		is_number(char *str)
{
	if ('0' <= *str && *str <= '9')
		return (1);
	else
		return (0);
}

/*
**	Analyze string
*/

void	anal_str(char *str, int *ptr_cnt_minus, int *ptr_rst)
{
	int	no_space_flag;

	no_space_flag = 0;
	while (*str)
	{
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				(*ptr_cnt_minus)++;
			no_space_flag = 1;
		}
		else if (is_number(str))
		{
			*ptr_rst = (*ptr_rst * 10) + (*str - '0');
			no_space_flag = 1;
		}
		else if (is_space(str))
		{
			if (no_space_flag)
				return ;
		}
		else
			return ;
		str++;
	}
}

int		ft_atoi(char *str)
{
	int	cnt_minus;
	int rst;

	cnt_minus = 0;
	rst = 0;
	anal_str(str, &cnt_minus, &rst);
	if (cnt_minus % 2)
		rst = -rst;
	return (rst);
}
