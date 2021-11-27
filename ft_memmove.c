/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 03:14:12 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/25 04:42:20 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*tdst;
	const char	*tsrc;

	i = 0;
	tdst = (char *) dst;
	tsrc = (const char *) src;
	if (tdst < tsrc)
	{
		while (i < len)
		{
			*tdst++ = tsrc[i++];
		}
	}
	else if (tdst > tsrc)
	{
		while (len)
		{
			len--;
			tdst[len] = tsrc[len];
		}		
	}
	return (dst);
}
/*
int main (void)
{
 	char src[] = "abcd";
	printf("%s",ft_memmove(src + 1,src,2));	
}
*/
