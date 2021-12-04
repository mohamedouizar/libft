/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 02:34:15 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/02 03:12:37 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc (count * size);
	if (!p)
		return (0);
	ft_bzero (p, count * size);
	return (p);
}
/*
int main ()
{
	int *p;
	p = ft_calloc(5,sizeof(int));
	int *p1;
	p1 =  malloc(5 * sizeof(int));
	int i = 0;
	//free(p1);
	//free (p);
	while (i < 5)
	{
		printf("%d\n",p1[i]);
		i++;
	}
}*/
