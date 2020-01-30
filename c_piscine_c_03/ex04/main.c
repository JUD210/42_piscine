/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:12:19 by schang            #+#    #+#             */
/*   Updated: 2020/01/30 09:03:32 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

void	print_divider(int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("-");
		i++;
	}
	printf("\n");
}

void	pr(char *str, char *to_find)
{
	char	*ptr;
	
	printf("%-20s | %-10s || ", str, to_find);
	ptr = ft_strstr(str, to_find);
	printf("%-25s | ", ptr);
	ptr = strstr(str, to_find);
	printf("%-25s\n", ptr);
}

int	main(void)
{
	char	*str;
	char	*to_find;

	system("clear");
	printf("===== [Exercise 04] 테스트 =====\n\n");
	printf("%-20s | %-10s || %-25s | %-25s\n", "str", "to_find", "ft_strstr", "strstr");
	print_divider(80);

	str = "";
	to_find = "";
	pr(str, to_find);

	str = "";
	to_find = "Test";
	pr(str, to_find);

	str = "42 Soeul";
	to_find = "";
	pr(str, to_find);

	str = "Lorem ipsum dolar";
	to_find = "ipsum";
	pr(str, to_find);

	str = "42 Seoul! Happy!";
	to_find = "New";
	pr(str, to_find);

	to_find = "Happy";
	pr(str, to_find);

	to_find = "seoul";
	pr(str, to_find);

	print_divider(80);
	return (0);
}
