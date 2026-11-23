/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:49:14 by lemille           #+#    #+#             */
/*   Updated: 2026/11/17 15:34:04 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strrev(char *str)
{
	char	temp;
	size_t	k;
	size_t	l;

	k = 0;
	l = ft_strlen(str) - 1;
	if (str[k] == '-')
		k++;
	while (k < l)
	{
		temp = str[k];
		str[k++] = str[l];
		str[l--] = temp;
	}
	return (str);
}

static size_t	ft_intlen(long int nb)
{
	size_t	k;

	k = 1;
	if (nb < 0)
	{
		nb *= -1;
		k++;
	}
	while (nb > 9)
	{
		nb /= 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char		*dest;
	size_t		len;
	long int	nb;
	size_t		k;

	k = 0;
	nb = n;
	len = ft_intlen(nb);
	dest = malloc((len + 1));
	if (!dest)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		dest[k++] = '-';
	}
	while (k < len)
	{
		dest[k++] = (nb % 10) + '0';
		nb /= 10;
	}
	dest[k] = '\0';
	return (ft_strrev(dest));
}
