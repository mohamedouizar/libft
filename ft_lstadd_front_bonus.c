/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:44:14 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/02 21:56:16 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
		new->next = *lst;
		*lst = new;
}
/*
void ft_affiche(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s",(char *)lst->content);
		lst = lst->next;
	}
}
int main()
{
	 t_list *head = NULL ;
	// t_list *node1; = ft_lstnew(ft_strdup("hello "));
	 //t_list *node2 = ft_lstnew(ft_strdup("my name is "));
	// t_list *node3 = ft_lstnew(ft_strdup("ouizar"));
	int i = 0 ;
	
	// ft_lstadd_front(&head,node3);
	// ft_lstadd_front(&head,node2);
	// ft_lstadd_front(&head,node1);

	while (i <= 20)
	{
		ft_lstadd_front(&head,ft_lstnew(ft_strdup("my name is ")));
	 	i++;
	 }
	
	ft_affiche(head);
	
	//printf("%s",(char *)node1->next);
}*/