//
// Created by Necati Han on 14/07/2024.
//

#include "pipex.h"

void ft_proc_pipex(t_pipex **pipex, char **envp, int proc) {
    if (proc == 0) {
        dup2((*pipex)->pipe[1], 1);
        close((*pipex)->pipe[0]);
        dup2((*pipex)->infile, 0);
        execve((*pipex)->first_exec_file_path, (*pipex)->first_cmd_args, envp);
    } else {
        dup2((*pipex)->pipe[0], 0);
        close((*pipex)->pipe[1]);
        dup2((*pipex)->outfile, 1);
        execve((*pipex)->second_exec_file_path, (*pipex)->second_cmd_args, envp);
    }
}
