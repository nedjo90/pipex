/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:16:41 by nhan              #+#    #+#             */
/*   Updated: 2025/02/03 17:58:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **envp)
{
    int fd[2];
    pid_t pid;

    validate_main_input(argc, argv, envp);

    if (pipe(fd) == -1)
        ft_error("Error", "", 2, 1);
    pid = fork();
    if (pid == -1)
        ft_error("Error", "", 2, 1);
    if (pid == 0)
        ft_child_process(fd, argv, envp);
    waitpid(pid, NULL, 0);
    ft_parent_process(fd, argv, envp);
    return (EXIT_SUCCESS);
}
