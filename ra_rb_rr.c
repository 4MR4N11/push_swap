#include "push_swap.h"

void    ra(t_stack *tmp)
{
    t_node *node_tmp;
    t_node *head;

    head = tmp->stack_A->next;
    node_tmp = tmp->stack_A;
    while(tmp->stack_A->next != NULL)
        tmp->stack_A = tmp->stack_A->next;
    tmp->stack_A->next = node_tmp;
    node_tmp->next = NULL;
    tmp->stack_A = head;
}

void    rb(t_stack *tmp)
{
    t_node *node_tmp;
    t_node *head;

    head = tmp->stack_B->next;
    node_tmp = tmp->stack_B;
    while(tmp->stack_B->next != NULL)
        tmp->stack_B = tmp->stack_B->next;
    tmp->stack_B->next = node_tmp;
    node_tmp->next = NULL;
    tmp->stack_B = head;
}

void    rr(t_stack *tmp)
{
	ra(tmp);
	rb(tmp);
}