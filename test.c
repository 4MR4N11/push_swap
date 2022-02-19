#include <stdio.h>

int main()
{
    int i = 0;
    int nb = 1234;
    int len;
    int tmp = nb;
    int *ret;
    while(tmp)
    {
        tmp = tmp / 2;
        i++;
    }
    len = i - 1;
    ret = malloc(sizeof(int) * i);
    while(nb)
    {
        ret[len] = nb - (nb / 2) * 2;
        nb = nb / 2;
        len--;
    }
    return 0;
}