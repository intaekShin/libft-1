#include "libft.h"

char	**ft_arraydelim(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**array;
	
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	array = (char **) malloc((j + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			j++;
		if (s[i] == c)
		{
			array[k] = ft_strnew(j);
			k++;
			j = 0;
		}
		if (s[i + 1] == '\0')
		{
			array[k] = ft_strnew(j);
			k++;
			j = 0;
		}
		i++;
	}
	return (array);

}
