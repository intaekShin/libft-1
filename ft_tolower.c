#include "libft.h"

char	ft_tolower(char c)
{
	if (ft_isalnum(c) == 2)
		return (c += 32);
	return (c);
}

