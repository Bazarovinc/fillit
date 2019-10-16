/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:20:52 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/16 17:20:17 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	get_size(int *x, int *y, t_tetra *cur)
{
	if (cur->tetramin == 1)
		tet_1(*x, *y);
	if (cur->tetramin == 2)
		tet_2(*x, *y);
	if (cur->tetramin == 3)
		tet_3(*x, *y);
	if (cur->tetramin == 4 || cur->tetramin == 5 || cur->tetramin == 8 || cur->tetramin == 9
		|| cur->tetramin == 12 || cur->tetramin == 13 ||cur->tetramin == 16 || cur->tetramin == 17)
		tet_4(*x, *y);
	if (cur->tetramin == 6 || cur->tetramin == 7 || cur->tetramin == 10 || cur->tetramin == 11
		|| cur->tetramin == 14 || cur->tetramin == 15 ||cur->tetramin == 18 || cur->tetramin == 19)
		tet_4(*x, *y);
}

int		fill(t_map *map, t_tetra *cur)
{
	int	tet_x;
	int tet_y;

	get_size(&tet_x, &tet_y, cur);
}