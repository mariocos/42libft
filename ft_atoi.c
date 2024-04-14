/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:42:11 by mario             #+#    #+#             */
/*   Updated: 2024/04/11 23:23:25 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	result;
	int		signal;
	int		i;
	int		hold;

	signal = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		signal = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		hold = nptr[i] - 48;
		result = (result * 10) + hold;
		i++;
	}
	return (signal * result);
}
