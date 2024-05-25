/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:35:00 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 12:41:23 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_substring(char *s, char *sep)
{
	size_t	size;

	if (!s)
		return (0);
	if (!sep)
		return (ft_strlen(s));
	size = 0;
	while (*s && !ft_begin_with(s, sep))
	{
		s++;
		size++;
	}
	return (size);
}

static size_t	ft_copy_to_tab(char **tab, char *s, char *sep)
{
	size_t	i;
	size_t	sep_size;
	size_t	s_size;

	if (!*s)
	{
		*tab = (char *) malloc(1 * sizeof(char));
		if (!*tab)
			return (0);
		**tab = '\0';
		return (1);
	}
	i = 0;
	sep_size = ft_strlen(sep);
	while (ft_begin_with(&s[i], sep))
		i += sep_size;
	if (s[i] && !ft_begin_with(&s[i], sep))
	{
		s_size = ft_size_substring(&s[i], sep);
		*tab = malloc((s_size + 1) * sizeof(char));
		if (!*tab)
			return (0);
		i += s_size;
	}
	return (i);
}

char	**ft_split_str(char *s, char *sep)
{
	char		**tab;
	size_t		i;
	size_t		j;
	size_t		k;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tab = malloc((ft_count_word_str(s, sep) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		k = ft_copy_to_tab((tab + j * sizeof(char *)), s + i, sep);
		if (!k)
			return (ft_free_tab(tab));
		i += k;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
