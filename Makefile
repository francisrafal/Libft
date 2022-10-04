# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frafal <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 20:59:46 by frafal            #+#    #+#              #
#    Updated: 2022/10/04 10:44:52 by frafal           ###   ########.fr        #
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
			@ ar rcs ${NAME} ${OBJS}
			@ echo "$(NAME) created"

all:		${NAME}

clean:
			@ ${RM} *.o
			@ echo "Deleting $(NAME) objects"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "Deleting $(NAME) library"

re:			fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:		all clean fclean re so
