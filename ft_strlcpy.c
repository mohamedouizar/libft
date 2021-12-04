/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:42:25 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/01 01:14:33 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			*dst++ = src[i++];
		}
		*dst = 0;
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char dst[100] = "abcd";
	const char src[] = "1234560jldkfdlkjfdkl";
	ft_strlcpy(dst , src, 30);
	printf("%s\n",dst);
	printf("%zu\n",ft_strlcpy(dst , src, 10));
}
*/