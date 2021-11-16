#include "libft.h"

char *	ft_strdup(const char *s1)
{
	char * str;
	int i;

	i = 0;
	if (!(str = (char *) malloc (sizeof(char) * ft_strlen(s1) +1)))
		return (NULL);
	while (*s1)
		str[i++] = *s1++;	
	str[i] = '\0';
	return (str);
}
/*
int main ()
{
	char  str[] = "123456789";
	printf(":%s\t:\n",ft_strdup(str));
	printf(":%s\t:",strdup(str));

}
*/