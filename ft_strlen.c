//#include <string.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	str[] = ""; 
	
	printf("tlenth is :%zu\n",ft_strlen(str));
	printf("true lenth is :%zu\n",strlen(str));
}
*/