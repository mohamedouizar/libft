#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{

	int i;

	if (!s || !f)
		return ;

	i = 0; 
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}	

}
/*
void	f(unsigned	int i, char  *s)
{
	(void) i;
	*s = '0';
}
int main ()
{
	char str[] = "hello ouizar is legend";

	ft_striteri (str, f);
	printf ("%s",str);
}
*/