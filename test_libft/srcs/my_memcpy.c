/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:33 by dhojt             #+#    #+#             */
/*   Updated: 2018/02/01 19:29:26 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

void 	*my_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	ptr_dst = dst;
	ptr_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*(ptr_dst + i) = *(ptr_src + i);
		i++;
	}
	return (dst);
}
