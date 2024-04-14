/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:12:02 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/14 18:46:53 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
