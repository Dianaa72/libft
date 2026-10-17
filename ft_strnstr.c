/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 00:01:30 by marvin            #+#    #+#             */
/*   Updated: 2026/10/13 21:28:13 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*str2;

	str1 = (char *)big;
	str2 = (char *)little;
	i = 0;

	if(str2[0] == '\0')
		return (str1);
	while (str1[i] != '\0' && i < len)
	{
		j = 0;
		if (str1[i] == str2[0])
		{
		 while (str2[j] != '\0' && i + j < len)
			{
				if (str1[i + j] != str2[j])
					break;
				j++;
			}
			if (str2[j] == '\0')
				return (&str1[i]);
		}
		i++;
	}
return (NULL);
}
