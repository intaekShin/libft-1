/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:22 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/27 15:38:24 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*haystack)
	{
		if (needle[j] == '\0')
			return ((char *)&haystack[i - ft_strlen(needle)]);
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (NULL);
}
