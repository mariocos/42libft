/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:32:04 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/11 17:36:07 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	hold;

	while (*lst->next != NULL)
	{
		hold = lst->next;
		del(*lst->content);
		free(*lst);
		*lst = hold;
	}
}
