#include "libft.h"

void	*ft_memset(void *block, int pos, size_t size)
{
	char	*casted;

	casted = (char *)block;
	while (size > 0)
	{
		casted[size - 1] = pos;
		size--;
	}
	return (block);
}
