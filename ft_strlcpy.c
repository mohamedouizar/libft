/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:42:25 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/09 16:43:32 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	i;
	if (dstsize > 0)
	{
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		*dst = src[i];
		i++;
		dst++;
	}

	*dst = 0;
	}
	return (ft_strlen(src));
}
/*int main (void)
{
	char dst [] = "hello";
	char dst1 [] = "hello";
	char s1 [] = "hello";
	char s [] = "abcdef";
	ft_strlcpy (dst, s, 3);
	strlcpy (dst1, s1, 3);
	printf("ft_strlcpy%s\n",dst);
	printf("strlcpy%s\n",dst1);
}
*/