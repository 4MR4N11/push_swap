#include "push_swap.h"

void    pa(t_stack *tmp)
{
    t_node *node_tmp1;
    t_node *node_tmp2;
    if(!tmp->stack_B)
        return;
    node_tmp1 = tmp->stack_A;
    node_tmp2 = tmp->stack_B->next;
    tmp->stack_A = tmp->stack_B;
    tmp->stack_B = node_tmp2;
    tmp->stack_A->next = node_tmp1;
}

void    pb(t_stack *tmp)
{
    t_node *node_tmp1;
    t_node *node_tmp2;
    if(!tmp->stack_A)
        return;
    if(tmp->stack_B)
	{
    	node_tmp1 = tmp->stack_A->next;
    	node_tmp2 = tmp->stack_B;
    	tmp->stack_B = tmp->stack_A;
    	tmp->stack_A = node_tmp1;
    	tmp->stack_B->next = node_tmp2;
		return ;
	}
	node_tmp1 = tmp->stack_A->next;
    tmp->stack_B = tmp->stack_A;
    tmp->stack_A = node_tmp1;
    tmp->stack_B->next = NULL;
}