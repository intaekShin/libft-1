/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:37 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:35:26 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

void	*my_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	ptr_dst = dst;
	ptr_src = (char *)src;
	i = 0;
	if (ptr_dst < ptr_src)
	{
		while (i < len)
		{
			*(ptr_dst + i) = *(ptr_src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*(ptr_dst + (len - 1)) = *(ptr_src + (len - 1));
			len--;
		}
	}
	return (dst);
}
