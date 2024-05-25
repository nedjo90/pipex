/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_readable_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:39:40 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 14:39:40 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

int	ft_is_readable_file(char *path)
{
	int	res;

	if (!path)
	{
		write(2, NULL_PATH, ft_strlen(NULL_PATH));
		return (-1);
	}
	res = access(path, R_OK);
	if (res >= 0)
		write(1, READABLE, ft_strlen(READABLE));
	else
		write(2, NOT_READABLE, ft_strlen(NOT_READABLE));
	return (res);
}
