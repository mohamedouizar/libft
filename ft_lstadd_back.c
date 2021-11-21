#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst)
	{
		t_list *lastnode = ft_lstlast(*lst);
		lastnode->next = new;	
	}
	else 
		*lst = new;
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
}*/
/*
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
	//ft_affiche(head);
	//printf("size is :%d\n",ft_lstsize(head));

//	printf("last node is %d",*(int *)ft_lstlast(head)->content);

	ft_lstadd_back(&head,node1);


	ft_affiche(head);


}
*/
