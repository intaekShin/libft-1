#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *start;

	start = s1;
	while (*s1)
		s1++;
	while (*s2 && n)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1 = '\0';

	return (start);
}
