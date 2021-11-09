#include <string.h>

void * ft_memcpy (void * dst ,const void * src ,size_t n)
{
	size_t i;
	i = 0;
	char *tdst = (char *) dst;
	const char *tsrc = (const char*) src;
	if (( tsrc != NULL ) && (tdst != NULL))
	{

		while (n)
		{
			*tdst++ = *tsrc++;
			n--;
		}			
		return dst;
	}
}