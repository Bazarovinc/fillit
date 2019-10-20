/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:10:25 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/12 17:10:56 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
**	СОЗДАЕТ ЭЛЕМЕНТ С ВЕРИФИЦИРОВАННОЙ ТЕТРАМИНКОЙ 	**
**	И ДОБАВЛЯЕТ ЕГО В КОНЕЦ СПИСКА 					**
*/

static t_tetra	*create_id(int id, char *s)
{
	t_tetra *new;

	new = NULL;
	if (id)
	{
		new = (t_tetra *)malloc(sizeof(t_tetra));
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
