#include "pipex.h"

void ft_child_process(int *fd, char **argv, char **envp)
{
	int fd_in;

	close(fd[0]);
	if (dup2(fd[1], STDOUT_FILENO) == -1)
	{
		close(fd[1]);
		ft_error("dup2 failed", "", 2, 1);
	}
	close(fd[1]);
	fd_in = open(argv[1], O_RDONLY, 0777);
	if (fd_in == -1)
		ft_error("Error", "", 2, 1);
	if (dup2(fd_in, STDIN_FILENO) == -1)
	{
		if(fd_in != -1)
			close(fd_in);
		ft_error("dup2 failed", "", 2, 1);
	}
	close(fd_in);
	ft_execute_cmd(argv[2], envp);
}

void ft_parent_process(int *fd, char **argv, char **envp)
{
	int fd_out;
	
	close(fd[1]);
	if (dup2(fd[0], STDIN_FILENO) == -1)
	{
		close(fd[0]);
		ft_error("dup2 failed", "", 2, 1);
	}
	close(fd[0]);
	fd_out = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd_out == -1 || dup2(fd_out, STDOUT_FILENO) == -1)
	{
		if(fd_out != -1)
			close(fd_out);
		ft_error("dup2 failed", "", 2, 1);
	}
	close(fd_out);
	ft_execute_cmd(argv[3], envp);
}
