#include <string.h>
#include <stdio.h>

void * ft_memcpy (void * dst ,const void * src ,size_t n)
{
	size_t i;
	i = 0;
	if (!dst && !src)
	return (NULL);
	char *tdst = (char *) dst;
	const char *tsrc = (const char*) src;
		while (i < n)
		{
			*tdst = tsrc[i];
			i++;
			tdst++;
		}
		//*tdst = '\0';
	return dst;
}
/*
int main (void)
{
	//char dst[] = "12345";
	//char * dst1 = "123456";
	char s[] = "abc defighkl";
//	char * s1 = "abcdef";
	memmove(s,s + 4,6);
//	memcpy(dst1,s1,6);q
	printf("ft_memcpy\n%s",s);
	//printf("memcpy%s/t",dst1);
}
	*/