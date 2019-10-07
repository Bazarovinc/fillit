/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:55:44 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/07 17:15:52 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int 	ft_tetramin(char *s)
{
	int i;

	i = 0;
	while (s[i] != '#')
		i++;
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

t_tetra	*create_id(int id, char *s)
{
	t_tetra *new;

	if (id)
	{
		new = (t_tetra *) malloc(sizeof(t_tetra));
		new->tetramin = ft_tetramin(s);
		new->id = id;
		new->next = NULL;
	}
	return (new);
}

t_tetra	*push_back_and_return(t_tetra **begin, int id, char *s)
{
	t_tetra *tmp;

	if(!*begin)
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

void ft_error(void)
{
	ft_putstr("Error!");
}

int 	check_valid(char *s)
{
	int i;
	int sharp;
	int dot;

	i = 0;
	dot = 0;
	sharp = 0;
	if (s[4] != '\n' || s[9] != '\n' || s[14] != '\n' ||
		s[19] != '\n' || s[20] != '\n')
		return (1);
	while (s[i])
	{
		if (s[i] == '#')
			sharp++;
		if (s[i] == '.')
			dot++;
		i++;
	}
	if (sharp > 4 || sharp < 4)
		return (1);
	if (dot > 12 || dot < 12)
		return (1);
	return (0);
}


int	read_file(t_tetra **tet, int fd, int id)
{
	char	s[BUFF_SIZE + 1];
	t_tetra	*cur;
	int 	i;

	cur = *tet;
	while ((i = read(fd, s, BUFF_SIZE)))
	{
		s[i] = '\0';
		if (check_valid(s) == 1)
			ft_error();
		cur = push_back_and_return(tet, id, s);
		if (cur->tetramin == 0)
			ft_error();
		id++;
	}
	return (1);
}

int 	main(void)
{
	int fd;
	int id;
	static t_tetra *tet;
	t_tetra **cur;

	id = 1;
	fd = open("test", O_RDONLY);
	cur = &tet;
	read_file(cur, fd, id);
	ft_putnbr(tet->tetramin);
	ft_putchar('\n');
	tet = tet->next;
	ft_putnbr(tet->tetramin);
	ft_putchar('\n');
	tet = tet->next;
	ft_putnbr(tet->tetramin);
	ft_putchar('\n');
	tet = tet->next;
	ft_putnbr(tet->tetramin);
	ft_putchar('\n');
	tet = tet->next;
	ft_putnbr(tet->tetramin);
	ft_putchar('\n');
	close(fd);
}