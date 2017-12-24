#include "libft.h"

void	ft_putnbr(int n)
{
	int	temp;
	int	tens;

	tens = 1;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
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
		ft_putchar((char) (temp / tens) + 48);
		temp %= tens;
		tens /= 10;
	}
}
