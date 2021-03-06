/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alphanumeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:46:20 by dhojt             #+#    #+#             */
/*   Updated: 2018/08/12 19:04:06 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alphanumeric(char *str)
{
	while (ft_isalpha(*str) || ft_isdigit(*str))
		str++;
	return (!*str);
}
