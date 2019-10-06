/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:54:34 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/06 13:47:21 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "get_next_line.h"
#include "libft/includes/libft.h"

typedef	struct s_tetra	t_tetra;

struct					s_tetra
{
	int		tetramin[4][4];
	int 	id;
	t_tetra	*next;
};

#endif
