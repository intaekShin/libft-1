/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 19:25:15 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/22 17:55:11 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 'A' or 'a' should be passed to c to indicate uper or lower case
*/

static char			ft_calculate_char(int mod, char c)
{
	char			return_char;

	if (mod > 36)
		return (0);
	return_char = '0';
	while (mod--)
	{
		return_char++;
		if (return_char == ':')
			return_char = c;
	}
	return (return_char);
}

static int			ft_get_len(uintmax_t num, uintmax_t base)
{
	int				len;

	len = 0;
	while (num)
	{
		num /= base;
		len++;
	}
	return (len);
}

void				ft_putnbr_base(uintmax_t num, uintmax_t base, char c)
{
	uintmax_t		sum;
	int				mod;
	int				len;
	char			str[30];

	if (!num)
	{
		ft_putchar('0');
		return ;
	}
	sum = num;
	len = ft_get_len(num, base);
	str[len] = '\0';
	while (sum)
	{
		mod = sum % base;
		sum /= base;
		str[(len--) - 1] = ft_calculate_char(mod, c);
	}
	ft_putstr(str);
}
