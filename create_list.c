/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:10:25 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/24 20:36:15 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetra	*create_id(int id, char *s)
{
	t_tetra *new;

	new = NULL;
	if (id)
	{
		if (!(new = (t_tetra *)malloc(sizeof(t_tetra))))
			return (NULL);
		new->tetramin = ft_tetramin(s);
		new->id = id;
		new->next = NULL;
	}
	return (new);
}

t_tetra			*create_list(t_tetra **begin, int id, char *s)
{
	t_tetra *tmp;

	if (!*begin)
	{
		*begin = create_id(id, s);
		return (*begin);
	}
	tmp = *begin;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = create_id(id, s);
	return (tmp->next);
}
