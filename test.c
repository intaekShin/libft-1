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
	printf("ft_strncmp\n");
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

void	test_strncpy(void)
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
	printf("ft_strncpy\n");
	printf("\tDest:[%s] Src:[%s]\n\t----------\n", fttest, ftnew);

	//Both my test & system test (n = 3)
	ft_strncpy(fttest, ftnew, 3);
	strncpy(systest, sysnew, 3);

	//Result & return Success.
	printf("\tDest:[%s] - ft_strncpy\n", fttest);
	printf("\tDest:[%s] - strncpy (System)\n", systest);

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

void	test_strstr(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;
	
	//Program name
	printf("ft_strstr\n");

	//Declarations for my function
	char fttest[] = "Ecole 42 - Born 2 Code";
	char ftfind[] = "Born";
	//Declarations for system function
	char systest[] = "Ecole 42 - Born 2 Code";
	char sysfind[] = "Born";


	//Print test input
	printf("\tstr:[%s] to_find:[%s]\n\t----------\n", fttest, ftfind);

	//Both my test & system test
	char *ft = ft_strstr(fttest, ftfind);
	char *sys = strstr(systest, sysfind);

	//Result & return Success.
	printf("\tstr:[%s] - ft_strstr\n", ft_strstr(fttest, ftfind));
	printf("\tstr:[%s] - strstr (System)\n", strstr(systest, sysfind));

	while (ft[i] != '\0' || sys[i] != '\0')
	{
		if (ft[i] != sys[i])
			fail = 1;
		i++;
	}
	if (fail)
		printf("\t//FAIL\n\n");
	else
		printf("\t//SUCCESS\n\n");
}

void	test_strcmp(void)
{
	int fta;
	int ftb;
	int ftc;

	int sysa;
	int sysb;
	int sysc;

	//Program name
	printf("ft_strcmp\n");

	//Declarations for both functions
	char a1[] = "Ecole 42";
	char a2[] = "Born 2 Code";
	char b1[] = "Ann";
	char b2[] = "Dav";
	char c1[] = "Hello, world!";
	char c2[] = "Hello, world!";

	//my function call
	fta = ft_strcmp(a1, a2);
	ftb = ft_strcmp(b1, b2);
	ftc = ft_strcmp(c1, c2);

	//sys function call
	sysa = strcmp(a1, a2);
	sysb = strcmp(b1, b2);
	sysc = strcmp(c1, c2);

	//print results
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_strcmp\n\t[%d] - strcmp (System)\n\t"
			"----------\n", a1, a2, fta, sysa);
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_strcmp\n\t[%d] - strcmp (System)\n\t"
			"----------\n", b1, b2, ftb, sysb);
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_strcmp\n\t[%d] - strcmp (System)\n\t"
			"----------\n", c1, c2, ftc, sysc);
	if (fta == sysa && ftb == sysb && ftc == sysc)
		printf("\t//SUCCESS\n\n");
	else
		printf("\t//FAIL\n\n");
}

void	test_strncmp(void)
{
	int fta;
	int ftb;
	int ftc;

	int sysa;
	int sysb;
	int sysc;

	//Program name
	printf("ft_strncmp\n");

	//Declarations for both functions
	char a1[] = "Ecole 42";
	char a2[] = "Born 2 Code";
	char b1[] = "Ann";
	char b2[] = "Dav";
	char c1[] = "Hello, world!";
	char c2[] = "Hello, moto!";

	//my function call
	fta = ft_strncmp(a1, a2, 3);
	ftb = ft_strncmp(b1, b2, 3);
	ftc = ft_strncmp(c1, c2, 3);

	//sys function call
	sysa = strncmp(a1, a2, 3);
	sysb = strncmp(b1, b2, 3);
	sysc = strncmp(c1, c2, 3);

	//print results
	printf("\t**All passed with 3 for size_t**\n\t----------\n");
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_strcmp\n\t[%d] - strncmp (System)\n\t"
			"----------\n", a1, a2, fta, sysa);
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_strcmp\n\t[%d] - strncmp (System)\n\t"
			"----------\n", b1, b2, ftb, sysb);
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_strcmp\n\t[%d] - strncmp (System)\n\t"
			"----------\n", c1, c2, ftc, sysc);
	if (fta == sysa && ftb == sysb && ftc == sysc)
		printf("\t//SUCCESS\n\n");
	else
		printf("\t//FAIL\n\n");
}

int		main(void)
{
	test_putchar();
	test_putstr();
	test_putnbr();
	test_atoi();
	test_strcpy();
	test_strncpy();
	test_strstr();
	test_strcmp();
	test_strncmp();
	return (0);
}
