#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char 	*p;
	ssize_t lens1;
	ssize_t lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	p = malloc (sizeof(char) * (lens1 + lens2 + 1));
	if(!p)
		return (NULL);
	
	p[0] = '\0';
	ft_strlcat(p, s1, lens1 + 1);
	ft_strlcat(p, s2, lens1 + lens2 +1);
	//	p[lens1 + lens2 +1] = '\0';

	return (p);
}

/*
int main ()
{
	char  s1[] = "12345";
	char  s2[] = "6789";
	printf(">>>>>> :%s",ft_strjoin(s1,s2));
}
*/