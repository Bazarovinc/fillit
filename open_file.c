/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:16:50 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/21 15:10:37 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
**	ОТКРЫВАЕТ ФАЙЛ С ТЕТРАМИНКАМИ **
*/

int		open_file(t_tetra **cur, int *quant)
{
	int fd;
	int id;

	fd = open("test", O_RDONLY);
	id = read_from_file(cur, fd);
	id--;
	*quant = id;
	close(fd);
	return (id);
}
