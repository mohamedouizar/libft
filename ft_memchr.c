/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:30:19 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 00:09:42 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *) s;
	while (i < n)
	{
		if (s1[i] == c)
			return (&s1[i]);
		if (s1[i] != c)
			i++;
	}
	return (NULL);
}
/*
int main(void)
{
	printf("%s'\n",ft_memchr("abcdefgh\0igklmnop",'\0',17));
	printf("%s'\n",memchr("abcdefgh\0igklmnop", '\0', 17));
}
*/
