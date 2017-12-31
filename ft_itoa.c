#include "libft.h"

static int ft_get_len(int n)
{
	int len;

	len = 1;
	if (n < 0)
		n *= -1;

	while ((n /= 10) > 0)
		len++;
	return (len);
}

static int ft_get_tens(int n)
{
	int tens;

	tens = 1;
	while ((n /= 10) > 0)
		tens *= 10;
	return (tens);
}

char	*ft_itoa(int n)
{
	int	tens;
	int i;
	char *ptr;

	i = 0;
	if (!(ptr = ft_strnew(ft_get_len(n))))
		return (NULL);
	if (n < 0)
	{
		ptr[i++] = '-';
		if (n == -2147483648)
		{
			ptr[i++] = '2';
			n = -147483648;
		}
		n = -n;
	}
	tens = ft_get_tens(n);
	while(tens)
	{
		ptr[i++] = ((char) (n / tens) + 48);
		n %= tens;
		tens /= 10;
	}
	ptr[i] = '\0';
	return (ptr);
}
