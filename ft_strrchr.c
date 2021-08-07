#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	int		i;
	char	ch;

	len = ft_strlen(s);
	i = len;
	ch = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	if (ch == '\0')
		return ((char *)s + len);
	return (NULL);
}
