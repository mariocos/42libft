/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:47:20 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/10 21:19:34 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
			while (s[i] != c)
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

char	**ft_split(char const *s, char c)
{
	char	**ptrs;
	int		i;
	int		j;

	i = 0;
	j = 0;
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
	ptrs[j] = NULL;
	return (ptrs);
}
