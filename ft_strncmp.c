#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t 	i;
	char * sn1 = (char *) s1;
	char * sn2 = (char *) s2;

	if (n == 0)
		return (0);
	i = 0;
	while ((sn1[i] == sn2[i]) && (i < n - 1))
		i++;
	return (sn1[i] - sn2[i]);
}
/*
int main (int ac, char ** av)
{
	(void) ac ;
	printf("%d\n",ft_strncmp(av[1],av[2],0));
	//printf("%d\n",strncmp(av[1],av[2],0));
}
*/