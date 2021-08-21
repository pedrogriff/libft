/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-grif <pde-grif@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:52:11 by pde-grif          #+#    #+#             */
/*   Updated: 2021/08/16 14:52:12 by pde-grif         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int pos, size_t size)
{
	char	*casted;

	casted = (char *)block;
	while (size > 0)
	{
		casted[size - 1] = pos;
		size--;
	}
	return (block);
}
