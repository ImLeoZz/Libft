/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:07:31 by lemille           #+#    #+#             */
/*   Updated: 2026/11/20 08:58:28 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	len;
	size_t	k;

	k = 0;
	len = ft_strlen(s);
	if (!ft_strlen(s))
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[k] = '\0';
		return (dest);
	}
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (k < len)
	{
		dest[k] = f(k, s[k]);
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
