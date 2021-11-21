#include "libft.h"
/*
void  del(void * content)
{
	//content = ft_strdup("");
	free (content);
}
*/

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del) (lst->content) ;
	free (lst);
}
/*
void ft_print(t_list *node)
{
	t_list *ptr;
	ptr = node;
	while (ptr != NULL)
	{
		printf("%s\n",ptr->content);
		ptr = ptr->next;
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
	t_list * node3 ;

	node1 = ft_lstnew(content);
	node2 = ft_lstnew(content1);
	node3 = ft_lstnew(content2);

	ft_lstadd_front(&head,node1);
	ft_lstadd_back(&head,node2);
	ft_lstadd_back(&head,node3);
	ft_lstdelone(node2,del);
	ft_print(head);

}
*/
