#include "libft.h"

char *	ft_strchr(const char *s, int c)
{
	char c1 = (char) c;
	int i = 0;
	char * s1 = (char *) s;
	i = ft_strlen(s1);
	if (c == '\0')
		return(s1 + i);
	i = 0;
	while (s1[i])
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
	printf("%s'\n",ft_strchr(av[1],'e'));
	//printf("%s'\n",strchr(av[1],'e'));
}
*/

