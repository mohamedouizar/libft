/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:25:52 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/01 00:16:12 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main ()
{
	char *file="ouizar3.txt";	
	int fd = open(file,O_WRONLY | O_CREAT,0666);
	ft_putchar_fd('1',fd);	
}
*/