/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_access.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:39:09 by nhan              #+#    #+#             */
/*   Updated: 2024/05/26 15:10:40 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

/*
 *int access(const char *pathname, int mode);
 *
 * access() checks whether the program can access the file pathname.
 * The mode specifies the accessibility check(s) to be performed,
 * and is either the value
 * F_OK, or a mask consisting of the bitwise OR of one or more of
 * R_OK, W_OK, and X_OK.
 * F_OK tests for the existence of the file. R_OK, W_OK, and
 * X_OK test whether the file exists and grants read,
 * write, and execute permissions, respectively.
 * On success (all requested permissions granted), zero is returned.
 * On error (at least one bit in mode asked for a permission that
 * is denied
 * , or some other error occurred),
 * -1 is returned, and errno is set appropriately.
 */
void	ft_access(char **path)
{
	while (*path)
	{
		if (ft_is_existing_file(*path) >= 0)
		{
			ft_is_readable_file(*path);
			ft_is_writable_file(*path);
			ft_is_executable_file(*path);
			write(1, "\n", 1);
		}
		path++;
	}
}
