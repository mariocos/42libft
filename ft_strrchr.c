/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:31:56 by mario             #+#    #+#             */
/*   Updated: 2024/04/10 21:27:53 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	hold;
	char	*ret;

	hold = c;
	ret = 0;
	while (*s)
	{
		if (*s == hold)
			ret = (char *)s;
		s++;
	}
	if (*s == hold)
		ret = (char *)s;
	return ((char *)ret);
}
