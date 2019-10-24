# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ophuong <ophuong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 20:26:08 by ophuong           #+#    #+#              #
#    Updated: 2019/10/24 19:08:35 by ophuong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAG = -Wall -Wextra -Werror

INC_DIRS = -I./libft/includes - I./

CC = gcc

LIB_FT = -L/libft/ -lft

SRC = check_place.c clean_map.c create_list.c create_map.c \
	delete_from_map.c fill.c ft_error.c ft_tetramine.c main.c \
	open_file.c print_map.c put_in_map.c read_from_file.c \
	size_map.c

OBJ = $(src:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C ./libft
	$(CC) $(FLAG) $(INC_DIRS) $(LIB_FT) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAG) $(INC_DIRS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	@$(MAKE) -C ./libft clean

fclean: clean
	rm -rf $(NAME)
	@$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re mlft