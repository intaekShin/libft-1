#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (0);
	
	i = 0;

	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
