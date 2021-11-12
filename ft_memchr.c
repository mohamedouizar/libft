#include "libft.h"

void *	ft_memchr(const void *s, int c, size_t n)
{
	char * s1 = (char	*) s;
	char c1 = (char) c;
	size_t	i = 0;

	while ( i < n )
	{
		if (s1[i] == c1)
			return (&s1[i]);
		if (s1[i] != c1)
			i++;
	}
	return (NULL);
}
/*
	int main (int ac,char ** av)
{
	(void)	ac;
	//printf("%s'\n",ft_memchr(av[1],'e',4));
	printf("%s'\n",memchr(av[1],'e',4));
}
*/