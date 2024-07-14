//
// Created by Necati Han on 14/07/2024.
//

#include "pipex.h"


static void ft_configure_paths(char **argv, char **envp, t_pipex **pipex) {
    (*pipex)->env_path = ft_get_path_envp(envp);
    if (!(*pipex)->env_path)
        ft_perror_free_exit(NULL, ERR_PATH, pipex);
    (*pipex)->first_exec_file_path = ft_get_file_path(argv[2], (*pipex)->env_path);
    if (!(*pipex)->first_exec_file_path)
        ft_perror_free_exit(argv[2], ERR_CMD, pipex);
    (*pipex)->first_cmd_args = ft_split(argv[2], ' ');
    if (!(*pipex)->first_cmd_args)
        ft_perror_free_exit(argv[2], ERR_INVALID_CMD, pipex);
    (*pipex)->second_cmd_args = ft_split(argv[3], ' ');
    if (!(*pipex)->second_cmd_args)
        ft_perror_free_exit(argv[3], ERR_INVALID_CMD, pipex);
    (*pipex)->second_exec_file_path = ft_get_file_path(argv[3], (*pipex)->env_path);
    if (!(*pipex)->second_exec_file_path)
        ft_perror_free_exit(argv[3], ERR_CMD, pipex);
}

void ft_configure_pipex(int argc, char **argv, char **envp, t_pipex **pipex) {
    if (argc != N_ARGC)
        ft_perror_free_exit(NULL, ERR_ARGS, pipex);
    ft_configure_paths(argv, envp, pipex);
    (*pipex)->infile = open(argv[1], O_RDONLY);
    if ((*pipex)->infile < 0)
        ft_perror_free_exit(argv[1], ERR_OPEN_FILE, pipex);
    (*pipex)->outfile = open(argv[4], O_TRUNC | O_CREAT | O_RDWR, 0000777);
    if ((*pipex)->outfile < 0)
        ft_perror_free_exit(argv[4], ERR_OPEN_FILE, pipex);
    if (pipe((*pipex)->pipe) < 0)
        ft_perror_free_exit(NULL, ERR_PIPE, pipex);
}