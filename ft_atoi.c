#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	c;
	long			s;
	long			res;

	c = 0;
	s = 1;
	res = 0;
	while ((nptr[c] >= '\t' && nptr[c] <= '\r') || nptr[c] == ' ')
		c++;
	if (nptr[c] == '+' || nptr[c] == '-')
	{
		if (nptr[c] == '-')
			s = -1;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res = (nptr[c] - '0') + (res * 10);
		c++;
	}
	return ((int)res * s);
}
