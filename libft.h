#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stddef.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);

#endif
