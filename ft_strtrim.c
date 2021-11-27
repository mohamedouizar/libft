/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 08:17:21 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 23:21:22 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	start;
	size_t	last;
	char	*str;
if (!s1 || !set)
		return (NULL);
	str = 0;
	start = 0;
	last = ft_strlen(s1);
	
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[last - 1] && ft_strchr(set, s1[last - 1]) && start < last)
		last--;
	str = (char *)malloc(sizeof(char) * (last - start + 1));
	if (str)
		ft_strlcpy(str, &s1[start], last - start + 1);
	return (str);
}
/*
int	main(void)
{
	ft_strtrim("!!?Mohlmed!!", "   M?l!");
//	printf("%s\n", ft_strtrim("!!?Mohlmed!!", "   M?l!"));
	return (0);
}
*/