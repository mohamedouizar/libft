/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:15:20 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/25 22:28:19 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*sn1;
	unsigned char	*sn2 ;

	sn2 = (unsigned char *) s2;
	sn1 = (unsigned char *) s1;
	if (n == 0)
		return (0);
	i = 0;
	while ((sn1[i] == sn2[i]) && (i < n - 1) && sn1[i] && sn2[i])
		i++;
	return (sn1[i] - sn2[i]);
}
/*
int main (int ac, char ** av)
{
	(void) ac ;
	printf("%d\n",ft_strncmp(av[1],av[2],0));
	//printf("%d\n",strncmp(av[1],av[2],0));
}
*/