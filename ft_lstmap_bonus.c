/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:02:41 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/05 14:35:07 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
void * f(void *content)
{
	return content = ft_strdup("map ");
}

void del(void * content)
{
	free(content);
}

void ft_affiche(t_list *head)
{
	while(head->next != NULL)
	{
		printf("%s",(char *)head->content);
		head = head->next;
	}
}


int main()
{
	t_list *head = NULL;
	t_list *node = ft_lstnew(ft_strdup("to be deleted "));
int i = 1 ;

	while (i < 10)
	{		
		ft_lstadd_front(&head,ft_lstnew(ft_strdup(" bye")));
		i++;	
	}
	ft_lstadd_front(&head,ft_lstnew(ft_strdup("hi ")));
	ft_lstadd_front(&head,node);
		ft_lstadd_back(&head,ft_lstnew(ft_strdup(" bbbbbbbaye")));
		//ft_lstclear(&head,del);
		//ft_lstiter(head,f);
		t_list *mapnode;
		mapnode = ft_lstmap(head,f,del);
		ft_affiche(mapnode);
	 	
}*/
