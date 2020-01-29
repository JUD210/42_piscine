/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:19:22 by hmin              #+#    #+#             */
/*   Updated: 2020/01/28 17:00:23 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (is_new_word)
				str[i] -= 32;
			is_new_word = 0;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
			is_new_word = 0;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			is_new_word = 0;
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}
