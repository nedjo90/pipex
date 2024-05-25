/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:40:59 by nhan              #+#    #+#             */
/*   Updated: 2024/02/06 13:41:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uint_to_str(unsigned int number)
{
	unsigned int		temp;
	char				*number_str;
	int					len;

	temp = number;
	len = 0;
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	if (number == 0)
		len++;
	number_str = (char *) ft_calloc(len + 1, sizeof(char));
	if (!number_str)
		return (NULL);
	if (number == 0)
		number_str[0] = '0';
	while (number > 0)
	{
		number_str[--len] = number % 10 + '0';
		number /= 10;
	}
	return (number_str);
}
