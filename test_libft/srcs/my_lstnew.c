/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:11 by dhojt             #+#    #+#             */
/*   Updated: 2018/02/01 19:29:09 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

t_list	*my_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = (t_list *) malloc(sizeof(*lst))))
		return (NULL);
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		if(!(lst->content = my_memalloc(content_size)))
			return (NULL);
		my_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
