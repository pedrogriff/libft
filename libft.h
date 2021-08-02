#ifndef LIBFT_H
#define LIBFT_H

#include	<stdio.h>
#include	<stdlib.h>

void	ft_bzero(void *s, size_t len);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *block, int pos, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr (const char *s, int c);
char	*ft_strrchr (const char *s, int c);

#endif
// http://mindbending.org/pt/bibliotecas-estaticas-simples
