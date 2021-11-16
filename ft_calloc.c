#include "libft.h"

void *	ft_calloc(size_t count, size_t size)
{
	char * p;
	if (!(p = malloc (count * size )))
		return (0);
	ft_bzero(p,count * size);
	return (p);
}
