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

static char	**ft_free_tab(char **tab)
{
	int	i;

	if (!tab)
		return (NULL);
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	tracker;

	i = 0;
	count = 0;
	tracker = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] == c)
			tracker = 0;
		else if (s[i] != c && tracker == 0)
		{
			count++;
			tracker = 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**tab_str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tab_str = (char **) malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!tab_str)
		return (0);
	while (j < ft_count_word(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		k = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		tab_str[j++] = ft_substr(s, k, i - k);
		if (!tab_str[j - 1])
			return (ft_free_tab(tab_str));
	}
	tab_str[j] = NULL;
	return (tab_str);
}
