/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 07:28:28 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/28 08:51:39 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	size_t	len ;
	int		i;
	char	*p;

	if (!s || !f)
		return (NULL);
	i = 0 ;
	len = ft_strlen(s);
	p = malloc (sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
char f(unsigned	int i, char  c)
{
	
	c += 1;
	return (c);
}
int main ()
{
	char str[] = "hello ouizar is legend";
	char * p;
	p = ft_strmapi(str,	f);
	printf("%s",p);
}
*/