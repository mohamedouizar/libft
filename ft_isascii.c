/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:50:27 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/05 19:50:28 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("///////\t:%d", ft_isascii(55));
	printf("///////\t:%d", isascii(55));
}
*/