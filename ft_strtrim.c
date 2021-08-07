#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	trimmed = malloc(ft_strlen(s1) + 1);
	while (s1[i] != '\0')
	{
		while (set[i] != s1[i])
		{
			trimmed[i] = s1[i];
			i++;
		}
		while (set[i] == s1[i])
			i++;
	}
	return (trimmed);
}
