/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lstreturn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:14 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:35:18 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

t_list	*my_lstreturn(t_list *lst, size_t n)
{
	size_t	i;
	t_list	*tmp;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (i < n)
	{
		tmp = ptr->next;
		ptr = tmp;
		i++;
	}
	return (ptr);
}
