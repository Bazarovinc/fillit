/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:58:27 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/12 17:06:05 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_del_tetra(t_tetra *tet)
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
}

void		ft_error(t_tetra *tet)
{
	ft_del_tetra(tet);
	ft_putstr_fd("Error!", 1);
	exit(1);
}