/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:54:34 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/16 15:38:48 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/includes/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 21


# define tet_1(x, y) x = 1, y = 4
# define tet_2(x, y) x = 4, y = 1
# define tet_3(x, y) x = 2, y = 2
# define tet_4(x, y) x = 3, y = 2
# define tet_5(x, y) x = 2, y = 3

typedef	struct s_tetra	t_tetra;

struct					s_tetra
{
	int		tetramin;
	int 	id;
	t_tetra	*next;
};

typedef struct s_map	t_map;

struct					s_map
{
	int		**map;
	int 	map_size;
};

void 					read_from_file(t_tetra **tet, int fd);
void					ft_error(t_tetra *tet);
t_tetra					*create_list(t_tetra **begin, int id, char *s);
int 					ft_tetramin(char *s);
void					open_file(t_tetra **cur);
int 					**create_map(int size, t_map **map);

#endif
