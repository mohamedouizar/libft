#include "libft.h"

static int     ft_lenn(int n)
{
    int len = 0;
    if (n <= 0)
        len++;
    while (n)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

static int     test_signe_pos(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}
 
char    *ft_itoa(int n)
{
    char *p;
    int len;
 
    len = ft_lenn(n);
    p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
    p[len] = '\0';
    if (n < 0)
        p[0] = '-';
    else if (n == 0)
        p[0] = 48;
 
    while (n)
    {
        len--;
        p[len] = test_signe_pos(n % 10) + '0';
        n = n / 10;
    }
    return (p);
}
/*
int main ()
{
	printf("%s",ft_itoa(1337));
}
*/