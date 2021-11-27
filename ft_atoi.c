/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:44:04 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 02:32:01 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
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
		i++;
	}
	return (res * signe);
}
/*

int main ()
{
	printf("atoi\t%d\n",atoi("  -16l23"));
	printf("ft_atoi\t%d\n",ft_atoi("  -16l23"));
}
*/