/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:48 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:35:58 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

size_t	my_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
