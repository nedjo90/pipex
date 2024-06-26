/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:19:03 by nhan              #+#    #+#             */
/*   Updated: 2024/05/26 16:29:16 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_display_tab(char **tab)
{
	if (!tab)
		return ;
	while (*tab)
	{
		printf("%s\n", *tab);
		tab++;
	}
}
