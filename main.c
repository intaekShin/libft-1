#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	test_putchar(void)
{	
	ft_putstr("ft_putchar\n\tSUCCESS\n\n");
}

void	test_putstr(void)
{
	ft_putstr("ft_putstr\n\tSUCCESS\n\n");
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

void	test_atoi(void)
{
	char *test[] = {"   -2147483648", "   2147483647", " ", "  42sh"};
	int i;
	int fail;
	fail = 0;
	i = 0;

	ft_putstr("ft_atoi\n\t");
	while (i < 4)
	{
		printf("\"%s\" - String\n\t[%d] - atoi (System)\n\t[%d] - ft_atoi\n\t--"
				"---------\n\t", test[i], atoi(test[i]), ft_atoi(test[i]));
		if (!(atoi(test[i]) == ft_atoi(test[i])))
			fail = 1;
		i++;
	}
	if (fail)
		printf("FAIL\n");
	else
		printf("SUCCESS\n");
}

int		main(int argc, char **argv)
{
	test_putchar();
	test_putstr();
	test_putnbr();
	test_atoi();
	return (0);
}
