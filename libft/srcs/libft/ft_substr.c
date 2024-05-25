/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:22:30 by nhan              #+#    #+#             */
/*   Updated: 2023/10/28 12:24:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	n;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	n = (unsigned int)ft_strlen(s);
	if (start >= n)
		len = 0;
	if (n - start < len)
		len = n - start;
	if (len > n)
		len = n;
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && start < n)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
