#include "libft.h"

char	*ft_memalloc(size_t size)
{
	char *start;

	start = malloc(size);
	if (!start)
		return (NULL);
	ft_bzero(start, size);
	return (start);
}
