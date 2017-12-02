#include "libft.h"

void	ft_bzero(char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		src[i] = 0;
		i++;
	}
}
