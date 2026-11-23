/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:20:08 by lemille           #+#    #+#             */
/*   Updated: 2026/11/17 14:10:34 by lemille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_cleanfree(char **dest, size_t l)
{
	size_t	k;

	k = 0;
	while (k < l)
		free(dest[k++]);
	free(dest);
	return (0);
}

static int	ft_putword(char **dest, char const *s, char c)
{
	size_t	len;
	size_t	k;
	size_t	l;
	size_t	d;

	k = 0;
	l = 0;
	while (s[k] == c && s[k])
		k++;
	while (s[k])
	{
		d = k;
		while (s[k] != c && s[k])
			k++;
		len = k - d;
		dest[l] = malloc(len + 1);
		if (!dest[l])
			return (ft_cleanfree(dest, l));
		ft_strlcpy(dest[l++], &s[d], (len + 1));
		while (s[k] == c && s[k])
			k++;
	}
	dest[l] = NULL;
	return (1);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	size_t	k;

	k = 0;
	count = 0;
	while (s[k])
	{
		while (s[k] == c && s[k])
			k++;
		if (s[k])
			count++;
		while (s[k] != c && s[k])
			k++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (s == NULL)
		return (NULL);
	dest = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!dest)
		return (NULL);
	if (!ft_putword(dest, s, c))
		return (NULL);
	return (dest);
}
