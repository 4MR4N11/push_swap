/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:03:48 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/23 17:30:34 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    free_data(char **tmp)
{
    int i = -1;
    while(tmp[++i])
    {
        free(tmp[i]);
        tmp[i] = NULL;
    }
    free(tmp);
    tmp = NULL;
}

t_node *tab_fill(char **av)
{
    char **tmp;
    int i;
    int j;
    t_node *lst_tmp;
    t_node *head;
    i = 0;
    j = -1;
    lst_tmp = NULL;
    head = NULL;
    while(av[++i])
    {
        tmp = ft_split(av[i], ' ');
        while(tmp && tmp[++j])
        {
            if (head == NULL)
            {
                head = ft_listnew(ft_atoi(tmp[j]));
                lst_tmp = head;
            }
            else
            {
                lst_tmp->next = ft_listnew(ft_atoi(tmp[j]));
                lst_tmp = lst_tmp->next;
            }
        }
        free_data(tmp);
        j = -1;
    }
    return head;
}

void    print_stack(t_stack *ptr)
{
    t_node *tmp_a = ptr->stack_A;
    t_node *tmp_b = ptr->stack_B;

    ft_printf("stack A : \n");
    while(tmp_a != NULL)
    {
        ft_printf("|%d|\n",tmp_a->content);
        tmp_a = tmp_a->next;
    }

    ft_printf("\n-------------------------------------------------\n\n");
    ft_printf("stack B : \n");
    while(tmp_b != NULL)
    {
        ft_printf("|%d|\n",tmp_b->content);
        tmp_b = tmp_b->next;
    }
    ft_printf("\n-----------------------END-----------------------\n\n");
}

int main(int ac, char **av)
{
    t_stack tmp;
    if(ac < 2)
        return (0);
    tmp.stack_A = tab_fill(av);
    tmp.stack_size = ft_listsize(tmp.stack_A);
    tmp.msg_status = 0;
    tmp.stack_B = NULL;
    ft_printf("------------------instractions------------------\n");
    if(tmp.stack_size == 2)
        two_stack(&tmp);
    else if(tmp.stack_size == 3)
        three_stack(&tmp);
    else if(tmp.stack_size == 4 || tmp.stack_size == 5)
        five_four_stack(&tmp);
    ft_printf("------------------------------------------------\n\n");
    // small_stack(&tmp);
    print_stack(&tmp);
    // tmp.stack_B->next = NULL;
    // tmp.stack_B = malloc(sizeof(t_node *) * ft_listsize(tmp.stack_A));
    // ss(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // rr(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // rb(&tmp);
    // print_stack(&tmp);
    // ra(&tmp);
    // print_stack(&tmp);
    // rrr(&tmp);
    // print_stack(&tmp);
    // rr(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // ss(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // rr(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // rrr(&tmp);
    // print_stack(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // pb(&tmp);
    // print_stack(&tmp);
    // rb(&tmp);
    // print_stack(&tmp);
    // ra(&tmp);
    // print_stack(&tmp);
    // rrr(&tmp);
    // print_stack(&tmp);
    // rr(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // ss(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // pa(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // rr(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    // rrr(&tmp);
    // print_stack(&tmp);
    // // print_stack(&tmp);
    return 0;
}