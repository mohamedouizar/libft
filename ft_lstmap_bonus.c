/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:02:41 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/03 17:47:35 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void  del(void * content)
{
	//content = ft_strdup("");
	free (content);
}

void  * f1(void * content)
{
	content = ft_strdup(" and im proud of myself");
	return content;
	//free (content);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&new, temp);
	}
	return (new);
}
/*
void ft_print(t_list *node)
{
	while (node != NULL)
	{
		printf("%s",node->content);
		node = node->next;
	}
}

int main ()
{


	void *content = ft_strdup("hi "); 
	void *content1 = ft_strdup(" im ouizar "); 
	void *content2 = ft_strdup("im 25 years old.");

	t_list *head=NULL;
	t_list * node1;
	t_list * node2;
	t_list * node3;

	node1 = ft_lstnew(content);
	node2 = ft_lstnew(content1);
	node3 = ft_lstnew(content2);

	ft_lstadd_front(&head,node1);
	ft_lstadd_back(&head,node2);
	ft_lstadd_back(&head,node3);
   	ft_print(head);
printf("\n");
   	t_list *new;
   	new = ft_lstmap(head,f1,del);
   	ft_print(new);

}*/
