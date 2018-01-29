/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:08 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:35:42 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

char	*my_strcapitalize(char *str)
{
	int i;
	int j;
	char *s;

	i = 0;
	j = -1;
	s = str;
	my_strlowcase(str);
	while (s[i] != '\0')
	{
		if (j == -1 || my_isalnum(s[j]) == 0)
		{
			if (my_isalnum(s[i]) == 3)
				s[i] -= 32;
		}
		i++;
		j++;
	}
	return (str);
}

