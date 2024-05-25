/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:29:57 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 13:53:25 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# define NULL_PTR "(null)"
# ifdef _APPLE_
#  define NULL_PTR "0x0"
# endif

int	ft_printf(const char *fmt, ...);
int	ft_conversion_symbol(const char *haystack);
int	ft_print_char(int c);
int	ft_print_conversion(const char *fmt, va_list args);
int	ft_print_integer(int number);
int	ft_print_percent(char c);
int	ft_print_str(char *str);
int	ft_print_pointer(unsigned long memory_address);
int	ft_print_unsigned(unsigned int number);
int	ft_print_hexa(unsigned int number, char c);

#endif
