#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int count;
	count = 0;
	t_list *ptr = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
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
	int c= 30;

	void *content = &a;
	void *content1 = &b;
	void *content2 = &c;

	t_list *head;
	t_list *node;
	t_list *node1;

	head = ft_lstnew(content);
	node = ft_lstnew(content1);
	node1 = ft_lstnew(content2);

	ft_lstadd_front(&node,head);
	ft_affiche(head);
	printf("size is :%d\n",ft_lstsize(head));


}

*/



