#include "libft.h"

size_t	ft_strlen(const char *s) //size_t é usado para retornar tamanho de coisas, ele é um usigned integer type, ou seja, conta até o maior inteiro positivo possivel 32 bit, tamanho aqui não retornaria nunca negativo por isso acho que esse é mais recomendado
{
	size_t	len;
	
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return(len);
}
