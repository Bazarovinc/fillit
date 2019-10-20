/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_from_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:49:00 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/12 17:10:56 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

/*
**		ПРОВЕРЯЕТ '\n'/'\0'	и КОЛ-ВО '.'/'#', ВОЗВРАЩАЕТ "0" ЕСЛИ ВЕРНО,	**
** 		ВОЗВРАЩАЕТ "1" ЕСЛИ НЕ ВЕРНО.
*/

static int		check_valid(char *s)
{
	int i;
	int sharp;
	int dot;

	i = 0;
	dot = 0;
	sharp = 0;
	if (s[4] == '\n' && s[9] == '\n' && s[14] == '\n' &&
		s[19] == '\n' && (s[20] == '\n' || s[20] == '\0'))
	{
		while (s[i] && i < 20)
		{
			if (s[i] != '.' && s[i] != '#' && s[i] != '\n')
				return (1);
			if (s[i] == '#')
				sharp++;
			if (s[i] == '.')
				dot++;
			i++;
		}
		if (sharp == 4 && dot == 12)
			return (0);
	}
	return (1);
}

/*
**		ЧИТАЕТ ИЗ fd И ОТПРАВЛЯЕТ НА ПРОВЕРКУ СООТВЕТСТВИЯ УСЛОВИЯМ		**
*/

int				read_from_file(t_tetra **tet, int fd)
{
	char	s[BUFF_SIZE + 1];
	t_tetra	*cur;
	int		id;
	int		i;

	cur = *tet;
	id = 1;
	while ((i = read(fd, s, BUFF_SIZE)))
	{
		s[i] = '\0';
		if (check_valid(s) == 1)
			ft_error(cur);
		cur = create_list(tet, id, s);
		if (cur->tetramin == 0)
			ft_error(cur);
		id++;
	}
	return (id);
}
