# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmin <hmin@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/12 10:15:27 by hmin              #+#    #+#              #
#    Updated: 2020/02/13 08:39:15 by hmin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	= bsq
SRCS	= main.c str_utils.c check_valid_file.c check_error.c solution.c print_board.c init_global.c
OBJS	= ${SRCS:.c=.o}
WS		= -Wall -Wextra -Werror
INC		= header.h

all: ${TARGET}

.c.o:
	gcc ${WS} -c $< -o ${<:.c=.o} -I ${INC}

${TARGET}: ${OBJS}
	gcc ${WS} ${OBJS} -o ${TARGET}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${TARGET}

re: fclean all

.PHONY: all clean fclean re

############ BACKUP yoolee's
# CC = gcc
# TARGET = bsq
# CFAGS = -Wall -Wextra -Werror
# #all:
# #	${TARGET}

# #인자가 아무것도 없을때 all 호출

# ${TARGET}:
# 	${CC} ${CFAGS} -o ${TARGET} main.c str_utils.c check_valid_file.c check_error.c solution.c print_board.c

# fclean :
# 	rm -rf ${TARGET}

# clean:
# 	rm -f ${OBJS}

# re: fclean all


######### BACKUP MY MAKEFILE
#
#	TARGET	= bsq
#
#	# SRCS	= main.c srcs/solution.c
#	BUILD_DIR	?= ./
#	SRC_DIR		?= ./srcs
#	SRCS 		= $(shell find $(SRC_DIRS) -name *.c)
#	OBJS		= ${SRCS.%=$(BUILD_DIR)/%.o}
#	INCPATH		= headers/
#	CFLAGS		= -Wall -Wextra -Werror
#
#	all: ${TARGET}
#
#	$(BUILD_DIR)/%.c.o: %.c
#		$(MKDIR_P) $(dir $@)
#		$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
#
#	.c.o:
#		gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCPATH}
#
#	${TARGET}: ${OBJS}
#		gcc ${CFLAGS} ${OBJS} -o ${TARGET}
#
#	clean:
#		/bin/rm -f ${OBJS}
#
#	fclean: clean
#		/bin/rm -f ${TARGET}
#
#	re: fclean all
