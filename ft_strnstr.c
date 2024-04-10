/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:30:08 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:27:03 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (i < len && *big)
	{
		j = 0;
		while (big[j] == little[j] && (j + i) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big);
		big++;
		i++;
	}
	return (0);
}
