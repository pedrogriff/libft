#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	lendst;
	size_t	i;

	i = 0;
	lendst = ft_strlen(s);
	ptr = malloc(lendst + 1);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
