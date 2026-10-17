/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:46:46 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/13 20:17:49 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	resultado;
	int	signo;

	i = 0;
	signo = 1;
	while (nptr[i] != '\0'
		&& (nptr[i] == 32 || (nptr[i] >= '\t' && nptr[i] <= '\r')))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signo *= -1;
		i++;
	}
	resultado = 0;
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		resultado = (resultado * 10) + (nptr[i] - '0');
		i++;
	}
	return (signo * resultado);
}
