/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:04:30 by nhan              #+#    #+#             */
/*   Updated: 2023/12/08 13:04:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_temp;
	t_list	*new_start;
	void	*temp_content;

	if (!lst || !f || !del)
		return (NULL);
	new_start = NULL;
	while (lst)
	{
		temp_content = (*f)(lst->content);
		new_temp = ft_lstnew(temp_content);
		if (!new_temp)
		{
			del(temp_content);
			ft_lstclear(&new_start, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_start, new_temp);
		lst = lst->next;
	}
	return (new_start);
}
