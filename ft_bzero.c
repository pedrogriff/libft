#include "libft.h"

void	*ft_memset(void *block, int pos, size_t size);

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}
