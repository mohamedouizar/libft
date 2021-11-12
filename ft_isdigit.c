/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:03:35 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/12 18:40:20 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main (void)
{
	
	printf("//////\t%d\n",isdigit(-48));
	printf("//////\t%d\n",isdigit('a'));
	printf("/////\t%d\n",ft_isdigit(-48));
	printf("/////\t%d\n",ft_isdigit('a'));

}
*/