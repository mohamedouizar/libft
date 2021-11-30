/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:13:35 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/30 02:10:11 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (*lst)
	{
		lastnode = ft_lstlast(*lst);
		lastnode->next = new;
	}
	else
		*lst = new;
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
	t_list *node4;
	
	char  content1[] = "hello ";
	char  content2[] = " my name ";
	char  content3[] = " is ouizar.";

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(" And im a legend");

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node4);
	
	ft_affiche_liste(head);
	//printf("%d",ft_lstsize(head));
	//printf("%s\n",(char *)ft_lstlast(head)->content);	
}*/