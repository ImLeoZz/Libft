/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:35:15 by lemille           #+#    #+#             */
/*   Updated: 2026/11/12 13:01:31 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	if (size * nmemb == 0)
		return (malloc(1));
	dest = malloc((nmemb * size));
	if (!dest)
		return (NULL);
	ft_bzero(dest, (size * nmemb));
	return (dest);
}
