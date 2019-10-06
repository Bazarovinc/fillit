/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:55:44 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/06 18:32:53 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_tetramin(t_tetra *tetra)
{
	int i;
	int j;

	if(tetra)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (tetra->tetramin[i][j] == 0)
					ft_putchar('.');
				else if (tetra->tetramin[i][j] == tetra->id)
					ft_putchar(tetra->tetramin[i][j] + '0');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

t_tetra	*create_id(t_tetra *begin, int id)
{
	if (!begin && id)
	{
		begin = (t_tetra *) malloc(sizeof(t_tetra));
		begin->id = id;
		begin->next = NULL;
	}
	return (begin);
}

t_tetra	*create_new_tetra(t_tetra **begin, int id)
{
	t_tetra *cur;

	if (!*begin)
	{
		*begin = create_id(*begin, id);
		return (*begin);
	}
	cur = *begin;
	while (cur->next)
		cur = cur->next;
	cur->next = create_id(cur->next, id);
	return (cur);
}
int	read_file(t_tetra **tet, int fd, int id)
{
	int		i;
	int		j;
	int		k;
	int 	end;
	char 	*s;
	t_tetra	*cur;

	j = 0;
	cur = create_new_tetra(tet, id);
	while ((end = get_next_line(fd, &s)) == 1)
	{
		i = 0;
		k = 0;
		if (s[i] != '\0')
		{
			while (s[i])
			{
				if (s[i] == '.')
					cur->tetramin[j][k] = 0;
				else if (s[i] == '#')
					cur->tetramin[j][k] = id;
				k++;
				i++;
			}
			j++;
		}
		if (j == 4 && end == 1)
			return (1);
	}
	return (0);
}

int 	main(void) {
	int fd;
	int id;
	static t_tetra *tet;
	t_tetra *cur;

	id = 1;
	fd = open("test", O_RDONLY);
	cur = create_new_tetra(&tet, id);
	tet = cur;
	while (read_file(&cur, fd, id) == 1)
		id++;
	ft_print_tetramin(cur);
	ft_print_tetramin(cur->next);
}