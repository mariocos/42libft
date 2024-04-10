/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:26:08 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:14:24 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while (i < n && res == 0)
	{
		res = *(char *)s1++ - *(char *)s2++;
		i++;
	}
	return (res);
}
