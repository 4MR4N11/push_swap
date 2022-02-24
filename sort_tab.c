#include "push_swap.h"

char	**sort_tab(char **tab)
{
	char	*swap;
	int 	i;
	int		j;
	int		k;
	int		size;
	char	**sorted;
	char	**tmp;

	j = 0;
	size = 0;
	i = -1;
	while(tab[++j])
	{
		tmp = ft_split(tab[j], ' ');
		while(tmp && tmp[++i])
			size++;
		free_data(tmp);
		i = -1;
	}
	sorted = malloc(sizeof(char *) * (size + 1));
	i = -1;
	j = 0;
	k = 0;
	while(tab[++j])
	{
		tmp = ft_split(tab[j], ' ');
		while(tmp && tmp[++i])
		{
			sorted[k++] = ft_strdup(tmp[i]);
		}
		free_data(tmp);
		i = -1;
	}
	sorted[k] = NULL;
	i = 0;
	while (i < size-1)
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
