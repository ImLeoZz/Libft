/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:49:42 by lemille           #+#    #+#             */
/*   Updated: 2026/11/12 17:56:22 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	dest_len;
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest_len = s1_len + s2_len + 1;
	dest = malloc(dest_len);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, (s1_len + 1));
	ft_strlcat(dest, s2, dest_len);
	return (dest);
}
