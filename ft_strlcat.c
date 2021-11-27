/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 07:59:04 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 23:18:02 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	if (!dstsize)
		return 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	while (src[i] && (lendst + i) < (dstsize - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	if (dstsize >= lendst)
		return (lendst + lensrc);
	return (dstsize + lensrc);
}
/*
int main (void)
{
	char dst [] = "hello";
	char s [] = " world!";

	strlcat(NULL, s, 8);
	printf("dest :\t%s",dst);
}

*/