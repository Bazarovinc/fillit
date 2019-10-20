/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:37:25 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/16 16:07:06 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		**re_recreation(int size_new, int size_old, int **map_o)
{
	int i;
	int j;
	int **map_n;

	if (!(map_n = (int**)malloc(sizeof(int*) * size_new)))
		return (0);
	i = 0;
	while (i < size_new)
	{
		j = 0;
		map_n[i] = (int*)malloc(sizeof(int) * size_new);
		while (j < size_new)
		{
			if (j < size_old)
				map_n[i][j] = map_o[i][j];
			else
				map_n[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map_n);
}

int				**create_map(int size, t_map **map)
{
	int i;
	int j;

	if (!(*map)->map)
	{
		(*map)->map_size = size;
		if(!((*map)->map = (int**)malloc(sizeof(int*) * size)))
			return (0);
		i = 0;
		while (i < size)
		{
			j = 0;
			(*map)->map[i] = (int*)malloc(sizeof(int) * size);
			while (j < size)
			{
				(*map)->map[i][j] = 0;
				j++;
			}
			i++;
		}
	}
	else
		(*map)->map = re_recreation(size, (*map)->map_size, (*map)->map);
	return ((*map)->map);
}
