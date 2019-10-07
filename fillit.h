/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:54:34 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/07 15:15:06 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/includes/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 21


typedef	struct s_tetra	t_tetra;

struct					s_tetra
{
	int		tetramin;
	int 	id;
	t_tetra	*next;
};

#endif
