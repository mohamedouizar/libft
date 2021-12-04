/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:43:29 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/04 16:03:38 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*s1;

	s1 = (unsigned char *) s;
	i = ft_strlen((const char *)s1);
	if (c == '\0')
		return ((char *)(s1 + i));
	i = 0;
	while (*(s1 + i))
	{
		if (s1[i] == (unsigned char)c)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	
	printf("%s'\n",ft_strchr("tripouille",'t' + 256));
	printf("%s'\n",strchr("tripouille",'t' + 256));
}

*/