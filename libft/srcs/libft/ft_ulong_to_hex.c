/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulong_to_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:32:03 by nhan              #+#    #+#             */
/*   Updated: 2024/02/06 12:32:38 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ulong_len(unsigned long number)
{
	int	size;

	if (number == 0)
		return (1);
	size = 0;
	while (number != 0)
	{
		number /= 16;
		size++;
	}
	return (size);
}

char	*ft_ulong_to_hex(unsigned long number)
{
	char	*hex_digit;
	char	*hex_number;
	int		len;

	hex_digit = ft_strdup("0123456789abcdef");
	if (!hex_digit)
		return (NULL);
	len = ft_ulong_len(number);
	hex_number = (char *) ft_calloc(len + 1, sizeof(char));
	if (!hex_number)
	{
		free(hex_digit);
		return (NULL);
	}
	len--;
	if (number == 0)
		hex_number[len] = '0';
	while (number != 0)
	{
		hex_number[len] = hex_digit[number % 16];
		number /= 16;
		len--;
	}
	free(hex_digit);
	return (hex_number);
}
