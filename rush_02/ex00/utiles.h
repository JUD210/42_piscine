/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:23:50 by seohong           #+#    #+#             */
/*   Updated: 2020/02/09 21:52:01 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILES_H
# define UTILES_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

struct	s_dic
{
	char	*key;
	char	*value;
};

typedef struct s_dic	t_dic;

/*
**	parse_dic.c
*/

t_dic	*parse(int fd, int flag, char *file);

/*
**	ft_str_split.c
*/

char	**ft_str_split(char *str, char *charset);

/*
**	ft_strjoin.c
*/

char	*ft_strjoin(int size, char **strs, char *sep);

/*
**	free.c
*/

void	free_split(char **strs);
void	free_dic(t_dic *dic);

/*
**	sort.c
*/

void	sort(t_dic *tab, int size);
int		str_len(char *str);
int		ft_cmp(char *s1, char *s2);

/*
**	solve_jt.c
*/

void	solve(char *num, t_dic *dict, char *str, int i);
void	split_join(void);

/*
**	divide_num.c
*/

void	divide(char *first, char *second, char *quot, char *rmd);

/*
**	str_utiles.c
*/

char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);

/*
**	global variables
*/

int		g_len;
int		g_error;
char	g_result[100000];
int		g_result_idx;

#endif
