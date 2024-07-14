//
// Created by Necati Han on 14/07/2024.
//

#include "pipex.h"

void ft_initialize_pipex(t_pipex **pipex)
{
    (*pipex)->infile = -1;
    (*pipex)->outfile = -1;
    (*pipex)->env_path = NULL;
    (*pipex)->first_exec_file_path = NULL;
    (*pipex)->first_cmd_args = NULL;
    (*pipex)->second_exec_file_path = NULL;
    (*pipex)->second_cmd_args = NULL;
}
