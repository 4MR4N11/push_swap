#include "push_swap.h"

void	sa(t_stack *tmp)
{
	if(!tmp->stack_A || tmp->stack_A->next == NULL)
	{
		return ;
	}
	int	tmp_content;
	tmp_content = tmp->stack_A->content;
	tmp->stack_A->content = tmp->stack_A->next->content;
	tmp->stack_A->next->content = tmp_content;
}

void	sb(t_stack *tmp)
{
	if(tmp->stack_B && tmp->stack_B->next != NULL)
	{
		int	tmp_content;
		tmp_content = tmp->stack_B->content;
		tmp->stack_B->content = tmp->stack_B->next->content;
		tmp->stack_B->next->content = tmp_content;
	}
	return ;
}

void	ss(t_stack *tmp)
{
	sa(tmp);
	sb(tmp);
}