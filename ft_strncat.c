#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *start;

	start = dest;
	while (*dest)
		dest++;
	while (*src && nb)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';

	return (start);
}
