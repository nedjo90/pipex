/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:33:05 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 10:52:35 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conversion(const char *fmt, va_list args)
{
	if (*fmt == '%')
		return (ft_print_percent(*fmt));
	else if (*fmt == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*fmt == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (*fmt == 'i' || *fmt == 'd')
		return (ft_print_integer(va_arg(args, int)));
	else if (*fmt == 'p')
		return (ft_print_pointer(va_arg(args, unsigned long)));
	else if (*fmt == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (*fmt == 'x' || *fmt == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), *fmt));
	return (-1);
}
