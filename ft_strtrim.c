/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:54:55 by marvin            #+#    #+#             */
/*   Updated: 2026/10/15 16:54:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	start;
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = 0;
	while (start < s1_len && ft_memchr(set, s1[start], set_len) != NULL)
		start++;
	end = s1_len - 1;
	while (end >= start && ft_memchr(set, s1[end], set_len) != NULL)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
