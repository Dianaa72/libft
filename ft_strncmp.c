/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 23:27:33 by marvin            #+#    #+#             */
/*   Updated: 2026/10/13 16:15:28 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;

	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] - str2[i] == 0)
		{
			i++;
		}
		else
		{
			return (str1[i] - str2[i]);
		}
	}
	return (0);
}
