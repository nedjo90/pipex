//
// Created by Necati Han on 13/07/2024.
//


# include "pipex.h"

char *ft_get_path_envp(char **envp)
{
    int i;
    int is_found = 0;

    i = 0;
    while (envp[i])
    {
        if (ft_strnstr(envp[i], "PATH=", 5))
        {
            is_found = 1;
            break;
        }
        i++;
    }
    if (!is_found)
        return (NULL);
    return (envp[i] + 5);
}