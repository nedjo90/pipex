/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:53:25 by nhan              #+#    #+#             */
/*   Updated: 2024/05/26 14:45:56 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# define NULL_PATH "NULL path is invalid"
# define NOT_EXIST "No such file or directory"

# include "libft.h"
# include <errno.h>
# include <string.h>
# include <unistd.h>

int		ft_is_existing_file(char *path);
int		ft_is_readable_file(char *path);
int		ft_is_writable_file(char *path);
int		ft_is_executable_file(char *path);
int		ft_dup2(char *oldfd, int newfd);
int		ft_execve(const char *pathname, char *const argv[], char *const envp[]);
void	ft_access(char **path);

#endif //PIPEX_H
