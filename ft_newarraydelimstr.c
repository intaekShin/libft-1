#include "libft.h"

void	ft_newarraydelimstr(char **array, char const *s, char c)
{
	int		j;
	int		k;

	j = 0;
	k = 0;	
	while (*s)
	{
		if (*s != c)
			j++;
		if (*s == c || *(s + 1) == '\0')
		{
			array[k] = ft_strnew(j);
			k++;
			j = 0;
		}
		s++;
	}
}
