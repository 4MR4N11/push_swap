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
int main(int ac, char **av)
{
    int j;
    int i;
    t_stack tmp;
    if(ac < 3)
        return (0);
    i = -1;
    j = -1;
    tmp.stack_A = tab_fill(av);
    // tmp.stack_B = NULL;
    // tmp.stack_B->next = NULL;
    // tmp.stack_B = malloc(sizeof(t_node *) * ft_listsize(tmp.stack_A));
    // ss(&tmp);
    // pa(&tmp);
    pb(&tmp);
    pb(&tmp);
    pb(&tmp);
    pb(&tmp);
    // sb(&tmp);
    // pa(&tmp);
    // pa(&tmp);
    // pa(&tmp);
    // pa(&tmp);
    rr(&tmp);

    while(tmp.stack_A != NULL)
    {
        ft_printf("stack A : |%d|\n",tmp.stack_A->content);
        tmp.stack_A = tmp.stack_A->next;
    }
    ft_printf("\n\n");
    while(tmp.stack_B != NULL)
    {
        ft_printf("stack B : |%d|\n",tmp.stack_B->content);
        tmp.stack_B = tmp.stack_B->next;
    }
    return 0;
}