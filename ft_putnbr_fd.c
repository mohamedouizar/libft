#include "libft.h"
void ft_putnbr_fd(int nb, int fd)
{
	unsigned int	 n;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar_fd('-',fd);
	}
	n = nb;
	if (n > 9)
	{
		ft_putnbr_fd(n / 10,fd);
	}
	ft_putchar_fd(n % 10 + '0',fd);
}
/*
int main ()
{
	int fd = open("ouizarputnbr.txt",O_WRONLY | O_CREAT , 777);
		ft_putnbr_fd(-1337,fd);
		ft_putchar_fd('\n',fd);
 
}
*/