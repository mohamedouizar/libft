/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 05:58:15 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/03 17:38:50 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
			lst = lst->next;
	}
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
void f(void *content)
{
	char * str  = (char *) content;
	
	ft_strlcpy(str,"modified",6);
}
int main ()
{
	t_list *head = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;
	
	char * content1 = ft_strdup("hello ");
	char *content2 = ft_strdup(" my name ");
	char *content3 = ft_strdup(" is ouizar.");
	char *content4 = ft_strdup(" freeeeee");

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(content4);

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node4);
	//ft_affiche_liste(head);
	//printf("%d\n",ft_lstsize(head));
	ft_lstiter(head, &f);
	ft_affiche_liste(head);
	//printf("%d\n",ft_lstsize(head));
}*/