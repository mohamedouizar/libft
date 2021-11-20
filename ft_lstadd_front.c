#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
		new->next = *lst;
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
}
int main ()
{
	int n1 = 1337;
	int n2 = 42;
	int	*content1;
	int	*content2;
	t_list * head;
	t_list * node;
	content1 = &n1;
	content2 = &n2;
	head = ft_lstnew(content1);
	node = ft_lstnew(content2);
	 //ft_lstadd_front(&node, head);
	 ft_affiche(head);
	 ft_affiche(node);

}
*/