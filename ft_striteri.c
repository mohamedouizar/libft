/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 08:53:04 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/02 04:54:18 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}	
}
/*
void	f(unsigned	int i, char  *s)
{
	(void) i;
	*s = 'a';
}
int main ()
{
	char str[] = "hello ouizar is legend";

	ft_striteri (str, f);
	printf ("%s",str);
}*/