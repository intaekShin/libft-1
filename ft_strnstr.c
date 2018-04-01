/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:17 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/01 19:45:45 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);

	while(*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
	/*
	size_t j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i == len)
	{
		if (needle[j] == '\0')
			return ((char *)&haystack[i - ft_strlen(needle)]);
		if (haystack[i] == needle[j])
			j++;
		else
		{
			j = 0;
			i--;
		}
		i++;
	}
	return (0);
}*/
