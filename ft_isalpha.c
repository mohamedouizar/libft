/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:59:20 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/24 03:52:49 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c )
{
	return (!((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')));
}
/*
int main (void)
{


	printf(" isalpha:\t%d\n",isalpha(0));
	printf(" isalpha:\t%d\n",isalpha('l'));
	printf(" ft_isalpha:\t%d\n",ft_isalpha(0));
	printf(" ft_isalpha:\t%d\n",ft_isalpha('l'));
}
*/