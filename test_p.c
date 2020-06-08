
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
	int				p = &t;
	g_pass 			= 0;
	g_test			= 0;

printf("\n____________________________________\nPOINTER (%%p): \n\n");
	
		printf(			"arg 1");
	test =	printf(			" 	|%p|\n", 1);
	t =	ft_printf(			" 	|%p|\n", 1);
	result(test, t);
		printf(			"arg -1");
	test =	printf(			" 	|%p|\n", -1);
	t =	ft_printf(			" 	|%p|\n", -1);
	result(test, t);
		printf(			"no arg");
	test =	printf(			" 	|%p|\n");
	t =	ft_printf(			" 	|%p|\n");
	result(test, t);
		printf(			"&c");
	test =	printf(			" 	|%p|\n", &c);
	t =	ft_printf(			" 	|%p|\n", &c);
	result(test, t);
		printf(			"&s");
	test =	printf(			" 	|%p|\n", &s);
	t =	ft_printf(			" 	|%p|\n", &s);
	result(test, t);
		printf(			"&d");
	test =	printf(			" 	|%p|\n", &d);
	t =	ft_printf(			" 	|%p|\n", &d);
	result(test, t);
		printf(			"&15c");
	test =	printf(			" 	|%15p|\n", &c);
	t =	ft_printf(			" 	|%15p|\n", &c);
	result(test, t);
		printf(			"15.20");
	test =	printf(			" 	|%15.20p|\n", &s);
	t =	ft_printf(			" 	|%15.20p|\n", &s);
	result(test, t);

printf("_____________________________________\nZERO: \n\n");
	
		printf(			"p,0");
	test =	printf(			"		|%p|\n", 0);
	t =	ft_printf(			"		|%p|\n", 0);
	result(test, t);
		printf(			".0p");
	test =	printf(			"		|%.0p|\n", 0);
	t =	ft_printf(			"		|%.0p|\n", 0);
	result(test, t);
		printf(			"0p");
	test =	printf(			"		|%0p|\n", 0);
	t =	ft_printf(			"		|%0p|\n", 0);
	result(test, t);
		printf(			"-p");
	test =	printf(			"		|%-p|\n", 0);
	t =	ft_printf(			"		|%-p|\n", 0);
	result(test, t);
		printf(			" p");
	test =	printf(			"		|% p|\n", 0);
	t =	ft_printf(			"		|% p|\n", 0);
	result(test, t);
		printf(			"+p");
	test =	printf(			"		|%+p|\n", 0);
	t =	ft_printf(			"		|%+p|\n", 0);
	result(test, t);
		printf(			"10p");
	test =	printf(			"		|%10p|\n", 0);
	t =	ft_printf(			"		|%10p|\n", 0);
	result(test, t);
		printf(			"-10p");
	test =	printf(			"		|%-10p|\n", 0);
	t =	ft_printf(			"		|%-10p|\n", 0);
	result(test, t);
		printf(			"010p");
	test =	printf(			"		|%010p|\n", 0);
	t =	ft_printf(			"		|%010p|\n", 0);
	result(test, t);
		printf(			"-10.p");
	test =	printf(			"		|%-10.p|\n", 0);
	t =	ft_printf(			"		|%-10.p|\n", 0);
	result(test, t);
		printf(			"10.p");
	test =	printf(			"		|%10.p|\n", 0);
	t =	ft_printf(			"		|%10.p|\n", 0);
	result(test, t);
		printf(			"010.p");
	test =	printf(			"		|%010.p|\n", 0);
	t =	ft_printf(			"		|%010.p|\n", 0);
	result(test, t);
		printf(			"0.p");
	test =	printf(			"		|%0.p|\n", 0);
	t =	ft_printf(			"		|%0.p|\n", 0);
	result(test, t);
		printf(			".p");
	test =	printf(			"		|%.p|\n", 0);
	t =	ft_printf(			"		|%.p|\n", 0);
	result(test, t);
		printf(			".0p");
	test =	printf(			"		|%.0p|\n", 0);
	t =	ft_printf(			"		|%.0p|\n", 0);
	result(test, t);
		printf(			".5p");
	test =	printf(			"		|%.5p|\n", 0);
	t =	ft_printf(			"		|%.5p|\n", 0);
	result(test, t);
		printf(			"5.2p");
	test =	printf(			"		|%9.2p|\n", 0);
	t =	ft_printf(			"		|%9.2p|\n", 0);
	result(test, t);
		printf(			"10.2p");
	test =	printf(			"		|%10.2p|\n", 0);
	t =	ft_printf(			"		|%10.2p|\n", 0);
	result(test, t);
		printf(			"2.10p");
	test =	printf(			"		|%2.10p|\n", 0);
	t =	ft_printf(			"		|%2.10p|\n", 0);
	result(test, t);

printf("\n_____________________________________\nFLAGS: \n\n");


		printf(			"-p");
	test =	printf(			"	|%-p|\n", i);
	t =	ft_printf(			"	|%-p|\n", i);
	result(test, t);
		printf(			" p");
	test =	printf(			"	|% p|\n", i);
	t =	ft_printf(			"	|% p|\n", i);
	result(test, t);
		printf(			"+p");
	test =	printf(			"	|%+p|\n", i);
	t =	ft_printf(			"	|%+p|\n", i);
	result(test, t);
		printf(			"0p");
	test =	printf(			"	|%0p|\n", i);
	t =	ft_printf(			"	|%0p|\n", i);
	result(test, t);
		printf(			".p");
	test =	printf(			"	|%.p|\n", i);
	t =	ft_printf(			"	|%.p|\n", i);
	result(test, t);
		printf(			".5p");
	test =	printf(			"	|%.5p|\n", i);
	t =	ft_printf(			"	|%.5p|\n", i);
	result(test, t);
		printf(			".0p");
	test =	printf(			"	|%.0p|\n", i);
	t =	ft_printf(			"	|%.0p|\n", i);
	result(test, t);
		printf(			"-11.2p");
	test =	printf(			"	|%-11.2p|\n", -1);
	t =	ft_printf(			"	|%-11.2p|\n", -1);
	result(test, t);
		printf(			"11.2p");
	test =	printf(			"	|%11.2p|\n", -1);
	t =	ft_printf(			"	|%11.2p|\n", -1);
	result(test, t);
		printf(			"2.11p");
	test =	printf(			"	|%2.11p|\n", -1);
	t =	ft_printf(			"	|%2.11p|\n", -1);
	result(test, t);
		printf(			"-15.11p");
	test =	printf(			"	|%-15.11p|\n", -1);
	t =	ft_printf(			"	|%-15.11p|\n", -1);
	result(test, t);
		printf(			"15.11p");
	test =	printf(			"	|%15.11p|\n", -1);
	t =	ft_printf(			"	|%15.11p|\n", -1);
	result(test, t);
		printf(			"11.15p");
	test =	printf(			"	|%11.15p|\n", -1);
	t =	ft_printf(			"	|%11.15p|\n", -1);
	result(test, t);
		printf(			"00.15p");
	test =	printf(			"	|%00.15p|\n", -1);
	t =	ft_printf(			"	|%00.15p|\n", -1);
	result(test, t);
		printf(			"015p");
	test =	printf(			"	|%015p|\n", -1);
	t =	ft_printf(			"	|%015p|\n", -1);
	result(test, t);
		printf(			"15p");
	test =	printf(			"	|%15p|\n", -1);
	t =	ft_printf(			"	|%15p|\n", -1);
	result(test, t);
		printf(			"-15p");
	test =	printf(			"	|%-15p|\n", -1);
	t =	ft_printf(			"	|%-15p|\n", -1);
	result(test, t);


	printf("\n  [Above: %d | %d OK]\n\n", g_test, g_pass);

	return (0);
}
