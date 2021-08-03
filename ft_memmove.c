#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (s < d)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}			
		return(dst);
	}
	ft_memcpy (d, s, len);
	return (dst);
}
//https://stackoverflow.com/questions/13095488/how-to-implement-overlap-checking-memcpy-in-c
