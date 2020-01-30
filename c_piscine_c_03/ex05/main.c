/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:16:18 by schang            #+#    #+#             */
/*   Updated: 2020/01/30 13:43:26 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int tgt_size);

void	print_divider(int tgt_size)
{
	int	i;

	i = 0;
	while (i < tgt_size)
	{
		printf("-");
		i++;
	}
	printf("\n");
}

int	main(void)
{
	unsigned int	result;

	result = 0;
	system("clear");
	printf("===== [Exercise 05] 테스트 =====\n\n");
	printf("%-10s | %-25s | %-25s | %-4s || %-25s | %-25s | result\n", "func", "dest", "src", "n", "dest", "src");
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "";
		char	src[20] = "";

		printf("%-10s | %-25s | %-25s | %-4d || ", "strlcat", dest, src, i);
		result = strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "";
		char	src[20] = "";

		printf("%-10s | %-25s | %-25s | %-4d || ", "ft_strlcat", dest, src, i);
		result = ft_strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "";
		char	src[20] = "World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "strlcat", dest, src, i);
		result = strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "";
		char	src[20] = "World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "ft_strlcat", dest, src, i);
		result = ft_strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "Hello";
		char	src[20] = "";

		printf("%-10s | %-25s | %-25s | %-4d || ", "strlcat", dest, src, i);
		result = strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "Hello";
		char	src[20] = "";

		printf("%-10s | %-25s | %-25s | %-4d || ", "ft_strlcat", dest, src, i);
		result = ft_strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "42";
		char	src[20] = "World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "strlcat", dest, src, i);
		result = strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[30] = "42";
		char	src[20] = "World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "ft_strlcat", dest, src, i);
		result = ft_strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[50] = "42 Seoul";
		char	src[20] = "Hello World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "strlcat", dest, src, i);
		result = strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[50] = "42 Seoul";
		char	src[20] = "Hello World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "ft_strlcat", dest, src, i);
		result = ft_strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	//----------------------------
	for (int i = 0; i < 18; i++)
	{
		char	dest[10] = "42 Seoul";
		char	src[20] = "Hello World";

		printf("%-10s | %-25s | %-25s | %-4d || ", "ft_strlcat", dest, src, i);
		result = ft_strlcat(dest, src, i);
		printf("%-25s | %-25s | %-4i\n", dest, src, result);
	}
	print_divider(150);

	return (0);
}
