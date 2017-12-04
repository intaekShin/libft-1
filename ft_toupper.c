#include "libft.h"

char	ft_toupper(char c)
{
	if (ft_isalnum(c) == 3)
		return (c -= 32);
	return (c);
}

