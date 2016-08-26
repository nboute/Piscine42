# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 13:52:52 by nboute            #+#    #+#              #
#    Updated: 2016/08/18 15:59:41 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_advanced_do_op.c \
	  srcs/ft_atoi.c \
	  srcs/ft_putnbr.c \
	  srcs/ft_putchar.c \
	  srcs/functions.c \
	  srcs/functions_2.c

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all
