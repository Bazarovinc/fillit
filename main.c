/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:55:44 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/16 16:07:29 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int 	main(void)
{
	static t_tetra	*tet;
	t_map			*map;
	t_tetra			**cur;
	int i;
	int j;

	cur = &tet;
	open_file(cur);
	map->map = create_map(2, &map);
	while (*cur)
	{
		ft_putnbr((*cur)->tetramin);
		ft_putchar('\t');
		ft_putnbr((*cur)->id);
		*cur = (*cur)->next;
		ft_putchar('\n');
	}
	i = 0;
	while(i < 2)
	{
		j = 0;
		while (j < 2)
		{
			ft_putnbr(map->map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}