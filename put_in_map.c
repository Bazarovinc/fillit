/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:12:02 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/20 14:55:59 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void part_1(t_map *map, t_tetra *cur, int i, int j)
{
	if (cur->tetramin == 1)
		P_1(map->map, i, j, cur->id);
	if (cur->tetramin == 2)
		P_2(map->map, i, j, cur->id);
	if (cur->tetramin == 3)
		P_3(map->map, i, j, cur->id);
	if (cur->tetramin == 4)
		P_4(map->map, i, j, cur->id);
	if (cur->tetramin == 5)
		P_5(map->map, i, j, cur->id);
	if (cur->tetramin == 6)
		P_6(map->map, i, j, cur->id);
	if (cur->tetramin == 7)
		P_7(map->map, i, j, cur->id);
	if (cur->tetramin == 8)
		P_8(map->map, i, j, cur->id);
	if (cur->tetramin == 9)
		P_9(map->map, i, j, cur->id);
	if (cur->tetramin == 10)
		P_10(map->map, i, j, cur->id);
}

static void part_2(t_map *map, t_tetra *cur, int i, int j)
{
	if (cur->tetramin == 1)
		P11(map->map, i, j, cur->id);
	if (cur->tetramin == 2)
		P12(map->map, i, j, cur->id);
	if (cur->tetramin == 3)
		P13(map->map, i, j, cur->id);
	if (cur->tetramin == 4)
		P14(map->map, i, j, cur->id);
	if (cur->tetramin == 5)
		P15(map->map, i, j, cur->id);
	if (cur->tetramin == 6)
		P16(map->map, i, j, cur->id);
	if (cur->tetramin == 7)
		P17(map->map, i, j, cur->id);
	if (cur->tetramin == 8)
		P18(map->map, i, j, cur->id);
	if (cur->tetramin == 9)
		P19(map->map, i, j, cur->id);
}

void put_in_map(t_map *map, t_tetra *cur, int i, int j)
{

	if (cur->tetramin >= 1 && cur->tetramin <= 10)
		part_1(map, cur, i, j);
	if (cur->tetramin >= 11 && cur->tetramin <= 19)
		part_2(map, cur, i, j);
}