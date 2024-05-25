/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:39:09 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 13:10:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

#define NO_FILE "Please provided one or more files.\n"
#define NOT_EXIST "Not an existing file.\n"
#define READABLE "Readable.\n"
#define NOT_READABLE "Not readable.\n"
#define WRITABLE "Writable.\n"
#define NOT_WRITABLE "Not writable.\n"
#define EXECABLE "Executable.\n"
#define NOT_EXECABLE "Not executable.\n"

/*
 *
 */

void	read_right(char *path)
{
	if (access(path, R_OK) >= 0)
		write(1, READABLE, ft_strlen(READABLE));
	else
		write(1, NOT_READABLE, ft_strlen(NOT_READABLE));
}

void	write_right(char *path)
{
	if (access(path, W_OK) >= 0)
		write(1, WRITABLE, ft_strlen(WRITABLE));
	else
		write(1, NOT_WRITABLE, ft_strlen(NOT_WRITABLE));
}

void	exec_right(char *path)
{
	if (access(path, X_OK) >= 0)
		write(1, EXECABLE, ft_strlen(EXECABLE));
	else
		write(1, NOT_EXECABLE, ft_strlen(NOT_EXECABLE));
}

void	ft_display_right(int n, char **path)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (access(path[i], F_OK) >= 0)
		{
			write(1, path[i], ft_strlen(path[i]));
			write(1, ":\n\t", 3);
			read_right(path[i]);
			write(1, "\t", 1);
			write_right(path[i]);
			write(1, "\t", 1);
			exec_right(path[i]);
		}
		else
		{
			write(1, path[i], ft_strlen(path[i]));
			write(1, NOT_EXIST, ft_strlen(NOT_EXIST));
		}
		i++;
	}
}
