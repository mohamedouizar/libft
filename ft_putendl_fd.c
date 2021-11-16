#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int len = ft_strlen(s);
	write(fd,s,len);
	write(fd,"\n",1);
	
}
int main()
{
	int fd = open("qq1.txt",O_WRONLY | O_CREAT,777);
		ft_putendl_fd("hi ouizar is legend",fd);
			ft_putendl_fd("hi ouizar is legend",fd);
			ft_putendl_fd("hi ouizar n",fd);
}