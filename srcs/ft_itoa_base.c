/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 19:25:15 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/21 21:13:20 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_calculate_char(int mod)
{
	char	return_char;

	if (mod > 36)
		return (0);
	return_char = '0';
	while (mod--)
	{
		return_char++;
		if (return_char == ':')
			return_char = 'A';
	}
	return (return_char);
}

static int	ft_get_len(uintmax_t num, uintmax_t base)
{
	int		len;

	len = 0;
	while (num)
	{
		num /= base;
		len++;
	}
	return (len);
}

static char		*ft_generate_string(uintmax_t num, uintmax_t base)
{
	uintmax_t	sum;
	int			mod;
	int			len;
	int			i;
	char		*str;

	if (num == 0)
		return ("0");
	sum = num;
	i = 0;
	len = ft_get_len(num, base);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (sum)
	{
		mod = sum % base;
		sum /= base;
		str[(len--) - 1] = ft_calculate_char(mod);
	}
	return (str);
}

char		*ft_itoa_base(uintmax_t num, uintmax_t base)
{
	char	*str;

	str = ft_generate_string(num, base);
	return (str);
}
