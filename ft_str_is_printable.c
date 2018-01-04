#include "libft.h"

int ft_str_is_printable(char *str)
{
	int fail;

	fail = 0;
	while (*str)
	{
		if (!(*str > 31 && *str < 127))
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}
