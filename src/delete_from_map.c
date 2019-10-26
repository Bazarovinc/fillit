/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_from_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:16:15 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/26 12:42:19 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

void	delete_from_map(t_map *map, t_tetra *cur)
{
	int i;
	int j;

	i = 0;
	while (i < map->map_size)
	{
		j = 0;
		while (j < map->map_size)
		{
			if (map->map[i][j] == cur->id)
				map->map[i][j] = 0;
			j++;
		}
		i++;
	}
}
