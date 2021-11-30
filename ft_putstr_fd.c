/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:35:40 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/28 09:48:30 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	if (!s || !fd)
		return ;
	write(fd, s, i);
}
/*
int main()
{
	int fd = open("ouizarstr.txt",O_CREAT | O_WRONLY ,777);
	ft_putstr_fd("ouizarmo jkbdhjbhjdbjdhjddhjdjkhjkdhjkdhjkdh",fd);
}
*/