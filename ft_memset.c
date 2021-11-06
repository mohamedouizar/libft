#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
		*p++ = (unsigned char) c;
	return (b);
}

int	main(void)
{
	char *str = strdup("Hello my name is ouizar ");
	printf("|%s|", ft_memset(str ,'*',5));
}
