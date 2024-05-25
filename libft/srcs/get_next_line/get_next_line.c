/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:31:52 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 13:34:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h" 

char	*print_line(char *tab_str)
{
	char	*str;
	char	*ptr;
	int		size;

	ptr = ft_strchr(tab_str, '\n');
	size = (ptr - tab_str) + 1;
	str = ft_substr(tab_str, 0, size);
	if (!str)
		return (NULL);
	return (str);
}

char	*read_line(int fd, char *tab_str)
{
	char	*buffer;
	int		bytes;

	bytes = 1;
	buffer = (char *) malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free_tab_str(&tab_str));
	buffer[0] = '\0';
	while (bytes > 0 && !ft_strchr(buffer, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes > 0)
		{
			buffer[bytes] = '\0';
			tab_str = ft_strjoin(tab_str, buffer);
		}
	}
	free(buffer);
	if (bytes == -1)
		return (free_tab_str(&tab_str));
	return (tab_str);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*tab_str[2048];

	if (fd < 0)
		return (NULL);
	if ((tab_str[fd] && !ft_strchr(tab_str[fd], '\n')) || !tab_str[fd])
		tab_str[fd] = read_line(fd, tab_str[fd]);
	if (!tab_str[fd])
		return (NULL);
	str = print_line(tab_str[fd]);
	if (!str)
		return (free_tab_str(&tab_str[fd]));
	tab_str[fd] = clean_tab_str(tab_str[fd]);
	return (str);
}
