#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

void	test_strupcase(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strupcase\n");

	//Declarations
	char a1[] = "Born in the UsSr";
	char a2[] = "BORN IN THE USSR";
	char b1[] = "\"24\" is \"42\" in reverse...";
	char b2[] = "\"24\" IS \"42\" IN REVERSE...";
	char c1[] = "eXclamation points go here! - not here !";
	char c2[] = "EXCLAMATION POINTS GO HERE! - NOT HERE !";

	//Tests 1
	printf("\t[%s] - before\n", a1);
	ft_strupcase(a1);
	printf("\t[%s] - after\n\t----------\n", a1);

	//Test 2
	printf("\t[%s] - before\n", b1);
	ft_strupcase(b1);
	printf("\t[%s] - after\n\t----------\n", b1);

	//Test 3
	printf("\t[%s] - before\n", c1);
	ft_strupcase(c1);
	printf("\t[%s] - after\n\t----------\n", c1);

	if (strcmp(a1, a2) != 0)
		fail = 1;
	if (strcmp(b1, b2) != 0)
		fail = 1;
	if (strcmp(c1, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");	
}

void	test_strlowcase(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strlowcase\n");

	//Declarations
	char a1[] = "Pink FloYD";
	char a2[] = "pink floyd";
	char b1[] = "\"24\" Is \"42\" in ReveRse...";
	char b2[] = "\"24\" is \"42\" in reverse...";
	char c1[] = "BrExit is sTUPid!";
	char c2[] = "brexit is stupid!";

	//Tests 1
	printf("\t[%s] - before\n", a1);
	ft_strlowcase(a1);
	printf("\t[%s] - after\n\t----------\n", a1);

	//Test 2
	printf("\t[%s] - before\n", b1);
	ft_strlowcase(b1);
	printf("\t[%s] - after\n\t----------\n", b1);

	//Test 3
	printf("\t[%s] - before\n", c1);
	ft_strlowcase(c1);
	printf("\t[%s] - after\n\t----------\n", c1);

	if (strcmp(a1, a2) != 0)
		fail = 1;
	if (strcmp(b1, b2) != 0)
		fail = 1;
	if (strcmp(c1, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strcapitalize(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strcapitalize\n");

	//Declarations
	char a1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char a2[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	char b1[] = "\"24\" IS \"42\" in ReveRse...";
	char b2[] = "\"24\" Is \"42\" In Reverse...";
	char c1[] = "** my PASSPORT is wOrthless! (2019 onwArds)";
	char c2[] = "** My Passport Is Worthless! (2019 Onwards)";

	//Tests 1
	printf("\t[%s] - before\n", a1);
	ft_strcapitalize(a1);
	printf("\t[%s] - after\n\t----------\n", a1);

	//Test 2
	printf("\t[%s] - before\n", b1);
	ft_strcapitalize(b1);
	printf("\t[%s] - after\n\t----------\n", b1);

	//Test 3
	printf("\t[%s] - before\n", c1);
	ft_strcapitalize(c1);
	printf("\t[%s] - after\n\t----------\n", c1);

	if (strcmp(a1, a2) != 0)
		fail = 1;
	if (strcmp(b1, b2) != 0)
		fail = 1;
	if (strcmp(c1, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_str_is_alpha(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_str_is_alpha\n");

	//Declarations
	char a1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int a2 = 0;
	char b1[] = "\"24\" IS \"42\" in ReveRse...";
	int b2 = 0;
	char c1[] = "Word";
	int c2 = 1;

	//Tests 1
	printf("\tString:[%s] Result:[%d]\n\t----------\n", a1, ft_str_is_alpha(a1));

	//Test 2	
	printf("\tString:[%s] Result:[%d]\n\t----------\n", b1, ft_str_is_alpha(b1));

	//Test 3
	printf("\tString:[%s] Result:[%d]\n\t----------\n", c1, ft_str_is_alpha(c1));


	if (ft_str_is_alpha(a1) != a2)
		fail = 1;
	if (ft_str_is_alpha(b1) != b2)
		fail = 1;
	if (ft_str_is_alpha(c1) != c2)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_str_is_numeric(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_str_is_numeric\n");

	//Declarations
	char a1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int a2 = 0;
	char b1[] = "\"24\" IS \"42\" in ReveRse...";
	int b2 = 0;
	char c1[] = "42";
	int c2 = 1;

	//Tests 1
	printf("\tString:[%s] Result:[%d]\n\t----------\n", a1, ft_str_is_numeric(a1));

	//Test 2	
	printf("\tString:[%s] Result:[%d]\n\t----------\n", b1, ft_str_is_numeric(b1));

	//Test 3
	printf("\tString:[%s] Result:[%d]\n\t----------\n", c1, ft_str_is_numeric(c1));


	if (ft_str_is_numeric(a1) != a2)
		fail = 1;
	if (ft_str_is_numeric(b1) != b2)
		fail = 1;
	if (ft_str_is_numeric(c1) != c2)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_str_is_lowercase(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_str_is_lowercase\n");

	//Declarations
	char a1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int a2 = 0;
	char b1[] = "\"24\" IS \"42\" in ReveRse...";
	int b2 = 0;
	char c1[] = "lowercase";
	int c2 = 1;

	//Tests 1
	printf("\tString:[%s] Result:[%d]\n\t----------\n", a1, ft_str_is_lowercase(a1));

	//Test 2	
	printf("\tString:[%s] Result:[%d]\n\t----------\n", b1, ft_str_is_lowercase(b1));

	//Test 3
	printf("\tString:[%s] Result:[%d]\n\t----------\n", c1, ft_str_is_lowercase(c1));


	if (ft_str_is_lowercase(a1) != a2)
		fail = 1;
	if (ft_str_is_lowercase(b1) != b2)
		fail = 1;
	if (ft_str_is_lowercase(c1) != c2)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_str_is_uppercase(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_str_is_uppercase\n");

	//Declarations
	char a1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int a2 = 0;
	char b1[] = "\"24\" IS \"42\" in ReveRse...";
	int b2 = 0;
	char c1[] = "UPPER";
	int c2 = 1;

	//Tests 1
	printf("\tString:[%s] Result:[%d]\n\t----------\n", a1, ft_str_is_uppercase(a1));

	//Test 2	
	printf("\tString:[%s] Result:[%d]\n\t----------\n", b1, ft_str_is_uppercase(b1));

	//Test 3
	printf("\tString:[%s] Result:[%d]\n\t----------\n", c1, ft_str_is_uppercase(c1));


	if (ft_str_is_uppercase(a1) != a2)
		fail = 1;
	if (ft_str_is_uppercase(b1) != b2)
		fail = 1;
	if (ft_str_is_uppercase(c1) != c2)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_str_is_printable(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_str_is_printable\n");

	//Declarations
	char a1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int a2 = 1;
	char b1[] = "\"24\" IS \"42\" in ReveRse...\f";
	int b2 = 0;
	char c1[] = "UPPER";
	int c2 = 1;

	//Tests 1
	printf("\tString:[%s] Result:[%d]\n\t----------\n", a1, ft_str_is_printable(a1));

	//Test 2	
	printf("\tString:[%s] Result:[%d]\n\t----------\n", b1, ft_str_is_printable(b1));

	//Test 3
	printf("\tString:[%s] Result:[%d]\n\t----------\n", c1, ft_str_is_printable(c1));


	if (ft_str_is_printable(a1) != a2)
		fail = 1;
	if (ft_str_is_printable(b1) != b2)
		fail = 1;
	if (ft_str_is_printable(c1) != c2)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strcat(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strcat\n");

	//Declarations
	char a1[50];
	char a2[50];
	char b1[50];
	char b2[50];

	ft_strcpy(a1, "Je suis un etudiant d");
	ft_strcpy(a2, "e quarante deux");
	ft_strcpy(b1, "Je suis un etudiant d");
	ft_strcpy(b2, "e quarante deux");

	//Test
	printf("\tString 1:[%s]\n\tString 2:[%s]\n\t----------\n", a1, a2);
	ft_strcat(a1, a2);
	strcat(b1, b2);
	printf("\t[%s] - ft_strcat\n\t[%s] - strcat\n", a1, b1);


	//Result
	if (strcmp(a1, b1) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strncat(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strncat\n");

	//Declarations
	char a1[50];
	char a2[50];
	char b1[50];
	char b2[50];

	ft_strcpy(a1, "Je suis un etudiant d");
	ft_strcpy(a2, "e quarante deux");
	ft_strcpy(b1, "Je suis un etudiant d");
	ft_strcpy(b2, "e quarante deux");

	//Test
	printf("\tString 1:[%s]\n\tString 2:[%s]\n\t----------\n", a1, a2);
	ft_strncat(a1, a2, 9);
	strncat(b1, b2, 9);
	printf("\t[%s] - ft_strncat\n\t[%s] - strncat\n", a1, b1);


	//Result
	if (strcmp(a1, b1) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strlcat(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strlcat\n");

	//Declarations
	char a1[50];
	char a2[50];
	char b1[50];
	char b2[50];

	ft_strcpy(a1, "Je suis un etudiant d");
	ft_strcpy(a2, "e quarante deux");
	ft_strcpy(b1, "Je suis un etudiant d");
	ft_strcpy(b2, "e quarante deux");

	//Test
	printf("\tString 1:[%s]\n\tString 2:[%s]\n\t----------\n", a1, a2);
	ft_strlcat(a1, a2, 26);
	strlcat(b1, b2, 26);
	printf("\t[%s] - ft_strlcat\n\t[%s] - strlcat\n", a1, b1);


	//Result
	if (strcmp(a1, b1) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strlcpy(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Declarations for my function
	char fttest[50] = "Lead Balloon";
	char ftnew[50] = "Frogs";
	//Declarations for system function
	char systest[50] = "Lead Balloon";
	char sysnew[50] = "Frogs";

	//Print test input
	printf("ft_strlcpy\n");
	printf("\tDest:[%s] Src:[%s]\n\t----------\n", fttest, ftnew);

	//Both my test & system test (n = 3)
	ft_strlcpy(fttest, ftnew, 3);
	strlcpy(systest, sysnew, 3);

	//Result & return Success.
	printf("\tDest:[%s] - ft_strlcpy\n", fttest);
	printf("\tDest:[%s] - strlcpy (System)\n", systest);

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

void	test_bzero(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Function Name
	printf("ft_bzero\n");

	//Declarations for my function
	char fttest[50] = "It's Raining, it's pouring";
	//Declarations for system function
	char systest[50] = "It's Raining, it's pouring";

	//Print test input
	printf("\tString:[%s]\n\t----------\n", fttest);

	//Both my test & system test (n = 3)
	ft_bzero(fttest, 4);
	bzero(systest, 4);

	//Result & return Success.
	printf("\tDest:[%s] - ft_bzero\n", fttest);
	printf("\tDest:[%s] - bzero (System)\n", systest);

	while (i < 20)
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

void	test_strdup(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strdup\n");

	//Declarations
	char a1[50];
	char *a2;
	char b1[50];
	char *b2;

	ft_strcpy(a1, "Ann is a cat");
	ft_strcpy(b1, "Ann is a cat");

	//strdup happens here.
	a2 = ft_strdup(a1);
	b2 = strdup(b1);

	//Modify original to ensure that the new stings are duplicates.
	ft_strcpy(a1, "red");
	ft_strcpy(b1, "blue");

	//Test
	printf("\tOriginal String:[%s]\n\t----------\n", a1);
	printf("\t[%s] - ft_strlcat\n\t[%s] - strlcat\n", a2, b2);


	//Result
	if (strcmp(a2, b2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strnstr(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_strnstr\n");

	//Declarations for my function
	char fttest[] = "Ecole 42 - Born 2 Code";
	char ftfind[] = "Born";
	//Declarations for system function
	char systest[] = "Ecole 42 - Born 2 Code";
	char sysfind[] = "Born";


	//Print test input
	printf("\tstr:[%s] to_find:[%s]\n\t----------\n", fttest, ftfind);

	//Both my test & system test
	char *ft = ft_strnstr(fttest, ftfind, 15);
	char *sys = strnstr(systest, sysfind, 15);

	//Result & return Success.
	printf("\tstr:[%s] - ft_strnstr\n", ft_strnstr(fttest, ftfind, 15));
	printf("\tstr:[%s] - strnstr (System)\n", strnstr(systest, sysfind, 15));

	if (ft != sys)
	{
		fail = 1;
		if (strcmp(ft, sys) == 0)
			fail = 0;
	}
	if (fail)
		printf("\t//FAIL\n\n");
	else
		printf("\t//SUCCESS\n\n");
}

void	test_isalpha(void)
{
	//Declarations
	char	ftis;
	char	ftnot;
	char	sysis;
	char	sysnot;

	int		ftisresult;
	int		ftnotresult;
	int		sysisresult;
	int		sysnotresult;

	int		fail;

	fail = 0;

	//Function Name
	printf("ft_isalpha\n");
	
	//Assign values
	ftis = 'a';
	ftnot = '1';
	sysis = 'a';
	sysnot = '1';

	//ft_isalpha v isalpha
	ftisresult = ft_isalpha(ftis);
	ftnotresult = ft_isalpha(ftnot);
	sysisresult = isalpha(sysis);
	sysnotresult = isalpha(sysnot);

	if (ftisresult != sysisresult)
		fail = 1;
	if (ftnotresult != sysnotresult)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_isdigit(void)
{
	//Declarations
	char	ftis;
	char	ftnot;
	char	sysis;
	char	sysnot;

	int		ftisresult;
	int		ftnotresult;
	int		sysisresult;
	int		sysnotresult;

	int		fail;

	fail = 0;

	//Function Name
	printf("ft_isdigit\n");
	
	//Assign values
	ftis = '1';
	ftnot = 'a';
	sysis = '1';
	sysnot = 'a';

	//ft_isalpha v isalpha
	ftisresult = ft_isdigit(ftis);
	ftnotresult = ft_isdigit(ftnot);
	sysisresult = isdigit(sysis);
	sysnotresult = isdigit(sysnot);

	if (ftisresult != sysisresult)
		fail = 1;
	if (ftnotresult != sysnotresult)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_isalnum(void)
{
	//Declarations
	char	ftis;
	char	ftnot;
	char	sysis;
	char	sysnot;

	int		ftisresult;
	int		ftnotresult;
	int		sysisresult;
	int		sysnotresult;

	int		fail;

	fail = 0;

	//Function Name
	printf("ft_isalnum\n");
	
	//Assign values
	ftis = 'a';
	ftnot = '~';
	sysis = 'a';
	sysnot = '~';

	//ft_isalpha v isalpha
	ftisresult = ft_isalnum(ftis);
	ftnotresult = ft_isalnum(ftnot);
	sysisresult = isalnum(sysis);
	sysnotresult = isalnum(sysnot);

	if (ftisresult == 0 || sysisresult == 0)
		fail = 1;
	if (ftnotresult != sysnotresult)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_isascii(void)
{
	//Declarations
	char	ftis;
	char	sysis;

	int		ftisresult;
	int		sysisresult;

	int		fail;

	fail = 0;

	//Function Name
	printf("ft_isascii\n");
	
	//Assign values
	ftis = 'a';
	sysis = 'a';

	//ft_isalpha v isalpha
	ftisresult = ft_isalnum(ftis);
	sysisresult = isalnum(sysis);

	if (ftisresult == 0  ||  sysisresult == 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_isprint(void)
{
	//Declarations
	char	ftis;
	char	ftnot;
	char	sysis;
	char	sysnot;

	int		ftisresult;
	int		ftnotresult;
	int		sysisresult;
	int		sysnotresult;

	int		fail;

	fail = 0;

	//Function Name
	printf("ft_isprint\n");
	
	//Assign values
	ftis = 'a';
	ftnot = '\n';
	sysis = 'a';
	sysnot = '\n';

	//ft_isalpha v isalpha
	ftisresult = ft_isalnum(ftis);
	ftnotresult = ft_isalnum(ftnot);
	sysisresult = isalnum(sysis);
	sysnotresult = isalnum(sysnot);

	if (ftisresult == 0 || sysisresult == 0)
		fail = 1;
	if (ftnotresult != sysnotresult)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_toupper(void)
{
	//Declaratios
	char	a1;
	char	a2;
	char	b1;
	char	b2;
	int		fail;

	//Assign
	a1 = 'a';
	a2 = 'G';
	b1 = 'a';
	b2 = 'G';
	fail = 0;

	//toupper
	a1 = ft_toupper(a1);
	a2 = ft_toupper(a2);
	b1 = toupper(b1);
	b2 = toupper(b2);

	//Program name
	printf("ft_toupper\n");

	//Output
	printf("\ta -> %c - ft_toupper\n", a1);
	printf("\tG -> %c - ft_toupper\n", a2);
	printf("\ta -> %c - toupper\n", b1);
	printf("\tG -> %c - toupper\n", b2);

	//Test
	((a1 != b1) || (a2 != b2)) ? (fail = 1) : (fail = 0);
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");

}

void	test_tolower(void)
{
	//Declaratios
	char	a1;
	char	a2;
	char	b1;
	char	b2;
	int		fail;

	//Assign
	a1 = 'a';
	a2 = 'G';
	b1 = 'a';
	b2 = 'G';
	fail = 0;

	//toupper
	a1 = ft_tolower(a1);
	a2 = ft_tolower(a2);
	b1 = tolower(b1);
	b2 = tolower(b2);

	//Program name
	printf("ft_tolower\n");

	//Output
	printf("\tH -> %c - ft_tolower\n", a1);
	printf("\ti -> %c - ft_tolower\n", a2);
	printf("\tH -> %c - tolower\n", b1);
	printf("\ti -> %c - tolower\n", b2);

	//Test
	((a1 != b1) || (a2 != b2)) ? (fail = 1) : (fail = 0);
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");

}

void	test_memset(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Function Name
	printf("ft_memset");

	//Declarations for my function
	char fttest[50] = "It's Raining, it's pouring";
	//Declarations for system function
	char systest[50] = "It's Raining, it's pouring";

	//Print test input
	printf("\tString:[%s]\n\t----------\n", fttest);

	//Both my test & system test (n = 3)
	ft_memset(fttest, 'A', 8);
	memset(systest, 'A', 8);

	//Result & return Success.
	printf("\tDest:[%s] - ft_memset\n", fttest);
	printf("\tDest:[%s] - memset (System)\n", systest);

	while (i < 20)
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
void	test_memcpy(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_memcpy\n");

	//Declarations for my function
	char fttest[] = "Dogs are the best";
	char ftfind[] = "Cats are awful";
	//Declarations for system function
	char systest[] = "Dogs are the best";
	char sysfind[] = "Cats are awful";


	//Print test input
	printf("\tdst:[%s] src:[%s]\n\t----------\n", fttest, ftfind);

	//Both my test & system test
	ft_memcpy(fttest, ftfind, 4);
	memcpy(systest, sysfind, 4);

	//Result & return Success.
	printf("\tstr:[%s] - ft_memcpy\n", fttest);
	printf("\tstr:[%s] - memcpy (System)\n", systest);

	if (ft_strcmp(fttest, systest) != 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}
void	test_memccpy(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_memccpy\n");

	//Declarations for my function
	char fttest[] = "Dogs are the best";
	char ftfind[] = "Cats are awful";
	//Declarations for system function
	char systest[] = "Dogs are the best";
	char sysfind[] = "Cats are awful";


	//Print test input
	printf("\tdst:[%s] src:[%s]\n\t----------\n", fttest, ftfind);

	//Both my test & system test
	ft_memccpy(fttest, ftfind, 'a', 4);
	memccpy(systest, sysfind, 'a' , 4);

	//Result & return Success.
	printf("\tstr:[%s] - ft_memccpy\n", fttest);
	printf("\tstr:[%s] - memccpy (System)\n", systest);

	if (ft_strcmp(fttest, systest) != 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_memmove(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_memmove\n");

	//Declarations for my function
	char fttest[] = "Cats hate Christmas";
	//Declarations for system function
	char systest[] = "Cats hate Christmas";

	//Print test input
	printf("\tdst:[%s] dst + 1[%s]\n\t----------\n", fttest, fttest + 1);

	//Both my test & system test
	ft_memmove(fttest, fttest + 1, 4);
	memmove(systest, systest + 1, 4);

	//Result & return Success.
	printf("\tstr:[%s] - ft_memmove\n", fttest);
	printf("\tstr:[%s] - memmove (System)\n", systest);

	if (ft_strcmp(fttest, systest) != 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strchr(void)
{
	int fail;
	int i;
	char *ftnum;
	char * sysnum;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_strchr\n");

	//Declarations for my function
	char fttest[] = "This is a string";
	//Declarations for system function
	char systest[] = "This is a string";

	//Print test input
	printf("\tstring:[%s]\n\t----------\n", fttest);

	//Both my test & system test
	ftnum = ft_strchr(fttest, 'i');
	sysnum = strchr(systest, 'i');

	//Result & return Success.
	printf("\tstr:[%s] [%s] - ft_strchr\n", fttest, ftnum);
	printf("\tstr:[%s] [%s]- strchr (System)\n", systest, sysnum);

	if (ft_strcmp(ftnum, sysnum) != 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strrchr(void)
{
	int fail;
	int i;
	char *ftnum;
	char * sysnum;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_strrchr\n");

	//Declarations for my function
	char fttest[] = "This is a string";
	//Declarations for system function
	char systest[] = "This is a string";

	//Print test input
	printf("\tstring:[%s]\n\t----------\n", fttest);

	//Both my test & system test
	ftnum = ft_strrchr(fttest, 'i');
	sysnum = strrchr(systest, 'i');

	//Result & return Success.
	printf("\tstr:[%s] [%s] - ft_strrchr\n", fttest, ftnum);
	printf("\tstr:[%s] [%s]- strrchr (System)\n", systest, sysnum);

	if (ft_strcmp(ftnum, sysnum) != 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_memchr(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Program name
	printf("ft_memchr\n");

	//Declarations for my function
	char fttest[] = "Ecole 42 - Born 2 Code";
	char ftfind = 'B';
	//Declarations for system function
	char systest[] = "Ecole 42 - Born 2 Code";
	char sysfind = 'B';


	//Print test input
	printf("\tstr:[%s] to_find:[%c]\n\t----------\n", fttest, ftfind);

	//Both my test & system test
	char *ft = ft_memchr(fttest, ftfind, 22);
	char *sys = memchr(systest, sysfind, 22);

	//Result & return Success.
	printf("\tstr:[%s] - ft_memchr\n", ft_memchr(fttest, ftfind, 22));
	printf("\tstr:[%s] - memchr (System)\n", memchr(systest, sysfind, 22));

	if (strcmp(ft, sys) != 0)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_memcmp(void)
{
	int fta;
	int ftb;
	int ftc;

	int sysa;
	int sysb;
	int sysc;

	//Program name
	printf("ft_memcmp\n");

	//Declarations for both functions
	char a1[] = "Fridge";
	char a2[] = "Frog";
	char b1[] = "Boss";
	char b2[] = "Bottle";
	char c1[] = "Hello, world!";
	char c2[] = "Hello, moto!";

	//my function call
	fta = ft_memcmp(a1, a2, 3);
	ftb = ft_memcmp(b1, b2, 3);
	ftc = ft_memcmp(c1, c2, 3);

	//sys function call
	sysa = memcmp(a1, a2, 3);
	sysb = memcmp(b1, b2, 3);
	sysc = memcmp(c1, c2, 3);

	//print results
	printf("\t**All passed with 3 for size_t**\n\t----------\n");
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_memcmp\n\t[%d] - memcmp (System)\n\t"
			"----------\n", a1, a2, fta, sysa);
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_memcmp\n\t[%d] - memcmp (System)\n\t"
			"----------\n", b1, b2, ftb, sysb);
	printf("\ts1:[%s] s2:[%s]\n\t[%d] - ft_memcmp\n\t[%d] - memcmp (System)\n\t"
			"----------\n", c1, c2, ftc, sysc);
	if (fta == sysa && ftb == sysb && ftc == sysc)
		printf("\t//SUCCESS\n\n");
	else
		printf("\t//FAIL\n\n");
}

void	test_itoa(void)
{
	int		fail;
	fail = 0;

	//Name
	printf("ft_itoa\n");

	//Decerations:
	int		a;
	int		b;
	int		c;

	char	aa[20];
	char	bb[20];
	char	cc[20];

	char	aaa[20];
	char	bbb[20];
	char	ccc[20];

	//Assign
	a = 42;
	b = 0;
	c = -12675822;

	ft_strcpy(aa, "42");
	ft_strcpy(bb, "0");
	ft_strcpy(cc, "-12675822");

	
	ft_strcpy(aaa, ft_itoa(a));
	ft_strcpy(bbb, ft_itoa(b));
	ft_strcpy(ccc, ft_itoa(c));

	printf("\tExpected [%s] \t\tOutput[%s]\n", aa, aaa);
	printf("\tExpected [%s] \t\tOutput[%s]\n", bb, bbb);
	printf("\tExpected [%s] \tOutput[%s]\n", cc, ccc);

	//Comparison
	if (strcmp(aa, aaa) != 0)
		fail = 1;
	if (strcmp(bb, bbb) != 0)
		fail = 1;
	if (strcmp(cc, ccc) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
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
	test_strupcase();
	test_strlowcase();
	test_strcapitalize();
	test_str_is_alpha();
	test_str_is_numeric();
	test_str_is_lowercase();
	test_str_is_uppercase();
	test_str_is_printable();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strlcpy();
	test_bzero();
	test_strdup();
	test_strnstr();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_memset();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_strchr();
	test_strrchr();
	test_memchr();
	test_memcmp();
	test_itoa();
	return (0);
}
