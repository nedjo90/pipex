/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_existing_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:34:49 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 14:35:36 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_is_existing_file(char *path)
{
	int	res;

	write(1, path, ft_strlen(path));
	write(1, ": ", 2);
	if (path == NULL)
	{
		write(2, NULL_PATH, ft_strlen(NULL_PATH));
		write(2, "\n", 1);
		return (-1);
	}
	res = access(path, F_OK);
	if (res == -1)
	{
		write(2, NOT_EXIST, ft_strlen(NOT_EXIST));
		write(2, "\n", 1);
	}
	return (res);
}
