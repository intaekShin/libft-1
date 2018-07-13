/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:31:05 by dhojt             #+#    #+#             */
/*   Updated: 2018/07/13 16:51:08 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not normed
#include "libft.h" //do I need this?
#include <stdio.h> //remove

int					options(char **argv)
{
	int				options;
	char			*str;

	options = 0;
	argv++;
	while (*argv)
	{
		str = *argv;
		if (*str == '-' && ft_str_is_alphanumeric(str + 1))
		{
			str++;
			while (*str)
			{
				printf("Char: %c\n", *str);
				str++;
			}
		}
		argv++;
	}
	return (0);//
}

int					main(int argc, char **argv)
{
	if (argc && argv)
		options(argv);
	return (0);
}
