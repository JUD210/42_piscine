/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:14:32 by schang            #+#    #+#             */
/*   Updated: 2020/01/29 20:59:53 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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
	system("clear");
	printf("===== [Exercise 03] 테스트 =====\n\n");
	printf("%-10s | %-15s | %-15s | %-4s || result\n"
			, "func", "dest", "src", "n");
	print_divider(80);

	//----------------------------
	for (int i = 0; i < 10; i++)
	{
		char	dest[30] = "";
		char	src[20] = "";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "strncat", dest, src, i);
		strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	for (int i = 0; i < 10; i++)
	{
		char	dest[30] = "";
		char	src[20] = "";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "ft_strncat", dest, src, i);
		ft_strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	//----------------------------
	for (int i = 0; i < 10; i++)
	{
		char	dest[30] = "";
		char	src[20] = "42 Seoul";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "strncat", dest, src, i);
		strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	for (int i = 0; i < 10; i++)
	{
		char	dest[30] = "";
		char	src[20] = "42 Seoul";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "ft_strncat", dest, src, i);
		ft_strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	//----------------------------
	for (int i = 0; i < 10; i++)
	{
		char	dest[30] = "42 Seoul";
		char	src[20] = "";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "strncat", dest, src, i);
		strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	for (int i = 0; i < 10; i++)
	{
		char	dest[30] = "42 Seoul";
		char	src[20] = "";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "ft_strncat", dest, src, i);
		ft_strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	//---------------------------
	for (int i = 0; i < 15; i++)
	{
		char	dest[30] = "42 Seoul";
		char	src[15] = "Hello";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "strncat", dest, src, i);
		strncat(dest, src, i);
		printf("%s\n", dest);
	}
	print_divider(80);

	for (unsigned int i = 0; i < 15; i++)
	{
		char	dest[30] = "42 Seoul";
		char	src[15] = "Hello";

		printf("%-10s | %-15s | %-15s | %-4d || "
				, "ft_strncat", dest, src, i);
		ft_strncat(dest, src, i);
		printf("%s\n", dest);
	}

	/*
	char	dest1[30] = "42 Seoul!";
	char	src1[10] = "Hello!";
	printf("%-10s || %s\n", "dest", dest1);
	printf("%-10s || %s\n", "src", src1);
	print_divider(80);
	ft_strncat(dest1, src1);
	printf("%-10s || %s\n", "ft_strncat", dest1);

	char	dest2[30] = "42 Seoul!";
	char	src2[10] = "Hello!";
	strncat(dest2, src2);
	printf("%-10s || %s\n", "strncat", dest2);;
	//------------------------

	printf("\n");
	print_divider(80);
	char	dest4[30] = "Lorem ipsum";
	char	src4[50] = "dolor sit amet";
	printf("%-10s || %s\n", "dest", dest4);
	printf("%-10s || %s\n", "src", src4);
	print_divider(80);
	ft_strncat(dest4, src4);
	printf("%-10s || %s\n", "ft_strncat", dest4);
	
	char	dest5[30] = "Lorem ipsum";
	char	src5[50] = "dolor sit amet";
	strncat(dest5, src5);
	printf("%-10s || %s\n", "strncat", dest5);
	//-----------------
	*/



	print_divider(80);
	return (0);
}
