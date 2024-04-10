/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:00:38 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/10 21:28:50 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strcheck(const char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == c)
			return (0);
		j++;
	}
	return (1);
}

int	sizeto(char const *s1, char const *set)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strcheck(s1[i], set) == 1)
			ret++;
		i++;
	}
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		j;

	j = 0;
	i = 0;
	ret = malloc(sizeto(s1, set));
	if (ret == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_strcheck(s1[i], set) == 1)
			ret[j++] = s1[i];
		i++;
	}
	return (ret);
}
