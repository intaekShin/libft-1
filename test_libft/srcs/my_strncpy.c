/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:00 by dhojt             #+#    #+#             */
/*   Updated: 2018/02/01 19:31:28 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

char *my_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
