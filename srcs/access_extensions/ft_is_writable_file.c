/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_writable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:43:20 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 14:43:20 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"


int	ft_is_writable_file(char *path)
{
	int	res;

	if (!path)
	{
		write(2, NULL_PATH, ft_strlen(NULL_PATH));
		return (-1);
	}
	res = access(path, W_OK);
	if (res >= 0)
		write(1, WRITABLE, ft_strlen(WRITABLE));
	else
		write(1, NOT_WRITABLE, ft_strlen(NOT_WRITABLE));
	return (res);
}
