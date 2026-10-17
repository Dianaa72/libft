/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 23:21:28 by marvin            #+#    #+#             */
/*   Updated: 2026/10/13 16:27:26 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	*str;
	char	cc;

	str = (char *)s;
	cc = (char)c;
	slen = ft_strlen(s);

	while (slen > 0)
	{
		if (str[slen] == cc)
			return (str + slen);
		slen--;
	}
	if (cc == str[slen])
		return (&str[slen]);
	return (0);
}
/*el ultimo if para comprobar str[0]*/