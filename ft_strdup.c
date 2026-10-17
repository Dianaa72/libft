/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:18:23 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/13 22:24:22 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	valor;

	valor = ft_strlen(s);

	d = malloc(sizeof(char) * (valor + 1));

	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, valor + 1);
	return (d);
}
int main(void)
{
	printf("%s", ft_strdup("Hola, que tal"));
	return 0;
}