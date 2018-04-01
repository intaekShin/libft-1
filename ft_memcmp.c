/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:27 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/01 21:14:38 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str_s1;
	unsigned char *str_s2;

	str_s1 = (unsigned char *) s1;
	str_s2 = (unsigned char *) s2;

	if (!n || !str_s1 || !str_s2)
		return (0);
	while(n)
	{
		if (*str_s1 != *str_s2)
			return (*str_s1 - *str_s2);
		str_s1++;
		str_s2++;
		n--;
	}
	return (0);
}
