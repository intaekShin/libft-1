#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;

	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
