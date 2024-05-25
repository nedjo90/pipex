/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:45:22 by nhan              #+#    #+#             */
/*   Updated: 2023/10/27 08:53:40 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long long	i;
	unsigned long long	j;

	if ((unsigned long long)ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	i = 0;
	while (i < (unsigned long long)len)
	{
		if (*needle == haystack[i])
		{
			j = 0;
			while (j + i < (unsigned long long)len \
				&& needle[j] == haystack[j + i])
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
