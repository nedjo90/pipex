/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:45:28 by nhan              #+#    #+#             */
/*   Updated: 2024/02/07 01:29:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	*number_str;
	int		len;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	len = 0;
	if (n < 0)
	{
		len = ft_putchar_fd('-', fd);
		n *= -1;
		if (len < 0)
			return (len);
	}
	number_str = ft_uint_to_str(n);
	if (!number_str)
		return (-1);
	len += ft_putstr_fd(number_str, 1);
	free(number_str);
	return (len);
}
