#include "pipex.h"

void ft_perror(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}

void ft_error(char *header, char *body, int fd, int is_exit_with_failure)
{
	ft_putstr_fd(header, fd);
	if (header && body && ft_strlen(header) > 0 && ft_strlen(body) > 0)
		ft_putstr_fd(": ", fd);
	ft_putstr_fd(body, fd);
	ft_putstr_fd("\n", fd);
	if (is_exit_with_failure != 0)
		exit(EXIT_FAILURE);
}
