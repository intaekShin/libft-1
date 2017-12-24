#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	len;
	size_t	size;
	int		trail_zero;

	len = ft_strlen(s1);

	if (len < n)
		size = len;
	else
	{
		size = n;
		trail_zero = 1;
	}

	s2 = ft_strnew(size);
	if (!s2)
		return (NULL);

	ft_strncpy(s2, s1, size);
	if (trail_zero)
		s2[size] = '\0';

	return (s2);
}
