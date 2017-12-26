#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	temp;
	int	tens;

	tens = 1;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
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
		ft_putchar_fd((char) (temp / tens) + 48, fd);
		temp %= tens;
		tens /= 10;
	}
}
