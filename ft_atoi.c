/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:19:14 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/31 17:05:01 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		result;
	int		convert;

	result = 0;
	convert = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-') // Hatalı olabilir + için bakmıyorsun sonrasında patlar örnk:  "     +31" aşşada patlar gibi.
	{
		convert = -1;
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * convert);
}
