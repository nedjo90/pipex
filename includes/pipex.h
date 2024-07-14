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

# define N_ARGC 5
# define ERR_ARGS "Wrong number of arguments.\n"
# define ERR_INVALID_CMD "Invalid command.\n"
# define ERR_CMD "Command not found.\n"
# define ERR_PATH "PATH not found.\n"
# define ERR_ACCESS "Access error to the command.\n"
# define ERR_EXEC "Something go wrong during execution.\n"
# define ERR_OPEN_FILE "Infile open error.\n"
# define ERR_PIPE "Pipe failed.\n"


typedef struct s_pipex {
    pid_t pid1;
    pid_t pid2;
    int pipe[2];
    int infile;
    int outfile;
    char *env_path;
    char *first_exec_file_path;
    char **first_cmd_args;
    char *second_exec_file_path;
    char **second_cmd_args;
} t_pipex;

void ft_perror_free_exit(char *str1, char *str2, t_pipex **pipex);

char *ft_get_path_envp(char **envp);

char *ft_get_file_path(char *cmd, char *path);

void ft_free_pipex(t_pipex **pipex);

void ft_configure_pipex(int argc, char **argv, char **envp, t_pipex **pipex);

void ft_initialize_pipex(t_pipex **pipex);

void ft_proc_pipex(t_pipex **pipex, char **envp, int proc);

char *ft_get_command_head(char *cmd);



#endif //PIPEX_H
