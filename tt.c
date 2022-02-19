#include "push_swap.h"
#include <stdio.h>
int    *tab_fill(char **av, int ac)
{
    int i = -1;
    int *input;
    input = malloc(sizeof(int) * ac);
    while(++i < ac)
        input[i] = ft_atoi(av[i]);
    return input;
}
int main(int ac, char **av)
{
    int j;
    int *input;
    int *index;
    int *copy;

    index = malloc(sizeof(int) * ac-1);
    input = tab_fill(++av,ac-1);
    copy = sort_tab(input,ac-1);
    for(int i = 0 ; i < ac-1 ; ++i) 
        for(int j = 0 ; j < ac-1 ; ++j)
            if (input[i] == copy[j])
                index[i] = j;
    j = -1;
    while(++j < 7)
        printf("%d ",index[j]);
    j = -1;
    printf("\n");
    while(++j < 7)
        printf("%d ",copy[j]);
    return 0;
}