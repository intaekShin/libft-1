#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char	needle;
	size_t	i;

	needle = (char) c;
	i = ft_strlen(s);

	while (i + ft_strlen(s) > 0)
	{
		if (s[i - 1] == needle)
			return ((char *)s + (i - 1));
		i--;
	}
	return (NULL);
}
