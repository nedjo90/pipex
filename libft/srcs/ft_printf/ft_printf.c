/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:10:52 by nhan              #+#    #+#             */
/*   Updated: 2024/03/02 16:05:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_parser(const char *fmt, va_list args)
{
	int	len;
	int	size;

	len = 0;
	while (*fmt)
	{
		size = 0;
		if (ft_conversion_symbol(fmt))
		{
			fmt++;
			size = ft_print_conversion(fmt++, args);
		}
		else
		{
			size += ft_print_char(*(fmt++));
		}
		if (size < 0)
			return (size);
		len += size;
	}
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	int			len;

	if (!fmt)
		return (-1);
	va_start(args, fmt);
	len = ft_print_parser(fmt, args);
	va_end(args);
	return (len);
}
