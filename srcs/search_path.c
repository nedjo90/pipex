#include "pipex.h"

char *build_cmd_path(char *path, char *cmd)
{
	int i;
	char **tab_path;
	char *temp_path;
	char *cmd_path;

	i = 0;
	cmd_path = NULL;
	tab_path = ft_split(path, ':');
	while (tab_path[i])
	{
		temp_path = ft_strjoin(tab_path[i], "/");
		cmd_path = ft_strjoin(temp_path, cmd);
		free(temp_path);
		if (access(cmd_path, F_OK) == 0)
		{
			ft_free_tab(tab_path);
			return (cmd_path);
		}
		free(cmd_path);
		i++;
	}
	ft_free_tab(tab_path);
	return NULL;
}

char *get_cmd_path(char *cmd_wo, char **envp)
{
	char **tab_cmd;
	char *cmd_path;
	char *envp_path;

	envp_path = get_envp_paths(envp);
	if (envp_path)
	{
		tab_cmd = ft_split(cmd_wo, ' ');
		cmd_path = build_cmd_path(envp_path, tab_cmd[0]);
		ft_free_tab(tab_cmd);
		return (cmd_path);
	}
	return (NULL);
}

char *get_envp_paths(char **envp)
{
	int i;

	i = 0;
	while (envp[i])
	{
		if (ft_strnstr(envp[i], PATH, 5) && envp[i][6])
			return (envp[i] + ft_strlen(PATH));
		i++;
	}
	return (NULL);
}
