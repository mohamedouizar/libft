#include "libft.h"
#include <stdio.h>
char *	ft_strrchr(const char *s, int c)
{
	char c1 = (char) c;
	//int i = 0;
	char * s1 = (char *) s;
	int len;
	len = 0;
	while (s1[len])
	len++ ;
	
	if (s1[0] == '\0')
		return (NULL);
	while (len >= 0 && ft_isascii(s1[len]))
	{
		if (s1[len] == c1)
			return (&s1[len]);
		len--;
	//i++;
	}
	//printf("%zu",len);
	return (NULL);
}

// int main (int ac,char ** av)
// {
// 	(void) ac ;
// 	printf("%s'\n",ft_strrchr(av[1],'a'));
// 	printf("%s'",strrchr(av[1],'a'));
// }
