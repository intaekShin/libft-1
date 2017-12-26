#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub_str;
	size_t i;

	i = 0;
	sub_str = ft_strnew(len);
	if (!sub_str)
		return (NULL);
	while (i < len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	return (sub_str);
}
