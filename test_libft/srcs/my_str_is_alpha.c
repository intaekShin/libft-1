/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:59 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:35:37 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

int my_str_is_alpha(char *str)
{
	int fail;

	fail = 0;
	while (*str)
	{
		if (my_isalnum(*str) < 2)
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}