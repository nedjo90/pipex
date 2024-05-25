/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:45:04 by nhan              #+#    #+#             */
/*   Updated: 2023/12/08 12:54:00 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nb_len(int n)
{
	int	i;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		i;
	int		size;
	int		temp;
	int		signe;

	i = 0;
	signe = 1;
	size = ft_nb_len(n);
	nb = ft_calloc(size-- + 1, sizeof(char));
	if (!nb)
		return (NULL);
	if (n < 0)
		signe = -1;
	while (size >= i)
	{
		temp = n % 10;
		if (temp < 0)
			temp *= -1;
		nb[size--] = temp + 48;
		n /= 10;
	}
	if (signe == -1)
		nb[0] = '-';
	return (nb);
}
