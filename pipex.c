/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:16:41 by nhan              #+#    #+#             */
/*   Updated: 2024/05/24 19:16:41 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_display_pipex(t_pipex pipex) {
    printf("pipex.infile: %d\n", pipex.infile);
    printf("pipex.outfile: %d\n", pipex.outfile);
    printf("pipex.first_exec_file_path: %s\n", pipex.first_exec_file_path);
    printf("pipex.second_exec_file_path: %s\n", pipex.second_exec_file_path);
    printf("pipex.env_path: %s\n", pipex.env_path);
}



int main(int argc, char **argv, char **envp) {
    t_pipex *pipex;

    pipex = (t_pipex *) malloc(sizeof(t_pipex));
    if (!pipex)
        exit(1);
    ft_initialize_pipex(&pipex);
    ft_configure_pipex(argc, argv, envp, &pipex);
    //ft_display_pipex(*pipex);
    pipex->pid1 = fork();
    if (pipex->pid1 == 0)
        ft_proc_pipex(&pipex, envp, 0);
    pipex->pid2 = fork();
    if (pipex->pid2 == 0)
        ft_proc_pipex(&pipex, envp, 1);
    close(pipex->pipe[0]);
    close(pipex->pipe[1]);
    ft_free_pipex(&pipex);
    return (0);
}
