/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:49:39 by nhan              #+#    #+#             */
/*   Updated: 2024/02/07 02:08:23 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long memory)
{
	char	*address;
	int		size_x;
	int		size_a;

	if (memory == 0)
		return (ft_putstr_fd(NULL_PTR, 1));
	address = ft_ulong_to_hex(memory);
	if (!address)
		return (-1);
	size_x = ft_putstr_fd("0x", 1);
	if (size_x < 0)
	{
		free(address);
		return (-1);
	}
	size_a = ft_putstr_fd(address, 1);
	if (size_a < 0)
	{
		free(address);
		return (-1);
	}
	free(address);
	return (size_x + size_a);
}
