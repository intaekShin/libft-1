/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:45 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:35:57 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	char *join_str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	join_str = my_strnew(my_strlen(s1) + my_strlen(s2));
	if (!join_str)
		return (NULL);
	while (j < my_strlen(s1))
	{
		join_str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j < my_strlen(s2))
	{
		join_str[i] = s2[j];
		i++;
		j++;
	}
	return (join_str);
}
