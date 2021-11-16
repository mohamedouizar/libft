#include "libft.h"


void ft_putstr_fd(char *s, int fd)
{
		if (!s || !fd)
			return ;

		int i=ft_strlen(s);
		write(fd,s,i);	
}
/*
int main ()
{
	char *file="ouizarstr.txt";	
	int fd= open(file,O_WRONLY | O_CREAT,0666);

	ft_putstr_fd("hi ouizar is legend",fd);	
}
*/