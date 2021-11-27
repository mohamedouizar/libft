/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:09:18 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/24 03:42:38 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main (void)
{
	printf("******\t%d\n",ft_isalnum(1));
	//printf("/////\t%d\n",ft_isalnum('M'));
	printf("/////\t%d\n",isalnum(1));
	//printf("/////\t%d\n",isalnum('M'));

}
*/
