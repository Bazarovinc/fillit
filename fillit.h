/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:54:34 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/21 16:06:06 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/includes/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 21

# define TET_1(x, y) x = 1, y = 4
# define TET_2(x, y) x = 4, y = 1
# define TET_3(x, y) x = 2, y = 2
# define TET_4(x, y) x = 3, y = 2
# define TET_5(x, y) x = 2, y = 3
# define P_1(m, i, j, n) m[i][j]=n,m[i+1][j]=n,m[i+2][j]=n,m[i+3][j]=n
# define P_2(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i][j+2]=n,m[i][j+3]=n
# define P_3(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i+1][j+1]=n,m[i+1][j]=n
# define P_4(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i][j+2]=n,m[i+1][j+2]=n
# define P_5(m, i, j, n) m[i+1][j]=n,m[i+1][j+1]=n,m[i+1][j+2]=n,m[i][j+2]=n
# define P_6(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i+1][j]=n,m[i+2][j]=n
# define P_7(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i+1][j+1]=n,m[i+2][j+1]=n
# define P_8(m, i, j, n) m[i][j]=n,m[i+1][j]=n,m[i+1][j+1]=n,m[i+1][j+2]=n
# define P_9(m, i, j, n) m[i][j]=n,m[i+1][j]=n,m[i][j+1]=n,m[i][j+2]=n
# define P_10(m, i, j, n) m[i][j]=n,m[i+2][j+1]=n,m[i+1][j]=n,m[i+2][j]=n
# define P_11(m, i, j, n) m[i][j+1]=n,m[i+1][j+1]=n,m[i+2][j+1]=n,m[i+2][j]=n
# define P_12(m, i, j, n) m[i][j+1]=n,m[i+1][j]=n,m[i+1][j+1]=n,m[i+1][j+2]=n
# define P_13(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i][j+2]=n,m[i+1][j+1]=n
# define P_14(m, i, j, n) m[i][j]=n,m[i+1][j]=n,m[i+1][j+1]=n,m[i+2][j]=n
# define P_15(m, i, j, n) m[i][j+1]=n,m[i+1][j+1]=n, m[i+1][j]=n,m[i+2][j+1]=n
# define P_16(m, i, j, n) m[i][j]=n,m[i][j+1]=n,m[i+1][j+1]=n,m[i+1][j+2]=n
# define P_17(m, i, j, n) m[i][j+1]=n,m[i][j+2]=n, m[i+1][j]=n,m[i+1][j+1]=n
# define P_18(m, i, j, n) m[i][j+1]=n,m[i+1][j+1]=n,m[i+1][j]=n,m[i+2][j]=n
# define P_19(m, i, j, n) m[i][j]=n,m[i+1][j]=n,m[i+1][j+1]=n,m[i+2][j+1]=n

typedef	struct s_tetra	t_tetra;

struct					s_tetra
{
	int					tetramin;
	int					size_x;
	int					size_y;
	int					id;
	t_tetra				*next;
};

typedef struct s_map	t_map;

struct					s_map
{
	int					**map;
	int					map_size;
};

int						read_from_file(t_tetra **tet, int fd);
void					ft_error(t_tetra *tet);
t_tetra					*create_list(t_tetra **begin, int id, char *s);
int						ft_tetramin(char *s);
int						open_file(t_tetra **cur, int *quant);
int						create_map(int size, t_map **map);
int						size_map(int nb_tet);
void					put_in_map(t_map *map, t_tetra *cur, int i, int j);
void					delete_from_map(t_map *map, t_tetra *cur);
int						check_place(t_map *map, t_tetra *cur, int i, int j);
int						fill(t_map *map, t_tetra *cur, int quant, int op);
void					print_map(int **map, int size);
void					clean_map(int **nums);

#endif
