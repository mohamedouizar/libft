/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:13:35 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/03 12:51:40 by mouizar          ###   ########.fr       */
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
	void ft_affiche(t_list *head)
{
	while (head != NULL)
	{
		printf("%s\n",(char *)head->content);
		printf("%d\n",ft_lstsize(head));
		head = head->next;
	}
	
}
int main()
{
	 t_list *head = NULL ;
	
	int i = 0 ;
		while (i <= 20)
	{
		ft_lstadd_back(&head,ft_lstnew(ft_strdup("my name is ")));
	 	i++;
	 }
	
	ft_affiche(head);
	
}*/