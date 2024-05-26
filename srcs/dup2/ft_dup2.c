/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:50:25 by nhan              #+#    #+#             */
/*   Updated: 2024/05/26 15:13:41 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_dup2(char *oldfd, int newfd)
{
	int		res;
	int		fd;

	fd = open(oldfd, O_WRONLY, 0644);
	if (fd < 0)
	{
		perror(oldfd);
		return (fd);
	}
	res = dup2(fd, newfd);
	close(fd);
	if (res < 0)
	{
		perror("dup2");
	}
	return (res);
}
