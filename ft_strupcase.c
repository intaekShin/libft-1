#include "libft.h"

char	*ft_strupcase(char *str)
{
	char *i;
	
	i = str;

	while (*i)
	{
		if (*i >= 'a' && *i <= 'z')
			*i = *i - 32;
		i++;
	}
	return (str);
}
