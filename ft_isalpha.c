/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:59:20 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/05 18:57:59 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//#include <stdio.h>

int	ft_isalpha(int c )
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}
/*
int main (void)
{
	char b = 'm';


	printf(" /////:\t%d\n",isalpha(255));
	printf(" /////:\t%d\n",isalpha(b));
	printf(" ****:\t%d\n",ft_isalpha(255));
	printf(" ****:\t%d",ft_isalpha(b));
}
*/
