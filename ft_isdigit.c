#include "libft.h"

int		ft_isdigit(char c)
{
	if (ft_isalnum(c) == 1)
		return (1);
	return (0);
}
