/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin_with.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:02:32 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 18:02:32 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_end_with(const char *s, const char *p)
{
	size_t	i;
	size_t	j;

	if (!s || !p)
		return (0);
	i = ft_strlen(s);
	j = ft_strlen(p);
	while (i - 1 > 0 && j - 1 > 0)
	{
		if (s[i - 1] != p[j - 1])
			return (0);
		j--;
		i--;
	}
	if (j - 1 == 0)
		return (1);
	return (0);
}
