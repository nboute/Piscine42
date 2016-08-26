# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 10:52:37 by vdestrai          #+#    #+#              #
#    Updated: 2016/08/24 21:36:42 by vdestrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
DIR_SRC = srcs/
SRC = main.c ft_grid.c ft_struct.c ft_str_basics.c ft_split.c\
	  ft_test.c ft_read_std_input.c ft_str_long.c ft_solve.c
DIR_INCLUDE = includes/
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $@ $^

$(OBJ):
	gcc -c $(FLAGS) $(addprefix $(DIR_SRC), $(SRC)) -I $(DIR_INCLUDE)

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
