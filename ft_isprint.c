#include <ctype.h>

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	printf("///////\t:%d\t\n", ft_isprint('\t'));
	printf("///////\t:%d\t", isprint('\t'));
}
