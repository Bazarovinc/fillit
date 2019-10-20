/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:10:50 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/20 16:19:43 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void print_map(int **map, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (map[i][j] == 0)
				ft_putchar('.');
			else
				ft_putchar('A' + map[i][j] - 1);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}