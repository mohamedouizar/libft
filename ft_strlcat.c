#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
	size_t i;
	size_t lendst;
	size_t lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize == 0)
        return (lensrc);

    while (src[i] && (lendst + i) < (dstsize - 1))
    {
        dst[lendst + i] = src[i];
        i++;
    }
    dst[lendst + i] = '\0';
    if (dstsize >= lendst)
        return (lendst + lensrc);
    return (dstsize + lensrc);
}
/*
int main (void)
{
	char dst [] = "hello";
	char s [] = " world!";

	int res = ft_strlcat (dst, s, 4);
	ft_strlcat (dst, s, 4);
	printf("result : \t %d\n",res);
	printf("dest :\t%s",dst);
}
*/