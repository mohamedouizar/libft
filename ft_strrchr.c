/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:02:56 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/03 19:26:27 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		len;

	len = 0;
	s1 = (char *) s;
	while (*(s1 + len))
		len++ ;
	if (!s1)
		return (NULL);
	while (len >= 0)
	{
		if (s1[len] == c)
			return (s1 + len);
		len--;
	}
	return (NULL);
}

// int main (int ac,char ** av)
// {
// 	(void) ac ;
// 	printf("%s'\n",ft_strrchr(av[1],'a'));
// 	printf("%s'",strrchr(av[1],'a'));
// }
