/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:16:50 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/26 12:42:19 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

int		open_file(t_tetra **cur, int *quant, char *file, t_map *map)
{
	int fd;
	int id;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("error\n", 1);
		exit(1);
	}
	id = read_from_file(cur, fd, map);
	id--;
	*quant = id;
	close(fd);
	return (id);
}
