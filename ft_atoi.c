/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:44:04 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/04 03:20:10 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int	i;
	int	signe;

	signe = 1;
	res = 0;
	i = 0;
	while (((str[i] == ' ') || (str[i] >= 9 && (str[i] <= 13))))
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - 48);
		else
			break ;
		if (res > 9223372036854775807 && signe == 1)
            return (-1);
        else if (res > 9223372036854775808UL && signe == -1)
            return (0);
        i++;
	}
	return (res * signe);
}
/*
int main ()
{
	printf("atoi\t%d\n",atoi("-203685554544775856465464507"));
	printf("ft_atoi\t%d\n",ft_atoi("-920368556554775646546455807"));
}*/

