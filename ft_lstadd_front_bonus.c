/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:44:14 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/29 01:05:06 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
		new->next = *lst;
		*lst = new;
}
/*
void ft_affiche_list(t_list *node)
{
	t_list *ptr = NULL;
	ptr = node;
	while (ptr != NULL)
	{
		printf("%d\n",*(int *)ptr->content);
		ptr = ptr ->next;
	}
}
int main()
{
	t_list *head = NULL;
	t_list *node1 ;
	t_list *node2 ;
	t_list *node3 ;
	 
	 int nb1 = 10;
	 int nb2 = 20;
	 int nb3 = 30;
	
	int *content1 = &nb1;
	int *content2 = &nb2;
	int *content3 = &nb3;

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);

	ft_lstadd_front(&head,node3);
	ft_lstadd_front(&head,node2);	
	ft_lstadd_front(&head,node1);	
	
	ft_affiche_list(head);	
}*/