/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:17:32 by nhan              #+#    #+#             */
/*   Updated: 2023/10/27 01:47:04 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (c > 255)
		c %= 256;
	while (s[i])
	{
		if ((unsigned char)s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
