/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:49:59 by hmin              #+#    #+#             */
/*   Updated: 2020/01/29 19:18:38 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_size(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

int	cmp(char *l_s, char *s_s)
{
	int	i;

	i = 0;
	while (l_s[i])
	{
		if (l_s[i] != s_s[i])
			return (l_s[i] - s_s[i]);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int rtn;

	if (str_size(s1) >= str_size(s2))
		rtn = cmp(s1, s2);
	else
		rtn = -cmp(s2, s1);
	return (rtn);
}
