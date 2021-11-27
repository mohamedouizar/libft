/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:54:23 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 02:03:31 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tdst;
	const char	*tsrc;

	tdst = (char *) dst;
	tsrc = (const char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*tdst++ = tsrc[i++];
	}
	return (dst);
}

/*
int main (void)
{
 	char src[] = "abcd";
	printf("%s",memcpy(src + 1,src,2));	
}
*/
