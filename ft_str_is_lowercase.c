#include "libft.h"

int ft_str_is_lowercase(char *str)
{
	int fail;
	
	fail = 0;
	
	while (*str)
	{
		if (ft_isalnum(*str) != 3)
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}
