#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	signe;
	int cmp;

	signe = 1;
	res = 0;
	i = 0;
	cmp = 0;
	while (((str[i] == ' ') || (str[i] >= 9 && (str[i] <= 13))))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
		break;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - 48);
		if (cmp >= 19 && signe == 1)
			return (-1);
		if (cmp >= 19 && signe == -1)
			return (0);
		cmp++;
		i++;
	}
	return (res * signe);
}
/*
int main ()
{
	printf("atoi\t%d\n",atoi("  -1623"));
	printf("ft_atoi\t%d\n",ft_atoi("  -1623"));
}
*/