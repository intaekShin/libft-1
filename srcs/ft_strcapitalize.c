/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:08 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/03 13:48:22 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	ft_strlowcase(str);
	while (*s)
	{
		if ((s == str || !ft_isalnum(*(s - 1))) && (*s >= 'a' && *s <= 'z'))
			*s -= 32;
		s++;
	}
	return (str);
}
