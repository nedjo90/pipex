#include "pipex.h"

void validate_main_input(int argc, char **argv, char **envp)
{
	char *cmd_path;

	if (argc != 5)
	{
		ft_error("Error", "Wrong number of arguments", 1, 1);
		ft_error("Correct Input", "./pipex <file1> <cmd1> <cmd2> <file2>", 1, 1);
	}
	if (!get_envp_paths(envp))
		ft_error("Error", "Environnement Vairables Path Not Found", 1, 1);
	cmd_path = get_cmd_path(argv[2], envp);
	if (!cmd_path)
		ft_error(argv[2], "Command Not Found", 1, 1);
	else
		free(cmd_path);
	cmd_path = get_cmd_path(argv[3], envp);
	if (!cmd_path)
		ft_error(argv[3], "Command Not Found", 1, 1);
	else
		free(cmd_path);
}
