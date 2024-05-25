/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:37:51 by nhan              #+#    #+#             */
/*   Updated: 2024/02/07 01:31:50 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int number)
{
	char	*output;
	int		len;

	output = ft_uint_to_str(number);
	if (!output)
		return (-1);
	len = ft_putstr_fd(output, 1);
	free(output);
	return (len);
}
