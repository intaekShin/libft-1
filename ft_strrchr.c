/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:19 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/27 15:38:20 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char	needle;
	size_t	i;

	needle = (char) c;
	i = ft_strlen(s);
	while (i + ft_strlen(s) > 0)
	{
		if (s[i - 1] == needle)
			return ((char *)s + (i - 1));
		i--;
	}
	return (NULL);
}
