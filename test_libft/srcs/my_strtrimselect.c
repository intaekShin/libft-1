/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strtrimselect.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:29 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:36:15 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

char	*my_strtrimselect(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = my_strlen(s) - 1;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[j] == c)
		j--;
	//if (i == 0 && j == my_strlen(s) - 1)
		//return ((char *)s);
	str = my_strnew((j + 1) - i);
	while (i <= j)
	{
		str[k] = s [i];
		i++;
		k++;
	}
	return (str);
}
