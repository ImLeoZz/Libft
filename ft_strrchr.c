/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:00:34 by lemille           #+#    #+#             */
/*   Updated: 2026/11/11 18:41:41 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	char	*str;

	temp = NULL;
	str = (char *)s;
	while (*str)
	{
		if ((char)c == *str)
			temp = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		return (str);
	return (temp);
}
