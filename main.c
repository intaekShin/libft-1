#include "libft.h"

void	test_putchar(void)
{	
	ft_putstr("ft_putchar\n\tSuccess\n\n");
}

void	test_putstr(void)
{
	ft_putstr("ft_putstr\n\tSuccess\n\n");
}

void	test_putnbr(void)
{
	ft_putstr("ft_putnbr\n\t[-2147483648] - Test\n\t[");
	ft_putnbr(-2147483648);
	ft_putstr("] - Result\n\t[2147483647] - Test\n\t[");
	ft_putnbr(2147483647);
	ft_putstr("] - Result\n\t[0] - Test\n\t[");
	ft_putnbr(0);
	ft_putstr("] - Result\n\t[42] - Test\n\t[");
	ft_putnbr(42);
	ft_putstr("] - Result\n\tCheck results match tests\n\n");
}

int		main(int argc, char **argv)
{
	test_putchar();
	test_putstr();
	test_putnbr();
	return (0);
}
