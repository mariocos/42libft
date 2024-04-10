/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:49:11 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/10 21:22:48 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strcat(char *dst, const char *src, char	*ret)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		ret[i] = dst[i];
		i++;
	}
	while (src[j] != '\0')
		ret[i++] = src[j++];
	ret[i] = '\0';
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ret;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ret = malloc(s1_len + s2_len + 1);
	if (ret == NULL)
		return (NULL);
	ret[0] = '\0';
	ft_strcat((char *)s1, (char *)s2, ret);
	return (ret);
}
