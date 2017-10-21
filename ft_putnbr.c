#include "libft.h"

void	ft_putnbr(int nb)
{
	int	temp;
	int	tens;

	tens = 1;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		};
		nb = -nb;
	}

	temp = nb;
	while ((temp /= 10) > 0)
		tens *= 10;
	temp = nb;

	while(tens)
	{
		ft_putchar((char) (temp / tens) + 48);
		temp %= tens;
		tens /= 10;
	}
}
