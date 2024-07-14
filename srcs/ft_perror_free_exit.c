//
// Created by Necati Han on 13/07/2024.
//

#include "pipex.h"

void ft_perror_free_exit(char *str1, char *str2, t_pipex **pipex)
{
    if (str1)
    {
        write(1, str1, ft_strlen(str1));
        write(1, ": ", 2);
    }
    if (str2)
        write(1, str2, ft_strlen(str2));
    ft_free_pipex(pipex);
    exit(1);
}
