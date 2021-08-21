/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-grif <pde-grif@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:53:19 by pde-grif          #+#    #+#             */
/*   Updated: 2021/08/16 14:53:20 by pde-grif         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	len;

	c = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	c = len;
	while (src[len - c] && (len + 1) < size)
	{
		dst[len] = src[len - c];
		len++;
	}
	if (c < size)
		dst[len] = '\0';
	return (c + ft_strlen(src));
}
