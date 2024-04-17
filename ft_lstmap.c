/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:52:23 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/17 15:14:51 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	hold;
	t_list	s;

	s = 0;
	while (lst != NULL)
	{
		hold = ft_lstnew(f(lst->content));
		if (!hold)
		{
			ft_lstclear(&s, del);
			return (NULL);
		}
		ft_lstadd_back(&s, hold);
		lst = lst->next;
	}
	return (s);
}
