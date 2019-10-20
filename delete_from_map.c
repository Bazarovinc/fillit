/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_from_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:16:15 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/20 11:30:22 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void delete_from_map(t_map *map, t_tetra *cur, int i, int j)
{
	int x;
	int y;

	while (i < map->map_size)
	{
		while (j < map->map_size)
		{
			if (map->map[i][j] == cur->id)
				map->map[i][j] = 0;
			j++;
		}
		i++;
	}
}