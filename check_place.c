/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_place.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:30:28 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/20 12:41:57 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int part_one(t_map *map, int tet, int i, int j)
{
	if (tet == 1 && map->map[i][j] == 0 && map->map[i + 1][j] == 0
		&& map->map[i + 2][j] == 0 && map->map[i + 3][j] == 0)
		return (1);
	if (tet == 2 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i][j + 2] == 0 && map->map[i][j + 3] == 0)
		return (2);
	if (tet == 3 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 1][j] == 0)
		return (3);
	if (tet == 4 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i][j + 2] == 0 && map->map[i + 1][j + 2] == 0)
		return (4);
	if (tet == 5 && map->map[i + 1][j] == 0 && map->map[i + 1][j + 1] == 0
		&& map->map[i + 1][j + 2] == 0 && map->map[i][j + 2] == 0)
		return (5);
	if (tet == 6 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i + 1][j] == 0 && map->map[i + 2][j] == 0)
		return (6);
	if (tet == 7 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 2][j + 1] == 0)
		return (7);
	return (0);
}

static int	part_two(t_map *map, int tet, int i, int j)
{
	if (tet == 8 && map->map[i][j] == 0 && map->map[i + 1][j] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 1][j + 2] == 0)
		return (8);
	if (tet == 9 && map->map[i][j] == 0 && map->map[i + 1][j] == 0
		&& map->map[i][j + 1] == 0 && map->map[i][j + 2] == 0)
		return (9);
	if (tet == 10 && map->map[i][j] == 0 && map->map[i + 2][j + 1] == 0
		&& map->map[i + 1][j] == 0 && map->map[i + 2][j] == 0)
		return (10);
	if (tet == 11 && map->map[i][j + 1] == 0 && map->map[i + 1][j + 1] == 0
		&& map->map[i + 2][j + 1] == 0 && map->map[i + 2][j] == 0)
		return (11);
	if (tet == 12 && map->map[i][j + 1] == 0 && map->map[i + 1][j] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 1][j + 2] == 0)
		return (12);
	if (tet == 13 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i][j + 2] == 0 && map->map[i + 1][j + 1] == 0)
		return (13);
	if (tet == 14 && map->map[i][j] == 0 && map->map[i + 1][j] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 2][j] == 0)
		return (14);
	return (0);
}

static int	part_three(t_map *map, int tet, int i, int j)
{
	if (tet == 15 && map->map[i][j + 1] == 0 && map->map[i + 1][j + 1] == 0
		&& map->map[i + 1][j] == 0 && map->map[i + 2][j + 1] == 0)
		return (15);
	if (tet == 16 && map->map[i][j] == 0 && map->map[i][j + 1] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 1][j + 2] == 0)
		return (16);
	if (tet == 17 && map->map[i][j + 1] == 0 && map->map[i][j + 2] == 0
		&& map->map[i + 1][j] == 0 && map->map[i + 1][j + 1] == 0)
		return (17);
	if (tet == 18 && map->map[i][j + 1] == 0 && map->map[i + 1][j + 1] == 0
		&& map->map[i + 1][j] == 0 && map->map[i + 2][j] == 0)
		return (18);
	if (tet == 19 && map->map[i][j] == 0 && map->map[i + 1][j] == 0
		&& map->map[i + 1][j + 1] == 0 && map->map[i + 2][j + 1] == 0)
		return (19);
	return (0);
}

int		check_place(t_map *map, t_tetra *cur, int i, int j)
{
	if (part_one(map, cur->tetramin, i, j) != 0)
		return (0);
	if (part_two(map, cur->tetramin, i, j) != 0)
		return (0);
	if (part_three(map, cur->tetramin, i, j) != 0)
		return (0);
	return (1);
}