/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:09:13 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/19 16:16:58 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*chr;
	size_t		len;
	size_t		i;

	i = 0;
	chr = (char *)s;
	len = ft_strlen(chr);
	if (c == '\0')
		return (chr + len);
	while (i < len)
	{
		if (s[i] == (char)c)
			return (chr + i);
		i++;
	}
	return (NULL);
}
