/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:48:42 by lemille           #+#    #+#             */
/*   Updated: 2026/11/10 13:28:30 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;
	size_t			k;

	k = 0;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (k < n)
	{
		*dest2 = *src2;
		dest2++;
		src2++;
		k++;
	}
	return (dest);
}
