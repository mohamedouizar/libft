#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	size_t	len ;
	int i;
	char *p;

	if (!s || !f)
		return (NULL);
	i = 0 ;
	len = ft_strlen(s);

	if (!(p = malloc (sizeof(char) * len + 1)))
		return (NULL);
	
	while (s[i])
	{
		p[i] = f(i,s[i]);
		i++;
	}
	p[i] = '\0';

	return (p);
}
/*
char f(unsigned	int i, char  c)
{
	(void) i;
	char s;
	c = '0';
	s = c;
	return (s);
}
int main ()
{
	char str[] = "hello ouizar is legend";
	char * p;
	p = ft_strmapi(str,	f);
	printf("%s",p);
}
*/