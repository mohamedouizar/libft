#include "libft.h"

size_t    ft_compteur(const char *s, char c)
{
    size_t i;
    size_t w;

    i = 0;
    w = 0;
    while (s[i])
    {
        if (s[i] == c)
        i++;
        else
        {
            while (s[i] != c && s[i])
            i++;
            w++;
        }
        
    }
    return (w);
}

char    **ft_split(char const *s, char c)
{
    char    **p;
    size_t    size;
    size_t    i;
    size_t    j;
    size_t    start;
    
    i = 0;
    j = 0;

	if(!s)
		return (NULL);
    size = ft_compteur(s, c);
    p = malloc(sizeof(char *) * (size + 1));
	if(!p)
		return NULL;
    while (j < size)
    {
        while (s[i] == c)
        i++;
        start = i;
        while (s[i] != c)
        i++;
        p[j] = ft_substr(s, start,i - start);
        j++;
    }
    p[j] = NULL;
    return (p);
}
/*
int main()
{
    char **s;
    s = ft_split("ouizar/is/legend", '/');
    printf("%s\n", s[1]);
}
*/