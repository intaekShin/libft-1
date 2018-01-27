/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:01 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/27 15:37:02 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_str_is_lowercase(char *str)
{
	int fail;

	fail = 0;
	while (*str)
	{
		if (ft_isalnum(*str) != 3)
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}
