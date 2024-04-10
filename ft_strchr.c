/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:38:35 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:20:09 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	hold;
	char	*ret;

	hold = c;
	ret = (char *)s;
	while (*s)
	{
		if (*ret == hold)
			return (ret);
		ret++;
	}
	if (*ret == hold)
		return ((char *)ret);
	return (0);
}
