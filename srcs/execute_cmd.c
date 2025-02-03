#include "pipex.h"

int ft_execute_cmd(char *cmd_wo, char **envp)
{
	char **tab_cmd;
	char *cmd_path;
	int result;

	cmd_path = get_cmd_path(cmd_wo, envp);
	tab_cmd = ft_split(cmd_wo, ' ');
	result = execve(cmd_path, tab_cmd, envp);
	ft_free_tab(tab_cmd);
	free(cmd_path);
	return (result);
}
