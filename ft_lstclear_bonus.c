/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 05:11:49 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/03 13:28:08 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
}
/*
void del(void * content)
{
	free(content);
}
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
	
	char * content1 = ft_strdup("hello ");
	char * content2 = ft_strdup(" my name ");
	char * content3 = ft_strdup(" is ouizar.");
	char * content4 = ft_strdup(" and im a legend.");

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(content4);

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node4);
	printf("%d\n",ft_lstsize(head));
	ft_lstclear(node2, del);
	ft_affiche_liste(head);
	printf("%d\n",ft_lstsize(head));
}*/