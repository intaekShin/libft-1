/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:07 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/02 00:45:39 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	int fail;

	fail = 0;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}
