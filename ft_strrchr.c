#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	int	i;

	len = ft_strlen(s);
	i = len;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (c == '\0')
		return ((char *)s + len);
	return (NULL);
}
