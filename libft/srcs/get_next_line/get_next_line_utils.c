/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:47 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 13:32:51 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*free_tab_str(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*clean_tab_str(char *tab_str)
{
	char	*ptr;
	char	*new_tab_str;
	int		size;

	ptr = ft_strchr(tab_str, '\n');
	if (!ptr)
	{
		new_tab_str = NULL;
		return (free_tab_str(&tab_str));
	}
	else
		size = (ptr - tab_str) + 1;
	if (!tab_str[size])
		return (free_tab_str(&tab_str));
	new_tab_str = ft_substr(tab_str, size, ft_strlen(tab_str) - size);
	free_tab_str(&tab_str);
	if (!new_tab_str)
		return (NULL);
	return (new_tab_str);
}
