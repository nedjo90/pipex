/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:29:26 by nhan              #+#    #+#             */
/*   Updated: 2024/02/07 01:32:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int number, char c)
{
	char	*hexa;
	int		len;
	int		index;

	hexa = ft_ulong_to_hex((unsigned long) number);
	if (!hexa)
		return (-1);
	if (c == 'X')
	{
		index = 0;
		while (hexa[index])
		{
			hexa[index] = ft_toupper(hexa[index]);
			index++;
		}
	}
	len = ft_putstr_fd(hexa, 1);
	free(hexa);
	return (len);
}
