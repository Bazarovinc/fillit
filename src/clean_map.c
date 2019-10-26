/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:05:10 by ctelma            #+#    #+#             */
/*   Updated: 2019/10/26 12:42:19 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fillit.h"

void	clean_map(int **nums, int size)
{
	int i;

	i = 0;
	if (nums != NULL)
	{
		while (i < size)
		{
			if (nums[i])
				free(nums[i]);
			i++;
		}
		free(nums);
	}
}
