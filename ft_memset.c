/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:15:53 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/30 23:25:13 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
	{
		*p++ = (unsigned char) c;
	}
	return (b);
}
/*
int main (void)
{
	int a[5] = {1,2,1337,4,5};
	ft_memset(a,48, sizeof(int)*5);
	 	printf("%x\n", a[3]);
}
*/