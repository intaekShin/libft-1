/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:40 by dhojt             #+#    #+#             */
/*   Updated: 2018/02/01 19:30:48 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

int		my_strequ(char const *s1, char const *s2)
{
	return ((my_strcmp(s1, s2)) ? 0 : 1);
}
