/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:49:46 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/28 09:55:49 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	if (!s || !fd)
		return ;
	write(fd, s, len);
	write(fd, "\n", 1);
}
/*
int main()
{
	int fd = open("qqt.txt",O_WRONLY | O_CREAT,777);
		ft_putendl_fd("hkljdfkljkldfjkljdfkljdfl;jdfklji ouizar is legend",fd);
}
*/