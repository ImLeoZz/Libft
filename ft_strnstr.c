/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:25:38 by lemille           #+#    #+#             */
/*   Updated: 2026/11/12 10:52:19 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	k;
	size_t	i;

	k = 0;
	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (k < len && big[k])
	{
		if (little[0] == big[k])
		{
			while (little[i] && little[i] == big[k + i] && len > k + i)
				i++;
			if (!(little[i]))
				return ((char *)&big[k]);
			i = 0;
		}
		k++;
	}
	return (NULL);
}
