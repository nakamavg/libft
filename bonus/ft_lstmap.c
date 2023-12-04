/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:26:55 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/04 18:46:44 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_map;
	t_list	*node;
	void	*map_node;

	list_map = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		map_node = f(lst->content);
		node = ft_lstnew(map_node);
		if (!node)
		{
			del(map_node);
			ft_lstclear(&list_map, del);
			return (NULL);
		}
		ft_lstadd_back(&list_map, node);
		lst = lst->next;
	}
	return (list_map);
}
