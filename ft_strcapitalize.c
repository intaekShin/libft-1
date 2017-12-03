#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;
	char *s;

	i = 0;
	j = -1;
	s = str;

	ft_strlowcase(str);

	while (s[i] != '\0')
	{
		if (j == -1 || ft_isalnum(s[j]) == 0)
		{
			if (ft_isalnum(s[i]) == 3)
				s[i] -= 32;
		}
		i++;
		j++;
	}
	return (str);
}

