#include "libft.h"

char	**ft_arraydelim(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;
	
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	if(!(array = (char **) malloc((j + 1) * sizeof(char *))))
		return (NULL);
	ft_newarraydelimstr(array, s, c);
	return (array);
}
