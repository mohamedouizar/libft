/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:29:40 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/08 14:29:59 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	unsigned char	cc;

	cc = (unsigned char) c;
	if (cc >= 'A' && cc <= 'Z')
		return (cc = cc + 32);
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_tolower('R'));
}
*/