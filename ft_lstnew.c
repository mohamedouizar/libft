#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *element;

	element = NULL;
	if (!(element = malloc(sizeof(*element))))
		return (NULL);
	element -> content = content;
	element -> next =NULL;
	return (element);
}
/*
int main ()
{
  printf("new %s",ft_lstnew("ouizar is legend")->content);

}
*/