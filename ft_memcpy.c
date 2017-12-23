#include "libft.h"

void 	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	ptr_dst = dst;
	ptr_src = (char *)src;
	i = 0;

	while (i < n)
	{
		*(ptr_dst + i) = *(ptr_src + i);
		i++;
	}
	return (dst);
}
