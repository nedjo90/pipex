/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:53:25 by nhan              #+#    #+#             */
/*   Updated: 2025/02/03 13:36:35 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
#define PIPEX_H

#define NULL_PATH "NULL path is invalid"
#define NOT_EXIST "No such file or directory"

#include "libft.h"
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define N_ARGC 5
#define PATH "PATH="
#define ERR_ARGC_LEN "Wrong number of arguments.\n"

// error handling

void ft_error(char *header, char *body, int fd, int is_exit_with_failure);

void ft_perror(void);

// search path

char *get_cmd_path(char *cmd_wo, char **envp);
char *build_cmd_path(char *path, char *cmd);
char *get_envp_paths(char **envp);

// utils
void validate_main_input(int argc, char **argv, char **envp);

// execute commande
int ft_execute_cmd(char *cmd_wo, char **envp);

// process

void ft_parent_process(int *fd, char **argv, char **envp);
void ft_child_process(int *fd, char **argv, char **envp);

#endif // PIPEX_H
