/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-grif <pde-grif@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:50:50 by pde-grif          #+#    #+#             */
/*   Updated: 2021/08/16 14:50:51 by pde-grif         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	c;
	long			s;
	long			res;

	c = 0;
	s = 1;
	res = 0;
	while ((nptr[c] >= '\t' && nptr[c] <= '\r') || nptr[c] == ' ')
		c++;
	if (nptr[c] == '+' || nptr[c] == '-')
	{
		if (nptr[c] == '-')
			s = -1;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res = (nptr[c] - '0') + (res * 10);
		c++;
	}
	return ((int)res * s);
}
