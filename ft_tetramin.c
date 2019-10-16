/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetramin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:08:21 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/12 17:08:21 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	looking_frst_part(int i, char *s)
{
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 10] == '#' && s[i + 15] == '#')
		return (1);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 2] == '#' && s[i + 3] == '#')
		return (2);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 5] == '#' && s[i + 6] == '#')
		return (3);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 2] == '#' && s[i + 7] == '#')
		return (4);
	if (s[i] == '#' && 	s[i + 3] == '#' && s[i + 4] == '#' && s[i + 5] == '#')
		return (5);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 5] == '#' && s[i + 10] == '#')
		return (6);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 6] == '#' && s[i + 11] == '#')
		return (7);
	if (s[i] == '#' && 	s[i + 5] == '#' && s[i + 6] == '#' && s[i + 7] == '#')
		return (8);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 2] == '#' && s[i + 5] == '#')
		return (9);
	if (s[i] == '#' && 	s[i + 5] == '#' && s[i + 10] == '#' && s[i + 11] == '#')
		return (10);
	return (0);
}

static int	looking_scnd_part(int i, char *s)
{
	if (s[i] == '#' && 	s[i + 5] == '#' && s[i + 9] == '#' && s[i + 10] == '#')
		return (11);
	if (s[i] == '#' && 	s[i + 4] == '#' && s[i + 5] == '#' && s[i + 6] == '#')
		return (12);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 2] == '#' && s[i + 6] == '#')
		return (13);
	if (s[i] == '#' && 	s[i + 5] == '#' && s[i + 6] == '#' && s[i + 10] == '#')
		return (14);
	if (s[i] == '#' && 	s[i + 4] == '#' && s[i + 5] == '#' && s[i + 10] == '#')
		return (15);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 6] == '#' && s[i + 7] == '#')
		return (16);
	if (s[i] == '#' && 	s[i + 1] == '#' && s[i + 3] == '#' && s[i + 4] == '#')
		return (17);
	if (s[i] == '#' && 	s[i + 4] == '#' && s[i + 5] == '#' && s[i + 9] == '#')
		return (18);
	if (s[i] == '#' && 	s[i + 5] == '#' && s[i + 6] == '#' && s[i + 11] == '#')
		return (19);
	return (0);
}

int			ft_tetramin(char *s)
{
	int i;
	int check_1;
	int check_2;

	i = 0;
	while (s[i] != '#')
		i++;
	check_1 = looking_frst_part(i, s);
	if (check_1 != 0)
		return (check_1);
	check_2 = looking_scnd_part(i, s);
	if (check_2 != 0)
		return (check_2);
	return (0);
}