/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:56:16 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/25 22:48:20 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_listnew(int content)
{
	t_node	*frst;

	frst = (t_node *)malloc(sizeof(t_node));
	if (!frst)
		return (NULL);
	frst->content = content;
	frst->next = NULL;
	return (frst);
}
