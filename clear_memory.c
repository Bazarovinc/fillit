/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:09:25 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/24 20:16:18 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void					clear_memory(t_map *map, t_tetra *cur)
{
	clean_list(cur, map);
	clean_map(map->map, map->map_size);
}