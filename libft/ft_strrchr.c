/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:52:05 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/19 11:22:38 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*chr;

	i = 0;
	chr = (char *)s;
	while (*chr != '\0')
	{
		chr++;
		i++;
	}
	while (i >= 0)
	{
		if (*chr == (char)c)
		{
			return (chr);
		}
		chr--;
		i--;
	}
	return (NULL);
}
