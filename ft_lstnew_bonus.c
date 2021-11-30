/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:47:08 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/28 22:40:31 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = NULL;
	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element);
}
/*
int main ()
{
	printf("node content is %s",ft_lstnew("this is my first node")->content);
}
*/