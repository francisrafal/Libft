# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frafal <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 20:59:46 by frafal            #+#    #+#              #
#    Updated: 2022/10/03 21:20:18 by frafal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= cc
FLAGS	:= -Wall -Wextra -Werror
SRCS	:= $(wildcard *.c)
OBJS	:= ${SRCS:.c=.o}
RM	    := rm -f

%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

${NAME}:	${OBJS}
			@ echo "Compilation of $(NAME) ..."
			ar rcs ${NAME} ${OBJS}
			@ echo "$(NAME) created"

all:		${NAME}

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "Deleting $(NAME) objs"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "Deleting $(NAME) binary"

re:			fclean all

.PHONY:		all clean fclean re
