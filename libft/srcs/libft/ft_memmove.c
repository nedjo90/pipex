/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:01:53 by nhan              #+#    #+#             */
/*   Updated: 2023/12/08 13:38:07 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst == src)
		return (dst);
	else
	{
		while (len--)
			((unsigned char *)dst)[len] \
			= ((unsigned const char *)src)[len];
	}
	return (dst);
}
