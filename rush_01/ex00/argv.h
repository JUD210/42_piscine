/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:55:52 by jeoryu            #+#    #+#             */
/*   Updated: 2020/02/02 22:12:14 by hmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	argv_to_idx(int *g_idx, char *argv[]);
int		is_valid_idx(int *g_idx);
int		exception_handling(int *g_idx);