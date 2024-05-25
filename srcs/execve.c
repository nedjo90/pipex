/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:28:44 by nhan              #+#    #+#             */
/*   Updated: 2024/05/25 13:30:36 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	main(int ac, char **av, char **envp)
{
	const char	*filename = "/usr/bin/ls";
	char const	*argv[] = {"ls", "-la", NULL};
	(void) ac;

	execve(filename, argv, envp);
}
