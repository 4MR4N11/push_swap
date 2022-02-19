#include "push_swap.h"

int	*sort_tab(int *tab, int size)
{
	int		swap;
	int 	count;
	int		*sorted;

	count = -1;
	sorted = malloc(sizeof(int)*size);
	while(++count < size)
		sorted[count] = tab[count];
	count = 0;
	while ( count < (size - 1))
	{
		if (sorted[count] > sorted[count + 1])
		{
			swap =sorted[count];
			sorted[count] = sorted[count + 1];
			sorted[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
	int i = 0;
	return sorted;
}
