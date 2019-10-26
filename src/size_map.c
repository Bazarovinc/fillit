/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <ophuong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:23:24 by ophuong           #+#    #+#             */
/*   Updated: 2019/10/26 12:43:38 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

int		size_map(int nb_tet)
{
	int size;

	if (ft_sqrt(nb_tet * 4) != 0)
		size = ft_sqrt(nb_tet * 4);
	else
	{
		while (ft_sqrt(nb_tet * 4) == 0)
			nb_tet--;
		size = ft_sqrt(nb_tet * 4) + 1;
	}
	return (size);
}
