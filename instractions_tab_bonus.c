/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions_tab_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:24:07 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 13:59:28 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	**instractions_tab(void)
{
	char	**str;
	int		i;

	i = 0;
	str = malloc(sizeof(char *) * 12);
	str[i++] = ft_strdup("sa\n");
	str[i++] = ft_strdup("sb\n");
	str[i++] = ft_strdup("ss\n");
	str[i++] = ft_strdup("pa\n");
	str[i++] = ft_strdup("pb\n");
	str[i++] = ft_strdup("ra\n");
	str[i++] = ft_strdup("rb\n");
	str[i++] = ft_strdup("rr\n");
	str[i++] = ft_strdup("rra\n");
	str[i++] = ft_strdup("rrb\n");
	str[i++] = ft_strdup("rrr\n");
	str[i] = NULL;
	return (str);
}
