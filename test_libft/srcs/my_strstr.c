/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:22 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:36:12 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

char *my_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*haystack)
	{
		if (needle[j] == '\0')
			return ((char *)&haystack[i - my_strlen(needle)]);
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (NULL);
}
