/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isymb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:55:13 by ctelma            #+#    #+#             */
/*   Updated: 2019/09/10 21:55:34 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_issymb(char c, int sym)
{
	if (c == '\0' || c == sym)
		return (1);
	return (0);
}
