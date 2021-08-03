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
	if(c < size)
		dst[len] = '\0';
	return (c + ft_strlen(src));
}
