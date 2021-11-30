/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:06:43 by mouizar           #+#    #+#             */
/*   Updated: 2021/11/30 02:07:19 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void del(void * content)
{
	free(content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
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
*/
/*
int main ()
{
	t_list *head = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;
	
	char * content1 = ft_strdup("hello ");
	char  content2[] = " my name ";
	char  content3[] = " is ouizar.";

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(" And im a legend\n");

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node4);
	ft_lstsize(head);
	printf("%d\n",ft_lstsize(head));
	ft_lstdelone(node1, del);
	ft_affiche_liste(head);
	printf("%d\n",ft_lstsize(head));
}*/