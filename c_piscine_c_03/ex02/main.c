/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:14:32 by schang            #+#    #+#             */
/*   Updated: 2020/01/29 20:24:23 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

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
	printf("===== [Exercise 02] 테스트 =====\n\n");
	printf("%-10s || result\n", "data");
	print_divider(80);

	char	dest1[30] = "42 Seoul!";
	char	src1[10] = "Hello!";
	printf("%-10s || %s\n", "dest", dest1);
	printf("%-10s || %s\n", "src", src1);
	print_divider(80);
	ft_strcat(dest1, src1);
	printf("%-10s || %s\n", "ft_strcat", dest1);

	char	dest2[30] = "42 Seoul!";
	char	src2[10] = "Hello!";
	strcat(dest2, src2);
	printf("%-10s || %s\n", "strcat", dest2);;
	//------------------------

	printf("\n");
	print_divider(80);
	char	dest4[30] = "Lorem ipsum";
	char	src4[50] = "dolor sit amet";
	printf("%-10s || %s\n", "dest", dest4);
	printf("%-10s || %s\n", "src", src4);
	print_divider(80);
	ft_strcat(dest4, src4);
	printf("%-10s || %s\n", "ft_strcat", dest4);
	
	char	dest5[30] = "Lorem ipsum";
	char	src5[50] = "dolor sit amet";
	strcat(dest5, src5);
	printf("%-10s || %s\n", "strcat", dest5);
	//-----------------




	print_divider(80);
	return (0);
}
