/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:55:52 by mouizar           #+#    #+#             */
/*   Updated: 2021/12/03 17:55:57 by mouizar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	ptr = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
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
int main( )
{
	t_list *head = NULL;
		int i;
		i = 0;	
	

	while (i < 5000)
	{

		ft_lstadd_front(&head,ft_lstnew("send nuds plz!\t"));
		i++;
	}

	
	ft_affiche(head);
}
*/