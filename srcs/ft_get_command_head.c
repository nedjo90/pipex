//
// Created by Necati Han on 14/07/2024.
//

#include "pipex.h"

char *ft_get_command_head(char *cmd) {
    int i;
    char *head;

    i = 0;
    while (cmd[i] != ' ' && cmd[i])
        i++;
    head = malloc(sizeof(char) * (i + 1));
    if (!head)
        return (NULL);
    ft_strlcpy(head, cmd, i + 1);
    return (head);
}