#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	int		len;
	int		size;
	int		trail_zero;

	len = ft_strlen(s1);

	if (len < n)
		size = len;
	else
	{
		size = n;
		trail_zero = 1;
	}

	s2 = (char *) malloc(sizeof(*s1) * (size +1));
	if (!s2)
		return (NULL);

	ft_strncpy(s2, s1, size);
	if (trail_zero)
		s2[size] = '\0';

	return (s2);
}
