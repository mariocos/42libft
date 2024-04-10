/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:35:08 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:14:42 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ret;

	if (!dest && !src)
		return (0);
	ret = dest;
	while (n--)
	{
		*(char *)dest = *(const char *)src;
		dest++;
		src++;
	}
	return (ret);
}
