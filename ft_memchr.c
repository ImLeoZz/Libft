/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 08:40:07 by lemille           #+#    #+#             */
/*   Updated: 2026/11/12 10:00:40 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	k;

	k = 0;
	str = (char *)s;
	while (k < n)
	{
		if (*str == (char)c)
			return (str);
		str++;
		k++;
	}
	return (NULL);
}
