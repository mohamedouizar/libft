#include "libft.h"


void ft_putchar_fd(char c, int fd)
{
	write (fd,&c,1);	
}
/*
int main ()
{
	char *file="ouizar.txt";	
	int fd= open(file,O_WRONLY | O_CREAT,0666);

	ft_putchar_fd("haklhadsadlkh",fd);	
}
*/