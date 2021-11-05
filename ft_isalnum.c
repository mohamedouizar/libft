/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:09:18 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/05 18:10:38 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int main (void)
{
	printf("/////\t%d\n",ft_isalnum(1));
	printf("/////\t%d\n",ft_isalnum('M'));
	printf("/////\t%d\n",isalnum(1));
	printf("/////\t%d\n",isalnum('M'));

}
*/
