#include "libft.h"

static void	ft_newarraydelimstr(char **array, char const *s, char c)
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

static char	**ft_arraydelim(char const *s, char c)
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

static void	ft_fillarraydelim(char **array, const char *s, char c)
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

char		**ft_strsplit(char const *s, char c)
{
	char	*one;
	char	*two;
	char	**three;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	one = ft_strtrimselect(s, c);
	two = ft_removeselect(one, c);
	three = ft_arraydelim(two, c);
	ft_fillarraydelim(three, two, c);

	return (three);

}
