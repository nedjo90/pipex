/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:58:29 by nhan              #+#    #+#             */
/*   Updated: 2024/05/26 15:58:29 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_execve(const char *pathname, char *const argv[], char *const envp[])
{
	int	res;

	res = execve(pathname, argv, envp);
	if (res == -1)
		perror(pathname);
	return (res);
}