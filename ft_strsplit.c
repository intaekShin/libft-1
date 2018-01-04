#include "libft.h"

char	**ft_strsplit(char const *s, char c)
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
