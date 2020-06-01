
#include "test.h"

void	result(int test, int ft)
{
	if (test == ft)
	{
		printf("				PASS\n");
		g_pass++;
	}
	else
	{
		printf("				FAIL\n");
		printf("				pf[%d]\n", test - 5);
		printf("				ft[%d]\n\n", ft - 5);
	}
	g_test++;
}

int		main(void)
{
	int				test;
	unsigned int	i = -7;
	int				d = 55;
	char			c = 'c';
	char			*s = "Here";
	int				t;
	g_pass 			= 0;
	g_test			= 0;

	printf("\n____________________________________\nDONE: \n\n");

//____________________________________________________________ POINTER
	test =	printf(			"%%p 	|%p|\n", &c);
	t =	ft_printf(			"%%p 	|%p|\n", &c);
	result(test, t);

printf("\n_____________________________________\nTO DO: \n\n");
	
	test =	printf(			"%%-p 	|%-p|\n", &c);
	t =	ft_printf(			"%%-p 	|%-p|\n", &c);
	result(test, t);
	test =	printf(			"%%0p 	|%0p|\n", &c);
	t =	ft_printf(			"%%0p 	|%0p|\n", &c);
	result(test, t);
	test =	printf(			"%% p 	|% p|\n", &c);
	t =	ft_printf(			"%% p 	|% p|\n", &c);
	result(test, t);
	test =	printf(			"%%3p 	|%3p|\n", &c);
	t =	ft_printf(			"%%3p 	|%3p|\n", &c);
	result(test, t);
	test =	printf(			"%%p 	|%p|\n", 0);
	t =	ft_printf(			"%%p 	|%p|\n", 0);
	result(test, t);
	test =	printf(			"%%.p 	|%.p|\n", &c);
	t =	ft_printf(			"%%.p 	|%.p|\n", &c);
	result(test, t);
	test =	printf(			"%%.0p 	|%.0p|\n", 0);
	t =	ft_printf(			"%%.0p 	|%.0p|\n", 0);
	result(test, t);
	test =	printf(		"%%9.2p 	|%9.2p|\n", &c);
	t =	ft_printf(		"%%9.2p 	|%9.2p|\n", &c);
	result(test, t);

	printf("\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________ TO FIX: \n\n");

	test =	printf(			"%%p,-		|%p|\n", &i);
	t =	ft_printf(			"%%p,-		|%p|\n", &i);
	result(test, t);

	printf("\n RESULT: %d correct out of %d tests\n\n", g_pass, g_test);

	return (0);
}
