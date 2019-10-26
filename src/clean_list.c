/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:07:48 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/26 12:42:19 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

void	clean_list(t_tetra *tet, t_map *map)
{
	t_tetra *cur;

	if (tet)
	{
		cur = tet;
		while (tet)
		{
			cur = tet->next;
			tet->tetramin = 0;
			tet->id = 0;
			tet->next = NULL;
			free(tet);
			tet = cur;
		}
	}
	if (map)
		free(map);
}
