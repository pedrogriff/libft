#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	c;

	i = 0;
	while (i < len && big[i] != '\0')
	{
		c = 0;
		while (i + c < len && big[i + c] == little[c] && little[c] != '\0')
			c++;
		if (little[c] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
