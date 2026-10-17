/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:12:44 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/10 19:35:04 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*(d < c) El destino(queremos copi BC) empieza antes que el origen(ABC)*/
void	*memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	size_t				end;
	unsigned char		*d;
	const unsigned char	*s;


	d = (unsigned char *)dest;
	s = (const unsigned char *)src;


	if (dest == s || n == 0)
		return (d);

	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	return (d);
}
// src[end] //end-- // src[src_len - 1]
