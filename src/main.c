/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 12:55:44 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/26 12:42:19 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
		solve(argv[1]);
	else
	{
		ft_putstr("error\n");
		return (1);
	}
	return (0);
}
