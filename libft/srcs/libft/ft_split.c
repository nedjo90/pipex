/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:35:00 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 21:09:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		**tab_str;

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
