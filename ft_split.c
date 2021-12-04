/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:14:01 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/04 01:38:16 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_compteur(const char *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
				i++;
			w++;
		}
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	size = ft_compteur(s, c);
	p = malloc(sizeof(char *) * (size + 1));
	if (!p)
		return (NULL);
	while (j < size)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		p[j++] = ft_substr(s, start, i - start);
	}
	p[j] = NULL;
	return (p);
}
//int main()
// {
//     char **s;
//     s = ft_split("//////////", '/');
//     printf("%p\n", s);
// }
