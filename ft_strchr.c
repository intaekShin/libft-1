#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	char	needle;
	size_t	i;

	needle = (char) c;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == needle)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
