/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:12:13 by hmin              #+#    #+#             */
/*   Updated: 2020/02/13 08:37:27 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

/*
************************ includes ***********************
*/

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

/*
************************ defines ***********************
*/

typedef int	t_bool;

# define FIND_MIN(a, b) ((a < b) ? a : b)
# define TRUE 1
# define FALSE 0

/*
************************ globals ***********************
*/

/*
** global vars to check validity & use
*/

extern int	g_col;
extern int	g_row;
extern char	g_empty;
extern char	g_obs;
extern char	g_full;

extern char g_tmp_info[15];
extern char **g_board;
extern int	**g_dp;

/*
** global vars for temp use
*/

extern int	g_max;
extern int	g_i_flag;
extern int	g_j_flag;
extern int	g_i;
extern int	g_j;

/*
************************ prototypes ***********************
*/

void	print_board(int i_flag, int j_flag, int max);
int		check_error(void);
int		is_board_info_not_identical(void);
int		is_valid_char(void);
int		check_valid_file(char *file_name);
void	solution(void);
int		check_buf(int *i, int *j, char buf);
void	check_g_row (int *i, int *j);
void	init_g_board_dp(void);
void	free_g_board_dp(void);
int		logic(char *file_name);

#endif
