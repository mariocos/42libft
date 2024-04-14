/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:30:08 by mario             #+#    #+#             */
/*   Updated: 2024/04/11 22:33:07 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (!*little)
		return ((char *)big);
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
