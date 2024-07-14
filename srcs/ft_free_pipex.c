//
// Created by Necati Han on 14/07/2024.
//

#include "pipex.h"

void ft_free_pipex(t_pipex **pipex) {
    if((*pipex)->infile != -1)
        close((*pipex)->infile);
    if((*pipex)->outfile != -1)
        close((*pipex)->outfile);
    if ((*pipex)->first_exec_file_path)
        free((*pipex)->first_exec_file_path);
    if ((*pipex)->second_exec_file_path)
        free((*pipex)->second_exec_file_path);
    if ((*pipex)->first_cmd_args)
        ft_free_tab((*pipex)->first_cmd_args);
    if ((*pipex)->second_cmd_args)
        ft_free_tab((*pipex)->second_cmd_args);
    free(*pipex);
}