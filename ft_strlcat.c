#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
	size_t i;
	size_t lendst;

	i = 0;
	lendst = ft_strlen(dst);
	if (dstsize > 0)
	{
	 while ( i < dstsize - 1)
	 {
		 dst[lendst] = src [i];
		 i++;
		 dst ++;
	 }
	 *dst = 0;
	}
	return (ft_strlen(src) + ft_strlen(dst));
}
/*
int main (void)
{
	char dst [20] = "";
	char dst1 [20] = "";
	char s1 [] = " world!";
	char s [] = " world!";
	ft_strlcat (dst, s, 0);
	strlcat (dst1, s1, 0);
	printf("ft_strlcat:\t%s\n",dst);
	printf("strlcat:\t%s\n",dst1);

}
*/