/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:39:44 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/30 02:07:50 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
	//printf("%d",ft_lstsize(head));
	//printf("%s\n",(char *)ft_lstlast(head)->content);
	
}
*/