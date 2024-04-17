/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:32:04 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/17 14:10:37 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*hold;

	while (*lst)
	{
		hold = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = hold;
	}
}
