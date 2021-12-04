/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 02:54:25 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/04 03:31:53 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tdst;
	const char	*tsrc;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	tdst = (char *) dst;
	tsrc = (const char *) src;
	// if (ft_strlen(tsrc) == 0 && ft_strlen(tdst) == 0)
	// 	return ("");
	while (i < n)
		*tdst++ = tsrc[i++];
	return (dst);
}

 int main (void)
 {
	
     printf("%s",ft_memcpy("","",3));	
 }
