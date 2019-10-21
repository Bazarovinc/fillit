/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:55:44 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/21 15:46:26 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

int		main(void)
{
	static t_tetra	*tet;
	t_map			*map;
	t_tetra			**cur;
	int quant;
	int check;

	cur = &tet;
	if (create_map(size_map(open_file(cur, &quant)), &map))
		while (fill(map, *cur, quant, 0) == 0)
			create_map(map->map_size + 1, &map);
	print_map(map->map, map->map_size);
}
