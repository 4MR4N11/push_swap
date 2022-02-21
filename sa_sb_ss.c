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
	if(tmp->msg_status == 0)
		ft_printf("sa\n");
}

void	sb(t_stack *tmp)
{
	if(tmp->stack_B && tmp->stack_B->next != NULL)
	{
		int	tmp_content;
		tmp_content = tmp->stack_B->content;
		tmp->stack_B->content = tmp->stack_B->next->content;
		tmp->stack_B->next->content = tmp_content;
		if(tmp->msg_status == 0)
			ft_printf("sb\n");
	}
	return ;
}

void	ss(t_stack *tmp)
{
	tmp->msg_status = 1;
	ft_printf("ss\n");
	sa(tmp);
	sb(tmp);
	tmp->msg_status = 0;
}