/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:10:36 by hmin              #+#    #+#             */
/*   Updated: 2020/01/30 16:39:17 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern	int	ft_strcmp(char *s1, char *s2);

void	pr(char *s1, char *s2)
{
	printf("%-20s | %-20s || %-20d | %-20d\n"
			, s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
}

void	divider(int size, char ch)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%c", ch);
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
	printf("===== [Exercise 00] 테스트 =====\n\n");
	printf("%-20s | %-20s || %-20s | %-20s\n", 
			"str1", "str2", "ft_strcmp", "strcmp");

	divider(80, '=');

	str2 = "42 SEOUL";
	pr(str3, str2);
	
	str1 = "42 SEOUL";
	str2 = "42 SEOUL";
	pr(str1, str2);

	str1 = "";
	str2 = "";
	pr(str1, str2);

	str1 = "";
	str2 = " ";
	pr(str1, str2);
	
	str1 = "42 Seoul";
	str2 = "";
	pr(str1, str2);


	str1 = "";
	str2 = "4";
	pr(str1, str2);

	str1 = "42 Seoul";
	str2 = "42 SeoulTest";
	pr(str1, str2);

	str1 = "42 Seoul Test";
	str2 = "42 Seoul";
	pr(str1, str2);

	str1 = "0";
	str2 = "9";
	pr(str1, str2);

	str1 = "0";
	str2 = "95";
	pr(str1, str2);
	
	str1 = "Abcde";
	str2 = "Bbcde";
	pr(str1, str2);

	str1 = "ABC BBC";
	str2 = "ABC ABC";
	pr(str1, str2);

	str1 = "a";
	str2 = "b";
	pr(str1, str2);

	/*
	char	c_str1[5];
	char	c_str2[] = "TTesetseet jlkgi dus9gu90sd  aiidjgl ajds g  asidjgj asdgas sdg a sdg asd g asdioguasodgu8s89adgu90asdpgiojasdj giasjioj gioasdjgijoas8u gu8asdiogiajsdgkjass ioga89sdg90alsidgli a as9dugu90asdgokljas  9asdg9as0d9g8asdg asodd igoassd89g7";
	pr(c_str1, c_str2);
	*/

	divider(80, '=');
	return (0);
}
