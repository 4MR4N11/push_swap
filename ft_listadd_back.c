#include "push_swap.h"

void	ft_listadd_back(t_node **lst,t_node *new)
{
	t_node	*tmp;

	tmp = *lst;
	if (*lst == NULL)
	{
		write(1,"is null \n", 9);
		*lst = new;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}