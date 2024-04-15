/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:05:46 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/15 13:26:04 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*hold;

	if (*lst)
	{
		hold = ft_lstlast(*lst);
		hold->next = new;
	}
	else if (lst && !(*(lst)))
		*lst = new;
}
