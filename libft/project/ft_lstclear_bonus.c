/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:03:46 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/11 20:32:39 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_del;
	t_list	*node_next;

	if (!lst)
		return ;
	node_del = *lst;
	while (node_del != NULL)
	{
		node_next = node_del->next;
		ft_lstdelone(node_del, del);
		node_del = node_next;
	}
	*lst = NULL;
}
