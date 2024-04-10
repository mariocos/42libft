/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariocos <mariocos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:10 by mariocos          #+#    #+#             */
/*   Updated: 2024/04/09 15:10:37 by mariocos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	countsize(int n)
{
	long	nb;
	int		space;

	nb = n;
	space = 0;
	if (nb < 0)
	{
		space++;
		nb *= -1;
	}
	while (nb > 0)
	{
		space++;
		nb /= 10;
	}
	return (space);
}

char	*vazio(void)
{
	char	*ret;

	ret = malloc(sizeof(int));
	if (ret == NULL)
		return (NULL);
	ret[0] = '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	long	nb;
	int		count;

	count = countsize(n);
	if (n == 0)
		return (vazio());
	ret = malloc(sizeof(int) * count);
	if (ret == NULL)
		return (NULL);
	nb = n;
	if (nb < 0)
	{
		ret[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		ret[--count] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ret);
}
