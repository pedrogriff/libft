/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-grif <pde-grif@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:03:27 by pde-grif          #+#    #+#             */
/*   Updated: 2021/08/14 14:12:45 by pde-grif         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stringcount(char const *s, char c);
static char	*ft_strncpy(char *dst, const char *src, size_t n);
static char	*ft_strndup(const char *s, size_t n);

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	splitted = (char **)malloc(sizeof(char *) * (stringcount(s, c) + 1));
	if (splitted == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			splitted[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	splitted[k] = NULL;
	return (splitted);
}

static int	stringcount(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
