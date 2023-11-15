/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:17:30 by hidriouc          #+#    #+#             */
/*   Updated: 2023/11/13 21:00:51 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*p;
	void	*cont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst)
	{
		cont = f(lst->content);
		p = ft_lstnew(cont);
		if (!p)
		{
			del(cont);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, p);
		lst = lst->next;
	}
	return (head);
}
