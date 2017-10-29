#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*dest)
		dest++;
	ft_strcpy(dest, src);
	return (start);
}
