/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:14:45 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 14:14:45 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_checker(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = -1;
	j = 0;
	while(++i < size)
	{
		tmp = tab[i];
		j = i;
		while(++j < size)
		{
			if(tmp == tab[j])
				return (1);
		}
	}
	return (0);
}

int	size_counter(char **tab)
{
	int 	i;
	int		j;
	int		size;
	char	**tmp;

	j = 0;
	size = 0;
	i = -1;
	while (tab[++j])
	{
		tmp = ft_split(tab[j], ' ');
		while (tmp && tmp[++i])
			size++;
		free_data(tmp);
		i = -1;
	}
	return (size);
}

int	*sort_tab(char **tab, t_stack *tmpp)
{
	int		swap;
	int 	i;
	int		j;
	int		k;
	int		size;
	int		*sorted;
	char	**tmp;

	i = -1;
	j = 0;
	k = 0;
	size = size_counter(tab);
	sorted = malloc(sizeof(int) * (size));
	while (tab[++j])
	{
		tmp = ft_split(tab[j], ' ');
		while(tmp && tmp[++i])
			sorted[k++] = ft_atoi(tmp[i]);
		free_data(tmp);
		i = -1;
	}
	if (error_checker(sorted, size) == 1)
	{
		tmpp->msg_status = 1;
		free(sorted);
		return (0);
	}
	i = 0;
	while (i < size - 1)
	{
		if (sorted[i] > sorted[i + 1])
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
