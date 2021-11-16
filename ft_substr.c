#include "libft.h"

char *	ft_substr(char const *s, unsigned int start,size_t len)
{
	unsigned	int i;
	i = 0;

	char * p;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (! (p = (char *)malloc(sizeof(char) * len  + 1)))
		return (NULL);
	
	while (i < len )
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
/*
int main ()
{
	char s[] = "123456789" ;
	printf("ft_substr:\t%s",ft_substr (s,3,4));
}
*/