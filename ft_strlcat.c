/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:46 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/27 15:37:47 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t	len;

	len = 0;
	while (*dst)
	{
		dst++;
		len++;
	}
	while (*src && len < (size - 1))
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
