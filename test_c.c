
#include "test.h"

int		main(void)
{
	int				test;
	int				t;
	unsigned int	i = 2147483647 + 1;
	int				d = -0;
	char			c = '*';
	g_pass 			= 0;
	g_test			= 0;

	printf("_____________________________________\nCHARS: \n\n");

	test =	printf(			"%%c 		|%c|\n", c);
	t =	ft_printf(			"%%c 		|%c|\n", c);
	result(test, t);
	test =	printf(			"%%.c 		|%.c|\n", c);
	t =	ft_printf(			"%%.c 		|%.c|\n", c);
	result(test, t);
	test =	printf(			"%%-4c 		|%-4c|\n", c);
	t =	ft_printf(			"%%-4c 		|%-4c|\n", c);
	result(test, t);
	test =	printf(			"%%11c		|%11c|\n", c);
	t =	ft_printf(			"%%11c		|%11c|\n", c);
	result(test, t);
	test =	printf(			"%%*c		|%*c|\n", 4, c);
	t =	ft_printf(			"%%*c		|%*c|\n", 4, c);
	result(test, t);
	test =	printf(			"%%*c,-		|%*c|\n", -4, c);
	t =	ft_printf(			"%%*c,-		|%*c|\n", -4, c);
	result(test, t);
	test =	printf(			"%%*c,0		|%*c|\n", 0, c);
	t =	ft_printf(			"%%*c,0		|%*c|\n", 0, c);
	result(test, t);
	test =	printf(			"%%c 		|%c|\n", '\0');
	t =	ft_printf(			"%%c 		|%c|\n", '\0');
	result(test, t);
	test =	printf(			"%%c 		|%c|\n", '\t');
	t =	ft_printf(			"%%c 		|%c|\n", '\t');
	result(test, t);
	test =	printf(			"%%c 		|%c|\n", '\r');
	t =	ft_printf(			"%%c 		|%c|\n", '\r');
	result(test, t);
	test =	printf(			"%%-4c 		|%-4c|\n", c);
	t =	ft_printf(			"%%-4c 		|%-4c|\n", c);
	result(test, t);
	test =	printf(			"%%cc		|%c%c|\n", c, i);
	t =	ft_printf(			"%%cc		|%c%c|\n", c, i);
	result(test, t);
	test =	printf(			"%%ccc		|%c%c%c|\n", c, d, 7);
	t =	ft_printf(			"%%ccc		|%c%c%c|\n", c, d, 7);
	result(test, t);
	test =	printf(			"%%-c 		|%-c|\n", c);
	t =	ft_printf(			"%%-c 		|%-c|\n", c);
	result(test, t);
	test =	printf(			"%%--c 		|%-*c|\n", -3, c);
	t =	ft_printf(			"%%--c 		|%-*c|\n", -3, c);
	result(test, t);
	test =	printf(			"%%c 		|%c|\n", -0);
	t =	ft_printf(			"%%c 		|%c|\n", -0);
	result(test, t);
	test =	printf(			"lvlup 		|%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%1c%3c|\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.');
	t =	ft_printf(			"lvlup 		|%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%1c%3c|\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.');
	result(test, t);
	test =	printf(			"lvl - 		|%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-1c%-3c|\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.');
	t =	ft_printf(			"lvl - 		|%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-1c%-3c|\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.');
	result(test, t);
	
	printf("_____________________________________\nWARNINGS: \n\n");

	test =	printf(			"no arg 		|%c|\n");
	t =	ft_printf(			"no arg 		|%c|\n");
	result(test, t);
	test =	printf(			"%%*c,4		|%.*c|\n", 4, c);
	t =	ft_printf(			"%%*c,4		|%.*c|\n", 4, c);
	result(test, t);
	test =	printf(			"%%.10c		|%.10c|\n", c);
	t =	ft_printf(			"%%.10c		|%.10c|\n", c);
	result(test, t);
	test =	printf(			"NULL 		|%c|\n", NULL);
	t =	ft_printf(			"NULL 		|%c|\n", NULL);
	result(test, t);
	test =	printf(			"%%0c 		|%0c|\n", c);
	t =	ft_printf(			"%%0c 		|%0c|\n", c);
	result(test, t);
	test =	printf(			"%%05c 		|%05c|\n", c);
	t =	ft_printf(			"%%05c 		|%05c|\n", c);
	result(test, t);
	test =	printf(			"%%-05c 		|%-05c|\n", c);
	t =	ft_printf(			"%%-05c 		|%-05c|\n", c);
	result(test, t);
	test = printf(			"-0*0: 		|%-0*c|\n", 0, 0);
	t = ft_printf(			"-0*0: 		|%-0*c|\n", 0, 0);
	result(test, t);
	test = printf(			"-0*3: 		|%-0*c|\n", 3, 0);
	t = ft_printf(			"-0*3: 		|%-0*c|\n", 3, 0);
	result(test, t);

	printf("\n_____________________________________\ncharacters \n");

	printf("\n[RESULT: \x1b[33m%d\x1b[0m correct out of \x1b[33m%d\x1b[0m tests]", g_pass, g_test);
	if (g_pass != g_test)
		printf("\x1b[31m FAILS:\x1b[0m%d", g_test - g_pass);
	printf("\n\n");
	return (0);
}
