#include "libft.h"

char	*ft_strdup(const char *s1)
{
	return (ft_strndup(s1, (ft_strlen(s1))));
}
