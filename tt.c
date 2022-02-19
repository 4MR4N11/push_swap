#include <stdio.h>
int main()
{
    int j;
    int copy[] = {-487, -100, 0, 1, 87, 101, 781};
    int input[] = {87, -487, 781, -100, 101, 0, 1};
    int input2[7];
    for(int i = 0 ; i < 7 ; ++i) 
        for(int j = 0 ; j < 7 ; ++j)
            if (input[i] == copy[j])
                input2[i] = j;
    j = -1;
    while(++j < 7)
        printf("%d ",input2[j]);
    return 0;
}