/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:12:30 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/30 02:08:33 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	ptr = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/*
void ft_affiche_liste(t_list *node)
{
	t_list *ptr = NULL;
	ptr = node ;
	while(ptr != NULL)
	{
		printf("%s",(char *)ptr->content);
		ptr = ptr->next;
	}
	
}
int main ()
{
	t_list *head = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	
	char  content1[] = "hello ";
	char  content2[] = " my name ";
	char  content3[] = " is ouizar.";

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	
	ft_affiche_liste(head);
	printf("%d",ft_lstsize(head));
	
}

*/