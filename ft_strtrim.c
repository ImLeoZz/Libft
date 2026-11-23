/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:58:21 by lemille           #+#    #+#             */
/*   Updated: 2026/11/13 12:16:38 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_checkend(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	return (end);
}

static	size_t	ft_checkstart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	start;
	size_t	len;
	size_t	end;

	if (!ft_strlen(s1))
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		*dest = '\0';
		return (dest);
	}
	start = ft_checkstart(s1, set);
	end = ft_checkend(s1, set, start);
	len = end - start;
	dest = malloc((len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &s1[start], (len + 1));
	return (dest);
}
