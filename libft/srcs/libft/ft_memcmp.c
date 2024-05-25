/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:14:03 by nhan              #+#    #+#             */
/*   Updated: 2023/10/24 13:39:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && n > 0)
	{
		if (*(unsigned char *)(s1 + i) != \
			*(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) \
			- *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
