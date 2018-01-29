/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:38:20 by dhojt             #+#    #+#             */
/*   Updated: 2018/01/28 09:36:11 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

static void	my_newarraydelimstr(char **array, char const *s, char c)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (*s)
	{
		if (*s != c)
			j++;
		if (*s == c || *(s + 1) == '\0')
		{
			array[k] = my_strnew(j);
			k++;
			j = 0;
		}
		s++;
	}
}

static char	**my_arraydelim(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	if(!(array = (char **) malloc((j + 1) * sizeof(char *))))
		return (NULL);
	my_newarraydelimstr(array, s, c);
	return (array);
}

static void	my_fillarraydelim(char **array, const char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			array[j][k] = s[i];
			k++;
		}
		if (s[i] == c)
		{
			j++;
			k = 0;
		}
		i++;
	}
}

char		**my_strsplit(char const *s, char c)
{
	char	*one;
	char	*two;
	char	**three;

	one = my_strtrimselect(s, c);
	two = my_removeselect(one, c);
	three = my_arraydelim(two, c);
	my_fillarraydelim(three, two, c);
	return (three);
}
