#include "libft.h"

size_t		numlen(int num);
static char	*minint(void);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	if (n == -2147483648)
		return (minint());
	size = numlen(n);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

size_t	numlen(int num)
{
	size_t	len;

	len = 0;
	if (num < 0)
		len = 1;
	if (num == 0)
		len = 1;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*minint(void)
{
	char	*str;

	str = malloc(12);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}
