# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlorne <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 16:24:07 by tlorne            #+#    #+#              #
#    Updated: 2022/11/20 18:41:24 by tlorne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c ft_atoi.c ft_work_num.c ft_show_tab.c ft_creation.c 

OBJ = ${SRCS:.c=.o}

NAME = rush-02

.c.o:
	gcc -c -Wall -Werror -Wextra $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	gcc -o ${NAME} ${OBJ}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
