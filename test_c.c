
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
	test =	printf(			"%%c 		|%c|\n", NULL);
	t =	ft_printf(			"%%c 		|%c|\n", NULL);
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

	test = printf(" (%d)\n", printf("-0*0: |%-0*c|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*c|", 0, 0));
	result(test, t);

	test = printf(" (%d)\n", printf("-0*3: |%-0*c|", 3, 0));
	t = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*c|", 3, 0));
	result(test, t);

	printf("\n RESULT: %d correct out of %d tests\n\n", g_pass, g_test);

	return (0);
}
