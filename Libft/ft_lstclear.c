/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:12:05 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/04 09:43:21 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l;
	t_list	*n;

	if (lst == NULL || del == NULL)
		return ;
	l = *lst;
	while (l != NULL)
	{
		n = l->next;
		ft_lstdelone(l, del);
		l = n;
	}
	*lst = NULL;
}
