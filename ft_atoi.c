/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:53:16 by lemille           #+#    #+#             */
/*   Updated: 2026/11/19 17:33:11 by lemille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	size_t	k;

	k = 0;
	sign = 1;
	result = 0;
	while (nptr[k] == ' ' || (nptr[k] >= 9 && nptr[k] <= 13))
		k++;
	if (nptr[k] == '+' || nptr[k] == '-')
	{
		if (nptr[k] == '-')
			sign = -1;
		k++;
	}
	while (ft_isdigit((nptr[k])))
	{
		result *= 10;
		result += nptr[k++] - '0';
	}
	return (result * sign);
}
