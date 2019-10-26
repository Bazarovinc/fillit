/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:37:25 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/26 12:42:19 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

static void		put_new(int size, int **map_n)
{
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		map_n[i][j] = 0;
		i++;
	}
	i--;
	j = 0;
	while (j < size)
	{
		map_n[i][j] = 0;
		j++;
	}
}

static int		**re_recreation(int size_new, int size_old, int **map_o)
{
	int i;
	int j;
	int **map_n;

	if (!(map_n = (int**)malloc(sizeof(int*) * size_new)))
		return (0);
	i = 0;
	while (i < size_old)
	{
		j = 0;
		if ((map_n[i] = (int*)malloc(sizeof(int) * size_new)))
		{
			while (j < size_old)
			{
				map_n[i][j] = map_o[i][j];
				j++;
			}
			i++;
		}
	}
	if ((map_n[i] = (int*)malloc(sizeof(int) * size_new)))
		put_new(size_new, map_n);
	clean_map(map_o, size_old);
	return (map_n);
}

int				create_map(int size, t_map *map)
{
	int i;
	int j;

	if (!map->map || map->map_size == 0)
	{
		if (!(map->map = (int**)malloc(sizeof(int*) * size)))
			return (0);
		i = 0;
		while (i < size)
		{
			j = 0;
			if ((map->map[i] = (int*)malloc(sizeof(int) * size)))
				while (j < size)
				{
					map->map[i][j] = 0;
					j++;
				}
			i++;
		}
	}
	else
		map->map = re_recreation(size, map->map_size, map->map);
	map->map_size = size;
	return (1);
}
