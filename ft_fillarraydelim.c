#include "libft.h"

void	ft_fillarraydelim(char **array, const char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			array[j][k] = s[i];
			k++;
		}
		if (s[i] == c)
		{
			j++;
			k = 0;
		}
		i++;
	}
}
