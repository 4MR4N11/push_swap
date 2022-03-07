/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:19:29 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/14 19:44:01 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
