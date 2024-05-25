/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjointable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:22:48 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 16:33:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_tab(char **tab, char *sep)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (tab[i])
	{
		size += ft_strlen(tab[i]);
		if (tab[i + 1] != NULL)
			size += ft_strlen(sep);
		i++;
	}
	return (size);
}

static void	append_sep(char *join, char *sep)
{
	size_t	j;

	j = 0;
	while (sep[j])
	{
		*join = sep[j];
		join++;
		j++;
	}
}

static void	copy_tab(char **tab, char *sep, char *join)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			*join = tab[i][j];
			join++;
			j++;
		}
		if (tab[i + 1])
		{
			append_sep(join, sep);
			join += ft_strlen(sep);
		}
		i++;
	}
	*join = '\0';
}

char	*ft_strjointab(char **tab, char *sep)
{
	char	*join;

	if (!tab || !sep)
		return (NULL);
	join = malloc((size_tab(tab, sep) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	copy_tab(tab, sep, join);
	return (join);
}
