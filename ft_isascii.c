/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:21:45 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/24 04:07:41 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (!(c < 0 || c > 127));
}
/*
int	main(void)
{
	printf("///////\t:%d", ft_isascii(55));
	printf("///////\t:%d", isascii(55));
}
*/