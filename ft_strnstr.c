#include "libft.h"

char *ft_strnstr(char *str, char *to_find, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0' && i <= len)
	{
		if (to_find[j] == '\0')
			return (&str[i - ft_strlen(to_find)]);
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (0);
}
