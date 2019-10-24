# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ophuong <ophuong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 20:26:08 by ophuong           #+#    #+#              #
#    Updated: 2019/10/24 21:32:10 by ctelma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

FLAG = -Wall -Wextra -Werror

FLAGINC = -I

PATH_LIB = ./libft/

HEARDS = fillit.h

CFILE = check_place.c clean_map.c create_list.c create_map.c \
        delete_from_map.c fill.c ft_error.c ft_tetramin.c \
        open_file.c print_map.c put_in_map.c read_from_file.c \
        size_map.c clean_list.c clear_memory.c map_new.c solve.c\
        main.c

OBG = check_place.o clean_map.o create_list.o create_map.o \
		delete_from_map.o fill.o ft_error.o ft_tetramin.o \
		open_file.o print_map.o put_in_map.o read_from_file.o \
		size_map.o clean_list.o clear_memory.o map_new.o solve.o\
		main.o

all: $(NAME)
$(NAME): $(OBG)
	make $(FLAG) -C $(PATH_LIB)
	$(CC) -I $(HEARDS) -o $(NAME) $(OBG) -L $(PATH_LIB) -lft

%.o: %.c $(HEARDS)
	$(CC) $(FLAGINC) $(FLAG) -c $< -o $@

clean:
	make -C $(PATH_LIB) clean
	rm -f $(OBG)

fclean: clean
	make -C $(PATH_LIB) fclean
	rm -f $(NAME)

re: fclean all