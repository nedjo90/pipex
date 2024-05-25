/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:53:25 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 13:16:51 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# define NULL_PATH "NULL path is invalid.\n"
# define NO_FILE "Please provided one or more files.\n"
# define NOT_EXIST "Not an existing file.\n"
# define READABLE "Readable.\n"
# define NOT_READABLE "Not readable.\n"
# define WRITABLE "Writable.\n"
# define NOT_WRITABLE "Not writable.\n"
# define EXECABLE "Executable.\n"
# define NOT_EXECABLE "Not executable.\n"
# define PWD "/home/nhan/Desktop/pipex"

# include "../libft/includes/libft.h"

int		ft_is_existing_file(char *path);
int		ft_is_readable_file(char *path);
int		ft_is_writable_file(char *path);
int		ft_is_executable_file(char *path);
void	ft_access(int n, char **path);

#endif //PIPEX_H
