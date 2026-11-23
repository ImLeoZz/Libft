/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemille <lemille@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:26:41 by lemille           #+#    #+#             */
/*   Updated: 2026/11/17 19:27:21 by lemille          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*k;

	if (!lst || !*lst)
		return ;
	k = *lst;
	while (k)
	{
		temp = k->next;
		ft_lstdelone(k, del);
		k = temp;
	}
	*lst = NULL;
}
