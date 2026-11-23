/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 07:52:55 by lemille           #+#    #+#             */
/*   Updated: 2026/11/12 08:36:03 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	if (n == 0)
		return (0);
	while (k < (n - 1) && (s1[k] || s2[k]))
	{
		if (((unsigned char)s1[k]) != ((unsigned char)s2[k]))
			return ((unsigned char)s1[k] - (unsigned char)s2[k]);
		k++;
	}
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
