/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:57:49 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 17:57:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word_str(const char *s, const char *sep)
{
	size_t	count;
	size_t	i;
	size_t	size_sep;
	size_t	size_s;

	count = 0;
	i = 0;
	size_sep = ft_strlen(sep);
	size_s = ft_strlen(s);
	while (i < size_s)
	{
		if (ft_begin_with(s, sep))
			i += size_sep;
		else
		{
			i++;
			count++;
		}
	}
	return (count);
}
