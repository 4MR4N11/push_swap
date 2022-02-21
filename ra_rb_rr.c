#include "push_swap.h"

void    ra(t_stack *tmp)
{
    t_node *node_tmp;
    t_node *head;

	if(!tmp->stack_A || !tmp->stack_A->next)
        return ;
    head = tmp->stack_A->next;
    node_tmp = tmp->stack_A;
    while(tmp->stack_A->next != NULL)
        tmp->stack_A = tmp->stack_A->next;
    tmp->stack_A->next = node_tmp;
    node_tmp->next = NULL;
    tmp->stack_A = head;
	if(tmp->msg_status == 0)
		ft_printf("ra\n");
}

void    rb(t_stack *tmp)
{
    t_node *node_tmp;
    t_node *head;

	if(!tmp->stack_B || !tmp->stack_B->next)
        return ;
    head = tmp->stack_B->next;
    node_tmp = tmp->stack_B;
    while(tmp->stack_B->next != NULL)
        tmp->stack_B = tmp->stack_B->next;
    tmp->stack_B->next = node_tmp;
    node_tmp->next = NULL;
    tmp->stack_B = head;
	if(tmp->msg_status == 0)
		ft_printf("rb\n");
}

void    rr(t_stack *tmp)
{
	tmp->msg_status = 1;
	ft_printf("rr\n");
	ra(tmp);
	rb(tmp);
	tmp->msg_status = 0;
}