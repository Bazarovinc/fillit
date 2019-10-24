/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:02:21 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/24 20:19:35 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void					solve(char *file)
{
	t_map			*map;
	t_tetra			*cur;
	int				quant;

	map = map_new();
	if (create_map(size_map(open_file(&cur, &quant, file, map)), map))
		while (fill(map, cur, quant, 0) == 0)
			create_map(map->map_size + 1, map);
	print_map(map->map, map->map_size);
	clear_memory(map, cur);
}