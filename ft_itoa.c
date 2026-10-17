/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:57:23 by marvin            #+#    #+#             */
/*   Updated: 2026/10/15 16:57:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_fillstr(char	*src, int n, int len)
{
	long	num;

	num = n;
	src[len] = '\0';
	if (num == 0)
		src[0] = '0';
	if (num < 0)
	{
		src[0] = '-';
		num = -num;
	}
	while (num)
	{
		src[--len] = (num % 10) + '0';
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	ft_fillstr(str, n, len);
	return (str);
}