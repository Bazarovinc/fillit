# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ophuong <ophuong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 20:26:08 by ophuong           #+#    #+#              #
#    Updated: 2019/10/26 12:39:17 by ctelma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

FLAG = -Wall -Wextra -Werror

FLAGINC = -I

PATH_LIB = ./libft/

HEARDS = header/fillit.h

CFILE = src/check_place.c src/clean_map.c src/create_list.c src/create_map.c \
        src/delete_from_map.c src/fill.c src/ft_error.c src/ft_tetramin.c \
        src/open_file.c src/print_map.c src/put_in_map.c src/read_from_file.c \
        src/size_map.c src/clean_list.c src/clear_memory.c src/map_new.c \
	src/solve.c src/main.c

OBG = src/check_place.o src/clean_map.o src/create_list.o src/create_map.o \
        src/delete_from_map.o src/fill.o src/ft_error.o src/ft_tetramin.o \
        src/open_file.o src/print_map.o src/put_in_map.o src/read_from_file.o \
        src/size_map.o src/clean_list.o src/clear_memory.o src/map_new.o \
	src/solve.o src/main.o

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