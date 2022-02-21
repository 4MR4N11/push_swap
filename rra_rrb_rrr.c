#include "push_swap.h"

void    rra(t_stack *tmp)
{
    t_node *node_tmp;
    t_node *head;

    if(!tmp->stack_A || !tmp->stack_A->next)
        return ;
    head = tmp->stack_A;
    while(tmp->stack_A->next != NULL)
    {
        node_tmp = tmp->stack_A;
        tmp->stack_A = tmp->stack_A->next;
    }
    tmp->stack_A->next = head;
    node_tmp->next = NULL;
    if(tmp->msg_status == 0)
		ft_printf("rra\n");
}

void    rrb(t_stack *tmp)
{
    t_node *node_tmp;
    t_node *head;

    if(!tmp->stack_B || !tmp->stack_B->next)
        return ;
    head = tmp->stack_B;
    while(tmp->stack_B->next != NULL)
    {
        node_tmp = tmp->stack_B;
        tmp->stack_B = tmp->stack_B->next;
    }
    tmp->stack_B->next = head;
    node_tmp->next = NULL;
    if(tmp->msg_status == 0)
		ft_printf("rrb\n");
}

void    rrr(t_stack *tmp)
{
    tmp->msg_status = 1;
    ft_printf("rrr\n");
    rra(tmp);
    rrb(tmp);
    tmp->msg_status = 0;
}