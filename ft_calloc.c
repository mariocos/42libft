/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:31:09 by mario             #+#    #+#             */
/*   Updated: 2024/04/11 17:51:32 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = (unsigned char)c;
		i++;
		s++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr != NULL)
			*(char *)ptr = '\0';
		return (ptr);
	}
	ptr = malloc (nmemb * size);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
