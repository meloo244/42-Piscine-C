# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocassany <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 09:01:27 by ocassany          #+#    #+#              #
#    Updated: 2022/11/23 20:35:29 by mchiboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
GCC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/
FILES = $(SRCS)file_input.c \
		$(SRCS)find_square.c \
		$(SRCS)ft_utils.c \
		$(SRCS)ft_verif_params.c \
		$(SRCS)main.c \
		$(SRCS)standard_input.c
OBJS = $(FILES:.c=.o)

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME)

.c.o:
	$(GCC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(SRCS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
