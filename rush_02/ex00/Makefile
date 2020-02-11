# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 20:42:14 by hmin              #+#    #+#              #
#    Updated: 2020/02/09 20:44:33 by hmin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	= rush-02
SRCS	= rush_02.c divide_ntils.c divide_num.c free.c ft_str_split.c ft_strjoin.c parse_dic.c solve_jt.c sort.c str_utiles.c
OBJS	= ${SRCS:.c=.o}
WS		= -Wall -Wextra -Werror
INC1	= divide_num.h
INC2	= utiles.h

all: ${TARGET}

.c.o:
	gcc ${WS} -c $< -o ${<:.c=.o} -I ${INC1} -I ${INC2}

${TARGET}: ${OBJS}
	gcc ${WS} ${OBJS} -o ${TARGET}

clean:
	/bin/rm -f ${OBJS}

fclean: clean
	/bin/rm -f ${TARGET}

re: fclean all
