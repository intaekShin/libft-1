#include "libft.h"

int ft_str_is_numeric(char *str)
{
	int fail;
	
	fail = 0;
	
	while (*str)
	{
		if (ft_isalnum(*str) != 1)
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}
