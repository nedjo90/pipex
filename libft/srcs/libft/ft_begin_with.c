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

int	ft_begin_with(const char *s, const char *p)
{
	size_t	i;
	size_t	j;

	if (!s || !p)
		return (0);
	i = 0;
	j = 0;
	while (s[i] && p[j])
	{
		if (s[i] != p[j])
			return (0);
		j++;
		i++;
	}
	if (!p[j])
		return (1);
	return (0);
}
