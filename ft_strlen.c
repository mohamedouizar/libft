/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:13:21 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/26 23:00:51 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s + len))
		len++;
	return (len);
}
/*
int	main(void)
{
	//char	str[] = "\0"; 
	
	//printf("tlenth is :%zu\n",ft_strlen(NULL));
	printf("true lenth is :%zu\n",strlen(NULL));
}
*/