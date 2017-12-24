#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int	temp;
	int	tens;
	int i;

	tens = 1;
	i = 0;

	char *ptr;

	ptr = (char *) malloc(15 * sizeof(*ptr));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[i] = '-';
		i++;
		if (n == -2147483648)
		{
			ptr[i] = '2';
			i++;
			n = -147483648;
		};
		n = -n;
	}

	temp = n;
	while ((temp /= 10) > 0)
		tens *= 10;
	temp = n;

	while(tens)
	{
		ptr[i] = ((char) (temp / tens) + 48);
		temp %= tens;
		tens /= 10;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
