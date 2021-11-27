/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:03:35 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/24 04:03:05 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (!(c < '0' || c > '9'));
}

/*
int main (void)
{
	
	printf("//////\t%d\n",isdigit('1'));
	printf("//////\t%d\n",isdigit('a'));
	printf("/////\t%d\n",ft_isdigit('1'));
	printf("/////\t%d\n",ft_isdigit('a'));

}
*/