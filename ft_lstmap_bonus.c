#include "libft.h"

void  del(void * content)
{
	//content = ft_strdup("");
	free (content);
}


t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *new;
	t_list *temp;
	
	new = NULL;
//	temp = 
	while (lst)
	{
		temp = ft_lstnew((f)(lst->content));
		if (!temp)
		{

			ft_lstclear(&new ,del);
			return 0 ;
		}
		lst=lst->next;		
		ft_lstadd_back(&new,temp);
	}

 return (new);
}
/*
void  * f1(void * content)
{
	content = ft_strdup("a");
	return content;
	//free (content);
}

void ft_print(t_list *node)
{
	//t_list *ptr;
//	ptr = node;
	while (node != NULL)
	{
		printf("%s\n",node->content);
		node = node->next;
	}
}

int main ()
{

	void *content = ft_strdup("abc"); 
	void *content1 = ft_strdup("def"); 
	void *content2 = ft_strdup("igh");

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
//	ft_lstdelone(node2,del);
	 t_list *new=ft_lstmap(head,f1,del);
ft_print(new);

}*/

