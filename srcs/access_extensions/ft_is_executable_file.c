/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_executable_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:54:21 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 14:54:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

int	ft_is_executable_file(char *path)
{
	int	res;

	if (!path)
	{
		write(2, NULL_PATH, ft_strlen(NULL_PATH));
		return (-1);
	}
	res = access(path, X_OK);
	if (res >= 0)
		write(1, EXECABLE, ft_strlen(EXECABLE));
	else
		write(1, NOT_EXECABLE, ft_strlen(NOT_EXECABLE));
	return (res);
}