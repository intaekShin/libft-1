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

void	test_strnew(void)
{
	printf("ft_strnew\n\tReview the code below...\n\t----------\n");
	
	int c;
	FILE *file;
	file = fopen("ft_strnew.c", "r");
	ft_putchar('\t');
	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			ft_putchar(c);
			if (c == '\n')
				ft_putchar('\t');
		}
		fclose(file);
	}
	printf("\n\t----------\n\t//REVIEW CODE\n\n");

}

void	test_memalloc(void)
{
	printf("ft_memalloc\n\tReview the code below...\n\t----------\n");
	
	int c;
	FILE *file;
	file = fopen("ft_memalloc.c", "r");
	ft_putchar('\t');
	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			ft_putchar(c);
			if (c == '\n')
				ft_putchar('\t');
		}
		fclose(file);
	}
	printf("\n\t----------\n\t//REVIEW CODE\n\n");

}

void	test_strclr(void)
{
	int fail;
	int i;

	fail = 0;
	i = 0;

	//Function Name
	printf("ft_strclr\n");

	//Declarations for my function
	char fttest[50] = "My name is Earl";
	//Declarations for system function
	char systest[50] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";

	//Print test input
	printf("\tString:[%s]\n\t----------\n", fttest);

	//MY TEST ONLY.
	ft_strclr(fttest);

	//Result & return Success.
	printf("\tDest:[%s] - ft_strclr\n", fttest);
	printf("\tDest:[%s] - strclr (System)\n", systest);

	while (i < 15)
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

void	test_strequ(void)
{
	int fta;
	int ftb;
	int ftc;

	int sysa;
	int sysb;
	int sysc;

	//Program name
	printf("ft_strequ\n");

	//Declarations for both functions
	char a1[] = "Ecole 42";
	char a2[] = "Born 2 Code";
	char b1[] = "Ann";
	char b2[] = "Dav";
	char c1[] = "Hello, world!";
	char c2[] = "Hello, world!";

	//my function call
	fta = ft_strequ(a1, a2);
	ftb = ft_strequ(b1, b2);
	ftc = ft_strequ(c1, c2);

	//sys function call
	sysa = 0;
	sysb = 0;
	sysc = 1;

	//print results
	printf("\ts1:[%s] s2:[%s]\n\tResult:[%d] \n\tExpected:[%d]\n\t"
			"----------\n", a1, a2, fta, sysa);
	printf("\ts1:[%s] s2:[%s]\n\tResult:[%d] \n\tExpected:[%d]\n\t"
			"----------\n", b1, b2, ftb, sysb);
	printf("\ts1:[%s] s2:[%s]\n\tResult:[%d] \n\tExpected:[%d]\n\t"
			"----------\n", c1, c2, ftc, sysc);

	if (fta == sysa && ftb == sysb && ftc == sysc)
		printf("\t//SUCCESS\n\n");
	else
		printf("\t//FAIL\n\n");
}

void	test_strnequ(void)
{
	int fta;
	int ftb;
	int ftc;

	int sysa;
	int sysb;
	int sysc;

	//Program name
	printf("ft_strequ\n");

	//Declarations for both functions
	char a1[] = "Ecole 42";
	char a2[] = "Born 2 Code";
	char b1[] = "Ann is a cat";
	char b2[] = "Ann Smells";
	char c1[] = "Hello, world!";
	char c2[] = "Hello, world!";

	//my function call
	fta = ft_strnequ(a1, a2, 3);
	ftb = ft_strnequ(b1, b2, 3);
	ftc = ft_strnequ(c1, c2, 3);

	//sys function call
	sysa = 0;
	sysb = 1;
	sysc = 1;

	//print results
	printf("\tTested with 3 passed to size_t\n\t----------\n");
	printf("\ts1:[%s] s2:[%s]\n\tResult:[%d] \n\tExpected:[%d]\n\t"
			"----------\n", a1, a2, fta, sysa);
	printf("\ts1:[%s] s2:[%s]\n\tResult:[%d] \n\tExpected:[%d]\n\t"
			"----------\n", b1, b2, ftb, sysb);
	printf("\ts1:[%s] s2:[%s]\n\tResult:[%d] \n\tExpected:[%d]\n\t"
			"----------\n", c1, c2, ftc, sysc);

	if (fta == sysa && ftb == sysb && ftc == sysc)
		printf("\t//SUCCESS\n\n");
	else
		printf("\t//FAIL\n\n");
}

void	slave_striter(char *c) //SLAVE
{
	//TO UPPER
	if (ft_isalnum(c[0]) == 2)
		c[0] += 32;
}

void	test_striter(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_striter\n");

	void (*fptr)(char *);
	fptr = slave_striter;

	//Declarations
	char a1[] = "Pink FloYD";
	char a2[] = "pink floyd";
	char b1[] = "\"24\" Is \"42\" in ReveRse...";
	char b2[] = "\"24\" is \"42\" in reverse...";
	char c1[] = "BrExit is sTUPid!";
	char c2[] = "brexit is stupid!";

	//Tests 1
	printf("\t[%s] - before\n", a1);
	ft_striter(a1, fptr);
	printf("\t[%s] - after\n\t----------\n", a1);

	//Test 2
	printf("\t[%s] - before\n", b1);
	ft_striter(b1, fptr);
	printf("\t[%s] - after\n\t----------\n", b1);

	//Test 3
	printf("\t[%s] - before\n", c1);
	ft_striter(c1, fptr);
	printf("\t[%s] - after\n\t----------\n", c1);

	if (strcmp(a1, a2) != 0)
		fail = 1;
	if (strcmp(b1, b2) != 0)
		fail = 1;
	if (strcmp(c1, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	slave_striteri(unsigned int n, char *c) //SLAVE
{
	//TO LOWER
	if (n != 0 && ft_isalnum(c[0]) == 2)
		c[0] += 32;
	//TO UPPER
	if (n == 0 && ft_isalnum(c[0]) == 3)
		c[0] -= 32;

}

void	test_striteri(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_striteri\n");

	void (*fptr)(unsigned int, char *);
	fptr = slave_striteri;

	//Declarations
	char a1[] = "Pink FloYD";
	char a2[] = "Pink floyd";
	char b1[] = "\"24\" Is \"42\" in ReveRse...";
	char b2[] = "\"24\" is \"42\" in reverse...";
	char c1[] = "BrExit is sTUPid!";
	char c2[] = "Brexit is stupid!";

	//Tests 1
	printf("\t[%s] - before\n", a1);
	ft_striteri(a1, fptr);
	printf("\t[%s] - after\n\t----------\n", a1);

	//Test 2
	printf("\t[%s] - before\n", b1);
	ft_striteri(b1, fptr);
	printf("\t[%s] - after\n\t----------\n", b1);

	//Test 3
	printf("\t[%s] - before\n", c1);
	ft_striteri(c1, fptr);
	printf("\t[%s] - after\n\t----------\n", c1);

	if (strcmp(a1, a2) != 0)
		fail = 1;
	if (strcmp(b1, b2) != 0)
		fail = 1;
	if (strcmp(c1, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

char	slave_strmap(char c) //SLAVE
{
	//TO UPPER
	if (ft_isalnum(c) == 2)
		c += 32;
	return(c);
}

void	test_strmap(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strmap\n");

	char (*fptr)(char);
	fptr = slave_strmap;

	//Declarations
	char a1[] = "Pink FloYD";
	char a2[] = "pink floyd";
	char *a3;
	char b1[] = "\"24\" Is \"42\" in ReveRse...";
	char b2[] = "\"24\" is \"42\" in reverse...";
	char *b3;
	char c1[] = "BrExit is sTUPid!";
	char c2[] = "brexit is stupid!";
	char *c3;

	//Tests 1
	printf("\t[%s] - before\n", a1);
	a3 = ft_strmap(a1, fptr);
	printf("\t[%s] - after\n\t----------\n", a3);

	//Test 2
	printf("\t[%s] - before\n", b1);
	b3 = ft_strmap(b1, fptr);
	printf("\t[%s] - after\n\t----------\n", b3);

	//Test 3
	printf("\t[%s] - before\n", c1);
	c3 = ft_strmap(c1, fptr);
	printf("\t[%s] - after\n\t----------\n", c3);

	if (strcmp(a3, a2) != 0)
		fail = 1;
	if (strcmp(b3, b2) != 0)
		fail = 1;
	if (strcmp(c3, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

char	slave_strmapi(unsigned int n, char c) //SLAVE
{
	//TO LOWER
	if (n != 0 && ft_isalnum(c) == 2)
		c += 32;
	//TO UPPER
	if (n == 0 && ft_isalnum(c) == 3)
		c -= 32;
	return (c);
}

void	test_strmapi(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strmapi\n");

	char (*fptr)(unsigned int, char);
	fptr = slave_strmapi;

	//Declarations
	char a1[] = "Pink FloYD";
	char a2[] = "Pink floyd";
	char *a3;
	char b1[] = "\"24\" Is \"42\" in ReveRse...";
	char b2[] = "\"24\" is \"42\" in reverse...";
	char *b3;
	char c1[] = "BrExit is sTUPid!";
	char c2[] = "Brexit is stupid!";
	char *c3;

	//Tests 1
	printf("\t[%s] - before\n", a1);
	a3 = ft_strmapi(a1, fptr);
	printf("\t[%s] - after\n\t----------\n", a3);

	//Test 2
	printf("\t[%s] - before\n", b1);
	b3 = ft_strmapi(b1, fptr);
	printf("\t[%s] - after\n\t----------\n", b3);

	//Test 3
	printf("\t[%s] - before\n", c1);
	c3 = ft_strmapi(c1, fptr);
	printf("\t[%s] - after\n\t----------\n", c3);

	if (strcmp(a3, a2) != 0)
		fail = 1;
	if (strcmp(b3, b2) != 0)
		fail = 1;
	if (strcmp(c3, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_memdel(void)
{
	printf("ft_memdel\n\tReview the code below...\n\t----------\n");
	
	int c;
	FILE *file;
	file = fopen("ft_memdel.c", "r");
	ft_putchar('\t');
	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			ft_putchar(c);
	if (c == '\n')
				ft_putchar('\t');
		}
		fclose(file);
	}
	printf("\n\t----------\n\t//REVIEW CODE\n\n");

}

void	test_strdel(void)
{
	printf("ft_strdel\n\tReview the code below...\n\t----------\n");
	
	int c;
	FILE *file;
	file = fopen("ft_strdel.c", "r");
	ft_putchar('\t');
	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			ft_putchar(c);
			if (c == '\n')
				ft_putchar('\t');
		}
		fclose(file);
	}
	printf("\n\t----------\n\t//REVIEW CODE\n\n");

}

void	test_putchar_fd(void)
{	
	ft_putstr_fd("ft_putchar_fd\n\t//SUCCESS\n\n", 1);
}

void	test_putstr_fd(void)
{
	ft_putstr_fd("ft_putstr_fd\n\t//SUCCESS\n\n", 1);
}

void	test_putendl(void)
{
	ft_putendl("ft_putendl\n\tTest statement");
	ft_putstr("\t//SUCCESS(If this is on a new line)\n\n");
}

void	test_putendl_fd(void)
{
	ft_putendl_fd("ft_putendl_fd\n\tTest statement", 1);
	ft_putstr("\t//SUCCESS(If this is on a new line)\n\n");
}

void	test_putnbr_fd(void)
{
	ft_putstr("ft_putnbr_fd\n\t[-2147483648] - Expected\n\t[");
	ft_putnbr_fd(-2147483648, 1);
	ft_putstr("] - Result\n\t[2147483647] - Expected\n\t[");
	ft_putnbr_fd(2147483647, 1);
	ft_putstr("] - Result\n\t[0] - Expected\n\t[");
	ft_putnbr_fd(0, 1);
	ft_putstr("] - Result\n\t[42] - Expected\n\t[");
	ft_putnbr_fd(42, 1);
	ft_putstr("] - Result\n\t//Check results match expected\n\n");
}

void	test_strsub(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strsub\n");

	//Declarations
	char a1[50];
	char *a;
	char b1[50];

	ft_strcpy(a1, "Fast cars are cool cars");
	ft_strcpy(b1, "cars are cool");

	//Test
	printf("\tString 1:[%s]\n\t----------\n", a1);
	a = ft_strsub(a1, 5, 13);
	printf("\t[%s] - Result\n\t[%s] - Expected\n", a, b1);


	//Result
	if (strcmp(a, b1) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strjoin(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strjoin\n");

	//Declarations
	char a1[50];
	char a2[50];
	char *a;
	char b1[50];
	char b2[50];

	ft_strcpy(a1, "Je suis un etudiant d");
	ft_strcpy(a2, "e quarante deux");
	ft_strcpy(b1, "Je suis un etudiant d");
	ft_strcpy(b2, "e quarante deux");

	//Test
	printf("\tString 1:[%s]\n\tString 2:[%s]\n\t----------\n", a1, a2);
	a = ft_strjoin(a1, a2);
	strcat(b1, b2);
	printf("\t[%s] - Result\n\t[%s] - Expected\n", a, b1);


	//Result
	if (strcmp(a, b1) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strtrim(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strtrim\n");

	//Declarations
	char a1[] = "    Red 7   \t";
	char a2[] = "Red 7";
	char *a3;
	char b1[] = "\t Hello Moto\n\t\t";
	char b2[] = "Hello Moto";
	char *b3;
	char c1[] = "Normalne";
	char c2[] = "Normalne";
	char *c3;

	//Tests 1
	printf("\t[%s] - before\n", a1);
	a3 = ft_strtrim(a1);
	printf("\t[%s] - after\n\t----------\n", a3);

	//Test 2
	printf("\t[%s] - before\n", b1);
	b3 = ft_strtrim(b1);
	printf("\t[%s] - after\n\t----------\n", b3);

	//Test 3
	printf("\t[%s] - before\n", c1);
	c3 = ft_strtrim(c1);
	printf("\t[%s] - after\n\t----------\n", c3);

	if (strcmp(a3, a2) != 0)
		fail = 1;
	if (strcmp(b3, b2) != 0)
		fail = 1;
	if (strcmp(c3, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strsplit(void)
{
	int fail;

	fail = 0;

	//Program Name
	printf("ft_strsplit\n");

	//Declarations
	char a1[] = "**This***is***a**string***";
	char a2[] = "string";
	char *a3;
	char b1[] = "ppppAnnpppispppappppmonkeypppppp";
	char b2[] = "Ann";
	char *b3;
	char c1[] = "Normalne";
	char c2[] = "Normalne";
	char *c3;

	//Tests 1
	printf("\t[%s] - before\n", a1);
	a3 = ft_strsplit(a1, '*')[3];
	printf("\t[%s] - after\n\t----------\n", a3);

	//Test 2
	printf("\t[%s] - before\n", b1);
	b3 = ft_strsplit(b1, 'p')[0];
	printf("\t[%s] - after\n\t----------\n", b3);

	//Test 3
	printf("\t[%s] - before\n", c1);
	c3 = ft_strsplit(c1, '1')[0];
	printf("\t[%s] - after\n\t----------\n", c3);

	if (strcmp(a3, a2) != 0)
		fail = 1;
	if (strcmp(b3, b2) != 0)
		fail = 1;
	if (strcmp(c3, c2) != 0)
		fail = 1;

	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_strlen(void)
{
	size_t a;
	size_t b;
	size_t c;
	int fail;

	fail = 0;

	a = ft_strlen("1");
	b = ft_strlen("Ann is a frog");
	c = ft_strlen("     Orange is the new Acers     !   ");
	
	printf("ft_strlen\n");
	printf("\t[%zu]\t\"1\"", a);
	printf("\t[%zu]\t\"Ann is a frog\"", b);
	printf("\t[%zu]\t\"     Orange is the new Acers     !   \"", c);

	if (a != 1)
		fail = 1;
	if (b != 13)
		fail = 1;
	if (a != 37)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_lstnew(void)
{
	//Declaraitons
	char		one_content[50];
	char		test_content[50];
	t_list		*test_next;
	size_t		one_size;
	size_t		test_size;
	t_list		*one;
	int			fail;

	//Assignations
	ft_strcpy(one_content, "I wrote this in Vietnam");
	ft_strcpy(test_content, "I wrote this in Vietnam");
	one_size = ft_strlen(one_content) + 1;
	test_size = ft_strlen(test_content) + 1;
	test_next = NULL;
	fail = 0;

	//Function name
	printf("ft_lstnew\n");
	
	//Function use
	one = ft_lstnew(one_content, one_size);
	
	//Print results
	printf("\tcontent:\n\t[%s] - Expected\n\t[%s] - Result\n\t----------\n",
			test_content, one->content);
	printf("\tcontent_size\n\t[%zu] - Expected\n\t[%zu] - Result\n\t----------\n",
			test_size, one->content_size);
	printf("\tnext\n\t[%p] - Expected\n\t[%p] - Result\n\t----------\n",
			test_next, one->next);

	//Comparison
	if (ft_strcmp(test_content, one->content) != 0)
		fail = 1;
	if (test_size != one->content_size)
		fail = 1;
	if (test_next != one->next)
		fail = 1;
	(fail) ? printf("\t//FAIL\n\n") : printf("\t//SUCCESS\n\n");
}

void	test_lstdelone(void)
{
	//Declaraitons
	char		one_content[50];
	char		two_content[50];
	size_t		one_size;
	size_t		two_size;
	t_list		*one;
	t_list		*two;
	t_list		*test_next;
	int			fail;
	void		(*fptr)(void *, size_t);

	//Assignations
	ft_strcpy(one_content, "One");
	ft_strcpy(two_content, "Two");
	one_size = ft_strlen(one_content) + 1;
	two_size = ft_strlen(two_content) + 1;
	test_next = NULL;
	fail = 0;
	one = ft_lstnew(one_content, one_size);
	one->next = ft_lstnew(two_content, two_size);
	two = one->next;
	fptr = ft_bzero;

	//Function name
	printf("ft_lstdelone\n");

	if (one->next)
		printf("\tAllocation - success.\n");
	else
	{
		printf("\tAllocation - failed\n");
		fail = 1;
	}

	//Function useage
	ft_lstdelone(&(one->next),fptr);

	if (!fail && !one->next)
		printf("\tNULL pointer - success\n");
	else if (!fail && one->next)
	{
		printf("\tNULL pointer - failed\n");
		fail = 1;
	}

	if (ft_strcmp(two->content, two_content) != 0)
		printf("\tdel function pointer applied - success\n");
	else
	{
		printf("\tdel function pointer applied - failed\n");
		fail = 1;
	}

	printf("\t----------\n\tReview the code below...\n\t----------\n");	
	int c;
	FILE *file;
	file = fopen("ft_lstdelone.c", "r");
	ft_putchar('\t');
	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			ft_putchar(c);
			if (c == '\n')
				ft_putchar('\t');
		}
		fclose(file);
	}
		
	//Comparison
	(fail) ? printf("//FAIL\n\n") : printf("//SUCCESS - if free occurs above\n\n");
}


int		main(void)
{
	//test_putchar();
	//test_putstr();
	//test_putnbr();
	//test_atoi();
	//test_strcpy();
	//test_strncpy();
	//test_strstr();
	//test_strcmp();
	//test_strncmp();
	//test_strupcase();
	//test_strlowcase();
	//test_strcapitalize();
	//test_str_is_alpha();
	//test_str_is_numeric();
	//test_str_is_lowercase();
	//test_str_is_uppercase();
	//test_str_is_printable();
	//test_strcat();
	//test_strncat();
	//test_strlcat();
	//test_strlcpy();
	//test_bzero();
	//test_strdup();
	//test_strnstr();
	//test_isalpha();
	//test_isdigit();
	//test_isalnum();
	//test_isascii();
	//test_isprint();
	//test_toupper();
	//test_tolower();
	//test_memset();
	//test_memcpy();
	//test_memccpy();
	//test_memmove();
	//test_strchr();
	//test_strrchr();
	//test_memchr();
	//test_memcmp();
	//test_itoa();
	//test_strnew();
	//test_memalloc();
	//test_strclr();
	//test_strequ();
	//test_strnequ();
	//test_striter();
	//test_striteri();
	//test_strmap();
	//test_strmapi();
	//test_memdel();
	//test_strdel();
	//test_putchar_fd();
	//test_putstr_fd();
	//test_putendl();
	//test_putendl_fd();
	//test_putnbr_fd();
	//test_strsub();
	//test_strjoin();
	//test_strtrim();
	//test_strsplit();
	//test_strlen();
	//test_lstmap();
	//test_lstdelone();
	
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_strlen();
	test_strdup();
	test_strcpy();
	test_strncpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strstr();
	test_strnstr();
	test_strcmp();
	test_strncmp();
	test_atoi();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_memalloc();
	test_memdel();
	test_strnew();
	test_strdel();
	test_strclr();
	test_striter();
	test_striteri();
	test_strmap();
	test_strmapi();
	test_strequ();
	test_strnequ();
	test_strsub();
	test_strjoin();
	test_strtrim();
	test_strsplit();
	test_itoa();
	test_putchar();
	test_putstr();
	test_putendl();
	test_putnbr();
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();
	test_lstnew();
	test_lstdelone();
	return (0);
}
