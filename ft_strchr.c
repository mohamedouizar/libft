/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:43:29 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 00:09:19 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *) s;
	i = ft_strlen(s1);
	if (c == '\0')
		return (s1 + i);
	i = 0;
	while (*(s1 + i))
	{
		if (s1[i] == c)
			return (s1 + i);
		if (s1[i] != c)
			i++;
	}
	return (NULL);
}
/*
int main ()
{
	
	printf("%s'\n",ft_strchr("abcdefgh",'e'));
	printf("%s'\n",strchr("abcdefgh",'\0'));
}
*/
