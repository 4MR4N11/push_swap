/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:44:56 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 12:36:12 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	get_data(t_stack *tmp)
{
	tmp->instractions = instractions_tab();
	tmp->stack_size = ft_listsize(tmp->stack_a);
	tmp->stack_b = NULL;
}
