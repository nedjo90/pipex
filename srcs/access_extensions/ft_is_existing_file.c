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

#include "../../includes/pipex.h"

int	ft_is_existing_file(char *path)
{
	int	res;

	if (!path)
	{
		write(2, NULL_PATH, ft_strlen(NULL_PATH));
		return (-1);
	}
	res = access(path, F_OK);
	if (res >= 0)
	{
		write(1, path, ft_strlen(path));
		write(1, "\n", 1);
	}
	else
		write(1, NOT_EXIST, ft_strlen(NOT_EXIST));
	return (res);
}
