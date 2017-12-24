#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char *start;

	start = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, s2);
	return (start);
}
