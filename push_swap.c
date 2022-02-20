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
    t_node *tmp;
    if(ac < 3)
        return (0);
    i = -1;
    j = -1;
    tmp = tab_fill(av);
    while(tmp != NULL)
    {
        ft_printf("[%d] %d\n",++i,tmp->content);
        tmp = tmp->next;
    }
    return 0;
}