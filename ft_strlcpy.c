#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
