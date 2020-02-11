/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_num.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:50:16 by hsun              #+#    #+#             */
/*   Updated: 2020/02/09 20:45:47 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIVIDE_NUM_H
# define DIVIDE_NUM_H

int		cmp(int *first, int first_len, int *second, int second_len);
void	div_init(char *str, int *arr, int *len);
void	go_init(int *first, int *second, int *third);

/*
**	g_f_l == global first len
**	g_s_l == global second len
*/

int g_fst[10001];
int	g_f_l;
int g_sec[10001];
int	g_s_l;
int g_quot[10003];
int g_quot_len = 2;
int g_rmd[10001];
int g_rmd_len;

#endif
