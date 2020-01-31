/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 19:12:18 by hmin              #+#    #+#             */
/*   Updated: 2020/01/30 19:11:32 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	pr(char *s1, char *s2, unsigned int n)
{
	unsigned int 	i;
	
	i = 0;
	while (i <= n)
	{
		printf("%-25s | %-25s | %-4u || %-10d | %-10d\n"
				, s1, s2, i, ft_strncmp(s1, s2, i), strncmp(s1, s2, i));
		i++;
	}
}

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

int	main(void)
{
	char	*str1;
	char	*str2;
	char	str3[] = {0xff};

	system("clear");
	printf("===== [Exercise 01] 테스트 =====\n\n");
	printf("%-25s | %-25s | %-4s || %-10s | %-10s\n", "str1", "str2", "n", "ft_strncmp", "strncmp");
	print_divider(80);
	
	str2 = "";
	pr(str3, str2, 3);
	print_divider(80);

	str1 = "";
	str2 = "";
	pr(str1, str2, 3);
	print_divider(80);

	str1 = "";
	str2 = "42 Seoul";
	pr(str1, str2, 15);
	print_divider(80);

	str1 = "42 Seoul";
	str2 = "";
	pr(str1, str2, 3);
	print_divider(80);
	
	str1 = "42 Seoul";
	str2 = "42 Seoul";
	pr(str1, str2, 10);
	print_divider(80);

	str1 = "42 Seoul";
	str2 = "42 Seoul";
	pr(str1, str2, 0);
	print_divider(80);
	
	str1 = "Hi! World!";
	str2 = "Hi! 42 Seoul!";
	pr(str1, str2, 6);
	print_divider(80);

	str1 = "Lo iPsum dolor sit amet";
	str2 = "Lo ipsum Dolor sit amet";
	pr(str1, str2, 10);
	
	/*
	char	c_str1[5];
	char	c_str2[] = "TTesetseet jlkgi dus9gu90sd  aiidjgl ajds g  asidjgj asdgas sdg a sdg asd g asdioguasodgu8s89adgu90asdpgiojasdj giasjioj gioasdjgijoas8u gu8asdiogiajsdgkjass ioga89sdg90alsidgli a as9dugu90asdgokljas  9asdg9as0d9g8asdg asodd igoassd89g7";
	pr(c_str1, c_str2);
	*/

	print_divider(80);
	return (0);
}
