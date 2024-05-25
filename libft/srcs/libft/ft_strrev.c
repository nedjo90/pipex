/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:12:16 by nhan              #+#    #+#             */
/*   Updated: 2024/02/06 14:19:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *input)
{
	char	*output;
	int		len;
	int		index;

	len = ft_strlen(input);
	output = (char *) ft_calloc(len + 1, sizeof(char));
	if (!output)
		return (NULL);
	len--;
	index = 0;
	while (input[index])
	{
		output[index] = input[len];
		index++;
		len--;
	}
	output[index] = '\0';
	return (output);
}
