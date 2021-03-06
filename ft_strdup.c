/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 07:17:38 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/05 12:19:25 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc (sizeof(char) * ft_strlen(s1) +1);
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	str[i] = '\0';
	return (str);
}
