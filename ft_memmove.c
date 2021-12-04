/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 03:14:12 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/04 22:05:10 by mouizar          ###   ########.fr       */
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
 