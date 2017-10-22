#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test_putchar(void)
{	
	ft_putstr("ft_putchar\n\t//SUCCESS\n\n");
}

void	test_putstr(void)
{
	ft_putstr("ft_putstr\n\t//SUCCESS\n\n");
}

void	test_putnbr(void)
{
	ft_putstr("ft_putnbr\n\t[-2147483648] - Expected\n\t[");
	ft_putnbr(-2147483648);
	ft_putstr("] - Result\n\t[2147483647] - Expected\n\t[");
	ft_putnbr(2147483647);
	ft_putstr("] - Result\n\t[0] - Expected\n\t[");
	ft_putnbr(0);
	ft_putstr("] - Result\n\t[42] - Expected\n\t[");
	ft_putnbr(42);
	ft_putstr("] - Result\n\t//Check results match expected\n\n");
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
				"--------\n\t", test[i], atoi(test[i]), ft_atoi(test[i]));
		if (!(atoi(test[i]) == ft_atoi(test[i])))
			fail = 1;
		i++;
	}
	if (fail)
		printf("//FAIL\n\n");
	else
		printf("//SUCCESS\n\n");
}

void	test_strcpy(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Declarations for my function
	char fttest[] = "Lead Balloon";
	char ftnew[] = "Frogs";
	//Declarations for system function
	char systest[] = "Lead Balloon";
	char sysnew[] = "Frogs";
	
	//Print test input
	printf("ft_strcmp\n");
	printf("\tDest:[%s] Src:[%s]\n\t----------\n", fttest, ftnew);
	
	//Both my test & system test
	ft_strcpy(fttest, ftnew);
	strcpy(systest, sysnew);
	
	//Result & return Success.
	printf("\tDest:[%s] - ft_strcpy\n", fttest);
	printf("\tDest:[%s] - strcpy (System)\n", systest);

	while (systest[i] != '\0' || fttest[i] != '\0')
	{
		if (systest[i] != fttest[i])
			fail = 1;
		i++;
	}
	if (fail)
		printf("\t//FAIL\n\n");
	else
		printf("\t//SUCCESS\n\n");
}

int		main(void)
{
	test_putchar();
	test_putstr();
	test_putnbr();
	test_atoi();
	test_strcpy();
	return (0);
}
