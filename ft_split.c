/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:55:58 by marvin            #+#    #+#             */
/*   Updated: 2026/10/15 16:55:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	*ft_free(char **str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_splitstr(char **new_str, char *s, char c, size_t nbr_words)
{
	size_t	i;
	size_t	j;
	char	*start;

	i = 0;
	j = 0;
	while (i < nbr_words)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		start = &s[j];
		while (s[j] != '\0' && s[j] != c)
			j++;
		new_str[i] = ft_substr(start, 0, &s[j] - start);
		if (new_str[i] == NULL)
			return (ft_free(new_str, i));
		i++;
	}
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		nbr_words;

	nbr_words = ft_count_words(s, c);
	new_str = ft_calloc(nbr_words + 1, sizeof(char *));
	if (new_str == NULL)
		return (NULL);
	new_str = ft_splitstr(new_str, (char *)s, c, nbr_words);
	return (new_str);
}