/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:31:19 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/08 14:31:29 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	unsigned char	cc;

	cc = (unsigned char) c;
	if (cc >= 'a' && cc <= 'z')
		return (cc = cc - 32);
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_toupper('@'));
}
*/
