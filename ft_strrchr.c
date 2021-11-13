#include "libft.h"

char *	ft_strrchr(const char *s, int c)
{
	char c1 = (char) c;
	//int i = 0;
	char * s1 = (char *) s;
	size_t len = ft_strlen(s); 
		
	while (len >= 0)
	{
		if (s1[len] == c1)
			return (&s1[len]);
		len--;
		//i++;
	}
	return (NULL);
}

/*int main (int ac,char ** av)
{
	(void) ac ;
	printf("%s'\n",ft_strrchr(av[1],'e'));
	printf("%s'",strrchr(av[1],'e'));
}
 */