/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:03:45 by nhan              #+#    #+#             */
/*   Updated: 2023/12/08 14:07:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	size;

	size = ft_strlen(s1) + 1;
	copy = (char *) malloc(size * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, size);
	return (copy);
}
