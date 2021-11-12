#include <string.h>
#include <stdio.h>
#include "libft.h"

void *	ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i = 0;
	char * tdst = (char *) dst;
	const char * tsrc = (const char *) src;
	if (tdst < tsrc)
	{
		while (i < len)
		{
			*tdst = tsrc[i];
			i++;
			tdst++;
		}
	}
	else if (tdst > tsrc)
	{
		while (len)
		{
			len--;
			tdst[len] = tsrc[len];
		}		
	}
	return (dst);
}
/*
int main (void)
{
	char s[] = "123456";
	char s1[] = "123456";
	ft_memmove(s +1,s,4);
	memmove(s1 +1,s1,4);
	printf("ft_memov\t%s\n",s);
	printf("memov\t%s",s1);

}
*/