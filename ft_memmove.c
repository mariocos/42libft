/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:44:03 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:15:20 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ret;

	if (!dest && !src)
		return (0);
	ret = dest;
	if (src < dest)
	{
		dest += n;
		src += n;
		while (n--)
			*(char *)--dest = *(char *)--src;
	}
	else
		while (n--)
			*(char *)dest++ = *(char *)src++;
	return (ret);
}
