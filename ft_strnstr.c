#include "libft.h"
char	*	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char * str = (char *) haystack ;
	char * to_find = (char *) needle ;

	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i  + j) < len) 
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main (int ac,char ** av)
{
	printf("%s",ft_strnstr(av[1],av[2],6));
}
*/