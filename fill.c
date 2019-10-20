/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:20:52 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/20 16:19:43 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	get_size(t_tetra *cur)
{
	if (cur->tetramin == 1)
		TET_1(cur->size_x, cur->size_y);
	if (cur->tetramin == 2)
		TET_2(cur->size_x, cur->size_y);
	if (cur->tetramin == 3)
		TET_3(cur->size_x, cur->size_y);
	if (cur->tetramin == 4 || cur->tetramin == 5 || cur->tetramin == 8 ||
			cur->tetramin == 9 || cur->tetramin == 12 || cur->tetramin == 13 ||
			cur->tetramin == 16 || cur->tetramin == 17)
		TET_4(cur->size_x, cur->size_y);
	if (cur->tetramin == 6 || cur->tetramin == 7 || cur->tetramin == 10 ||
			cur->tetramin == 11 || cur->tetramin == 14 || cur->tetramin == 15 ||
			cur->tetramin == 18 || cur->tetramin == 19)
		TET_5(cur->size_x, cur->size_y);
}

static int	try_to_put(t_map *map, t_tetra *cur, int i, int j)
{
	if (i + cur->size_y > map->map_size || j + cur->size_x > map->map_size)
		return (0);
	if (check_place(map, cur, i, j))
		return (0);
	return (1);
}

int			fill(t_map *map, t_tetra *cur) {
	int i;
	int j;

	i = 0;
	if (cur)
	{
		get_size(cur);
		while (i < map->map_size)
		{
			j = 0;
			while (j < map->map_size)
			{
				if (try_to_put(map, cur, i, j))
				{
					put_in_map(map, cur, i, j);
					print_map(map->map, map->map_size);
					if (fill(map, cur->next))
						return (1);
					else
						delete_from_map(map, cur, i, j);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}
