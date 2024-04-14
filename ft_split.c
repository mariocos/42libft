/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:47:20 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/14 18:53:25 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] == c)
			i++;
	}
	return (count + 1);
}

char	*alocword(char *s, int i, char c)
{
	int		k;
	char	*ret;

	k = 0;
	while (s[i++] != c)
		k++;
	i -= k + 1;
	ret = malloc(k + 1);
	k = 0;
	if (ret == NULL)
		return (NULL);
	while (s[i] != c)
		ret[k++] = s[i++];
	ret[k] = '\0';
	return (ret);
}

char	**nullsplit(char const *s)
{
	char	**ret;

	ret = malloc(sizeof(char *) * 2);
	ret[0] = ft_strdup(s);
	ret[1] = NULL;
	return (ret);
}


char	**ft_split(char const *s, char c)
{
	char	**ptrs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (c == 0 && *s)
		return (nullsplit(s));
	ptrs = malloc(sizeof(char *) * countwords(s, c));
	if (ptrs == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
			ptrs[j++] = alocword((char *)s, i, c);
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c)
			i++;
	}
	ptrs[j] = '\0';
	return (ptrs);
}
