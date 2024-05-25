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

size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	tracker;

	i = 0;
	count = 0;
	tracker = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
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
