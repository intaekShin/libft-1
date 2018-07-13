/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:31:05 by dhojt             #+#    #+#             */
/*   Updated: 2018/07/13 18:16:22 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not normed
#include "libft.h" //do I need this?
#include <stdio.h> //remove

void				treat_options(char c, unsigned long *options)
{
	long			one;
	one = 1;
	if (c >= 'a' && c <= 'z')
		*options |= (one << (c - 97));
	if (c >= 'A' && c <= 'Z')
		*options |= (one << (c - 39));
	if (c >= '0' && c <= '9')
		*options |= (one << (c + 4));
}

unsigned long				options(char **argv)
{
	unsigned long			options;
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
				treat_options(*str, &options);
				str++;
			}
		}
		argv++;
	}
	return (options);//
}

int					main(int argc, char **argv)
{
	unsigned long			result;
	unsigned long			a;
	if (argc && argv)
	{
		result = options(argv);
		printf("Value %lu\n", result);
	}
	a = 0;
	a |= (1 << 31);
	printf("THIS %lu\n", a);
	return (0);
}
