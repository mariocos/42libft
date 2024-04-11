/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:26 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:26:40 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	ret = 0;
	i = 0;
	if (!*s2)
		return (0);
	while (ret == 0 && s1[i] != 0 && i < n)
	{
		ret = s1[i] - s2[i];
		i++;
	}
	return (ret);
}
