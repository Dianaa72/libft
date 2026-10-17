/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:24:14 by marvin            #+#    #+#             */
/*   Updated: 2026/10/13 15:46:38 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*str;

	i = 0;
	cc = (char) c;
	str = (char *)s;

	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i++;
	}

	if (cc == '\0' && str[i] == '\0')
	{
		return (&str[i]);
	}
	return (0);
}
