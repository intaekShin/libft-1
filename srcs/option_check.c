/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 09:39:06 by dhojt             #+#    #+#             */
/*   Updated: 2019/01/02 09:42:30 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool		option_check(unsigned long options, char c)
{
	unsigned long	mask;

	mask = 1;
	if (c >= 'a' && c <= 'z')
		c -= 97;
	else if (c >= 'A' && c <= 'Z')
		c -= 39;
	else if (c >= '0' && c <= '9')
		c += 4;
	else
		return (false);
	mask <<= c;
	return ((options & mask) == mask);
}
