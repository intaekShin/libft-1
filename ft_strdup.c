#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = ft_strlen(s1);

	s2 = (char *) malloc(sizeof(*s1) * (len +1));

	ft_strcpy(s2, s1);

	return (s2);
}
