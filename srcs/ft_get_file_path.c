//
// Created by Necati Han on 13/07/2024.
//

#include "pipex.h"



static char *ft_test_paths(char *head, char **path_tab)
{
    char *tested_path;
    char *tmp;
    int i;

    i = 0;
    while (path_tab[i]) {
        tmp = ft_strjoin(path_tab[i], "/");
        if (!tmp)
            return (NULL);
        tested_path = ft_strjoin(tmp, head);
        if (!tested_path) {
            free(tmp);
            return (NULL);
        }
        free(tmp);
        if (access(tested_path, 0) == 0)
            return (tested_path);
        free(tested_path);
        tested_path = NULL;
        i++;
    }
    return (tested_path);
}

char *ft_get_file_path(char *cmd, char *path) {
    char **path_tab;
    char *head;
    char *tested_path;

    path_tab = ft_split(path, ':');
    if (!path_tab)
        return (NULL);
    head = ft_get_command_head(cmd);
    if (!head) {
        ft_free_tab(path_tab);
        return (NULL);
    }
    tested_path = ft_test_paths(head, path_tab);
    free(head);
    ft_free_tab(path_tab);
    return (tested_path);
}