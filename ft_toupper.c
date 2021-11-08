#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	unsigned char	cc;

	cc = (unsigned char) c;
	if (cc >= 'a' && cc <= 'z')
		return (cc = cc - 32);
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_toupper('@'));
}
*/
