/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:47:35 by avelikan          #+#    #+#             */
/*   Updated: 2024/01/04 10:11:50 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_new;
	t_list	*node_new;
	void	*c_new;

	if (f == NULL)
		return (NULL);
	list_new = NULL;
	while (lst != NULL)
	{
		c_new = f(lst->content);
		node_new = ft_lstnew(c_new);
		if (!node_new)
		{
			ft_lstclear(&list_new, del);
			return (NULL);
		}
		ft_lstadd_back(&list_new, node_new);
		lst = lst->next;
	}
	return (list_new);
}
