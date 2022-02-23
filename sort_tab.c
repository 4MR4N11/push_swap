#include "push_swap.h"

char	**sort_tab(char **tab)
{
	char	*swap;
	int 	i;
	int		j;
	int		size;
	char	**sorted;

	j = 0;
	size = 0;
	i = -1;
	while(tab[++j])
		size++;
	sorted = malloc(sizeof(char *) * (size + 1));
	i = 0;
	j = 0;
	while(i < size)
		sorted[i++] = ft_strdup(tab[++j]);
	sorted[i] = NULL;
	i = 0;
	while (i < (size - 1))
	{
		if (ft_atoi(sorted[i]) > ft_atoi(sorted[i + 1]))
		{
			swap = sorted[i];
			sorted[i] = sorted[i + 1];
			sorted[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
	return (sorted);
}
