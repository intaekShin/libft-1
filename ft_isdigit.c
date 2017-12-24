#include "libft.h"

int		ft_isdigit(int c)
{
	if (ft_isalnum(c) == 1)
		return (1);
	return (0);
}
