#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return lst;
	while (lst->next)
		 lst=lst->next;

	return (lst);
}
/*
void ft_affiche(t_list *node)
{
	t_list *ptr;
	ptr = node;
	while(ptr != NULL)
	{

		printf("%d\n",*(int *)ptr->content);
		ptr = ptr->next;

	}
}

int main()
{
	int a = 10;
	int b = 20;
	//int c= 30;

	void *content = &a;
	void *content1 = &b;
//	void *content2 = &c;

	t_list *head;
	t_list *node;
//	t_list *node1;

	head = ft_lstnew(content);
	node = ft_lstnew(content1);
//	node1 = ft_lstnew(content2);

	ft_lstadd_front(&node,head);
	ft_affiche(head);
	printf("size is :%d\n",ft_lstsize(head));

	printf("last node is %d",*(int *)ft_lstlast(head)->content);


}

*/