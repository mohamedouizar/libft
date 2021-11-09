#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main (void)
{
	char s[] = "mohamed ouizar is legend";
	ft_bzero(s+1,10);
		printf("%s",s);
		return 0;
}
*/