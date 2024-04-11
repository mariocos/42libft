/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:40:23 by mario             #+#    #+#             */
/*   Updated: 2024/04/11 15:08:00 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	if (c == 0)
		return (s + ft_strlen((char const *)s));
	while (i < n)
	{
		if (*(unsigned char *)s == c)
			return (s);
		s++;
		i++;
	}
	return (NULL);
}
