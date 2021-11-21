#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	//if (!*lst || !del || !lst)
	//return ;

	while (*lst != NULL)
	{
		ft_lstdelone(*lst,del);
		*lst = (*lst)->next;
	}

}
