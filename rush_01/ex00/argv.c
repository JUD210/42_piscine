/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:57:42 by jeoryu            #+#    #+#             */
/*   Updated: 2020/02/02 22:38:33 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	argv_to_idx(int *idx, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		if ('0' < argv[1][j] && argv[1][j] < '5')
			idx[i] = argv[1][j] - '0';
		else
			idx[i] = 0;
		i += 1;
		j += 2;
	}
	idx[i] = '\0';
}

int		is_valid_idx(int *idx)
{
	int i;
	int temp;

	i = 0;
	while (i < 12)
	{
		temp = idx[i] + idx[i + 4];
		if (3 <= temp && temp <= 5)
			i++;
		else
			return (1);
		if (i == 4)
			i = 8;
	}
	return (0);
}

int		exception_handling(int *idx)
{
	char	vld1[2];
	char	vld2[2];
	char	temp[2];
	int		i;

	vld1[0] = 3;
	vld1[1] = 1;
	vld2[0] = 1;
	vld2[1] = 3;
	i = 0;
	while (i < 12)
	{
		temp[0] = idx[i];
		temp[1] = idx[i + 4];
		if (vld1[0] == temp[0] && vld1[1] == temp[1])
			return (1);
		if (vld2[0] == temp[0] && vld2[1] == temp[1])
			return (1);
		i++;
		if (i == 4)
			i = 8;
	}
	return (0);
}
