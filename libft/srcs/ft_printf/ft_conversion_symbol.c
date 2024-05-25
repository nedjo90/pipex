/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_symbol.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:37:13 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 11:07:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion_symbol(const char *haystack)
{
	if (!haystack || *haystack != '%')
		return (0);
	haystack++;
	if (*haystack == 'c'\
	|| *haystack == 's'\
	|| *haystack == 'p'\
	|| *haystack == 'd'\
	|| *haystack == 'i'\
	|| *haystack == 'u'\
	|| *haystack == 'U'\
	|| *haystack == 'x'\
	|| *haystack == 'X'\
	|| *haystack == '%')
		return (1);
	return (0);
}
