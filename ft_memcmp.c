#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t 	i;
	unsigned char * sn1 = (unsigned char *) s1;
	unsigned char * sn2 = (unsigned char *) s2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (sn1[i] != sn2[i])
			return (sn1[i] - sn2[i]);
		i++;
	}
	return (0);
}

int main (int ac, char ** av)
{
	(void) ac ;
	printf("%d\n",ft_memcmp(av[1],av[2],4));
	printf("%d",memcmp(av[1],av[2],3));
}
