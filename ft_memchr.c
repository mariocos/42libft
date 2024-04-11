/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:40:23 by mario             #+#    #+#             */
/*   Updated: 2024/04/11 17:39:38 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*hold;

	hold = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	if (c == 0)
		return (hold + ft_strlen((const char *)hold));
	while (i < n)
	{
		if (*hold == c)
			return (hold);
		hold++;
		i++;
	}
	return (NULL);
}
