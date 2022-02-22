/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:08:53 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/22 19:22:12 by marvin           ###   ########.fr       */
=======
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:08:53 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/22 18:05:55 by kel-amra         ###   ########.fr       */
>>>>>>> f792e53262d014f67131eaf139099be01d6c66b1
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_listsize(t_node *lst)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
