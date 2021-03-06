
#include "test.h"

int		main(void)
{
	int				test;
	unsigned int	i = -55;
	int				d = 55;
	int				t;
	g_pass 			= 0;
	g_test			= 0;

	printf("\n____________________________________\nDONE: \n\n");
	
		printf(			"arg 1");
	test =	printf(			" 	|%u|\n", 1);
	t =	ft_printf(			" 	|%u|\n", 1);
	result(test, t);
		printf(			"arg -1");
	test =	printf(			" 	|%u|\n", -1);
	t =	ft_printf(			" 	|%u|\n", -1);
	result(test, t);
		printf(			"no arg");
	test =	printf(			" 	|%u|\n");
	t =	ft_printf(			" 	|%u|\n");
	result(test, t);
	test =	printf(		"%%u,-		|%u|\n", i);
	t =	ft_printf(		"%%u,-		|%u|\n", i);
	result(test, t);
	test =	printf(		"%%u,&		|%u|\n", &i);
	t =	ft_printf(		"%%u,&		|%u|\n", &i);
	result(test, t);

printf("\n_____________________________________\nZERO: \n\n");
	
		printf(			"p,0");
	test =	printf(			"		|%u|\n", 0);
	t =	ft_printf(			"		|%u|\n", 0);
	result(test, t);
		printf(			"-u");
	test =	printf(			"		|%-u|\n", 0);
	t =	ft_printf(			"		|%-u|\n", 0);
	result(test, t);
		printf(			"0u");
	test =	printf(			"		|%0u|\n", 0);
	t =	ft_printf(			"		|%0u|\n", 0);
	result(test, t);
		printf(			"10u");
	test =	printf(			"		|%10u|\n", 0);
	t =	ft_printf(			"		|%10u|\n", 0);
	result(test, t);
		printf(			"-10u");
	test =	printf(			"		|%-10u|\n", 0);
	t =	ft_printf(			"		|%-10u|\n", 0);
	result(test, t);
		printf(			"010u");
	test =	printf(			"		|%010u|\n", 0);
	t =	ft_printf(			"		|%010u|\n", 0);
	result(test, t);
		printf(			"-10.u");
	test =	printf(			"		|%-10.u|\n", 0);
	t =	ft_printf(			"		|%-10.u|\n", 0);
	result(test, t);
		printf(			"10.u");
	test =	printf(			"		|%10.u|\n", 0);
	t =	ft_printf(			"		|%10.u|\n", 0);
	result(test, t);
		printf(			"010.u");
	test =	printf(			"		|%010.u|\n", 0);
	t =	ft_printf(			"		|%010.u|\n", 0);
	result(test, t);
		printf(			"0.u");
	test =	printf(			"		|%0.u|\n", 0);
	t =	ft_printf(			"		|%0.u|\n", 0);
	result(test, t);
		printf(			".u");
	test =	printf(			"		|%.u|\n", 0);
	t =	ft_printf(			"		|%.u|\n", 0);
	result(test, t);
		printf(			".0u");
	test =	printf(			"		|%.0u|\n", 0);
	t =	ft_printf(			"		|%.0u|\n", 0);
	result(test, t);
		printf(			"1.1u");
	test =	printf(			"		|%1.1u|\n", 0);
	t =	ft_printf(			"		|%1.1u|\n", 0);
	result(test, t);
		printf(			".5u");
	test =	printf(			"		|%.5u|\n", 0);
	t =	ft_printf(			"		|%.5u|\n", 0);
	result(test, t);
		printf(			"5.2u");
	test =	printf(			"		|%5.2u|\n", 0);
	t =	ft_printf(			"		|%5.2u|\n", 0);
	result(test, t);
		printf(			"08.5u");
	test =	printf(			"		|%08.5u|\n", 0);
	t =	ft_printf(			"		|%08.5u|\n", 0);
	result(test, t);
		printf(			"-8.5u");
	test =	printf(			"		|%-8.5u|\n", 0);
	t =	ft_printf(			"		|%-8.5u|\n", 0);
	result(test, t);
		printf(			"10.2u");
	test =	printf(			"		|%10.2u|\n", 0);
	t =	ft_printf(			"		|%10.2u|\n", 0);
	result(test, t);
		printf(			"2.10u");
	test =	printf(			"		|%2.10u|\n", 0);
	t =	ft_printf(			"		|%2.10u|\n", 0);
	result(test, t);

printf("\n_____________________________________\nNEGATIVE: \n\n");

	printf(			"-u");
	test =	printf(			"	|%-u|\n", i);
	t =	ft_printf(			"	|%-u|\n", i);
	result(test, t);
		printf(			" u");
	test =	printf(			"	|% u|\n", i);
	t =	ft_printf(			"	|% u|\n", i);
	result(test, t);
		printf(			"+u");
	test =	printf(			"	|%+u|\n", i);
	t =	ft_printf(			"	|%+u|\n", i);
	result(test, t);
		printf(			"0u");
	test =	printf(			"	|%0u|\n", i);
	t =	ft_printf(			"	|%0u|\n", i);
	result(test, t);
		printf(			".u");
	test =	printf(			"	|%.u|\n", i);
	t =	ft_printf(			"	|%.u|\n", i);
	result(test, t);
		printf(			".5u");
	test =	printf(			"	|%.5u|\n", i);
	t =	ft_printf(			"	|%.5u|\n", i);
	result(test, t);
		printf(			".0u");
	test =	printf(			"	|%.0u|\n", i);
	t =	ft_printf(			"	|%.0u|\n", i);
	result(test, t);
		printf(			"-11.2u");
	test =	printf(			"	|%-11.2u|\n", i);
	t =	ft_printf(			"	|%-11.2u|\n", i);
	result(test, t);
		printf(			"11.2u");
	test =	printf(			"	|%11.2u|\n", i);
	t =	ft_printf(			"	|%11.2u|\n", i);
	result(test, t);
		printf(			"2.11u");
	test =	printf(			"	|%2.11u|\n", i);
	t =	ft_printf(			"	|%2.11u|\n", i);
	result(test, t);
		printf(			"-15.11u");
	test =	printf(			"	|%-15.11u|\n", i);
	t =	ft_printf(			"	|%-15.11u|\n", i);
	result(test, t);
		printf(			"15.11u");
	test =	printf(			"	|%15.11u|\n", i);
	t =	ft_printf(			"	|%15.11u|\n", i);
	result(test, t);
		printf(			"11.15u");
	test =	printf(			"	|%11.15u|\n", i);
	t =	ft_printf(			"	|%11.15u|\n", i);
	result(test, t);
		printf(			"00.15u");
	test =	printf(			"	|%00.15u|\n", i);
	t =	ft_printf(			"	|%00.15u|\n", i);
	result(test, t);
		printf(			"015u");
	test =	printf(			"	|%015u|\n", i);
	t =	ft_printf(			"	|%015u|\n", i);
	result(test, t);
		printf(			"15u");
	test =	printf(			"	|%15u|\n", i);
	t =	ft_printf(			"	|%15u|\n", i);
	result(test, t);
		printf(			"-15u");
	test =	printf(			"	|%-15u|\n", i);
	t =	ft_printf(			"	|%-15u|\n", i);
	result(test, t);
		printf(			"08.3u");
	test =	printf(			"	|%08.3u|\n", i);
	t =	ft_printf(			"	|%08.3u|\n", i);
	result(test, t);
		printf(			"08.3u");
	test =	printf(			"	|%08.3u|\n", i);
	t =	ft_printf(			"	|%08.3u|\n", i);
	result(test, t);
		printf(			"-8.3u");
	test =	printf(			"	|%-8.3u|\n", i);
	t =	ft_printf(			"	|%-8.3u|\n", i);
	result(test, t);
		printf(			"8.5u");
	test =	printf(			"	|%-8.5u|\n", i);
	t =	ft_printf(			"	|%-8.5u|\n", i);
	result(test, t);
		printf(			"00.15u");
	test =	printf(			"	|%00.15u|\n", i);
	t =	ft_printf(			"	|%00.15u|\n", i);
	result(test, t);

printf("\n_____________________________________\nFLAGS: \n\n");

		printf(			"-u");
	test =	printf(			"	|%-u|\n", d);
	t =	ft_printf(			"	|%-u|\n", d);
	result(test, t);
		printf(			"0u");
	test =	printf(			"	|%0u|\n", d);
	t =	ft_printf(			"	|%0u|\n", d);
	result(test, t);
		printf(			"5u");
	test =	printf(			"	|%5u|\n", d);
	t =	ft_printf(			"	|%5u|\n", d);
	result(test, t);
		printf(			"05u");
	test =	printf(			"	|%0u|\n", d);
	t =	ft_printf(			"	|%0u|\n", d);
	result(test, t);
		printf(			".u");
	test =	printf(			"	|%.u|\n", d);
	t =	ft_printf(			"	|%.u|\n", d);
	result(test, t);
		printf(			".5u");
	test =	printf(			"	|%.5u|\n", d);
	t =	ft_printf(			"	|%.5u|\n", d);
	result(test, t);
		printf(			".0u");
	test =	printf(			"	|%.0u|\n", d);
	t =	ft_printf(			"	|%.0u|\n", d);
	result(test, t);
		printf(			"-11.2u");
	test =	printf(			"	|%-11.2u|\n", d);
	t =	ft_printf(			"	|%-11.2u|\n", d);
	result(test, t);
		printf(			"11.2u");
	test =	printf(			"	|%11.2u|\n", d);
	t =	ft_printf(			"	|%11.2u|\n", d);
	result(test, t);
		printf(			"2.11u");
	test =	printf(			"	|%2.11u|\n", d);
	t =	ft_printf(			"	|%2.11u|\n", d);
	result(test, t);
		printf(			"-15.11u");
	test =	printf(			"	|%-15.11u|\n", d);
	t =	ft_printf(			"	|%-15.11u|\n", d);
	result(test, t);
		printf(			"15.11u");
	test =	printf(			"	|%15.11u|\n", d);
	t =	ft_printf(			"	|%15.11u|\n", d);
	result(test, t);
		printf(			"11.15u");
	test =	printf(			"	|%11.15u|\n", d);
	t =	ft_printf(			"	|%11.15u|\n", d);
	result(test, t);
		printf(			"00.15u");
	test =	printf(			"	|%00.15u|\n", d);
	t =	ft_printf(			"	|%00.15u|\n", d);
	result(test, t);
		printf(			"015u");
	test =	printf(			"	|%015u|\n", d);
	t =	ft_printf(			"	|%015u|\n", d);
	result(test, t);
		printf(			"15u");
	test =	printf(			"	|%15u|\n", d);
	t =	ft_printf(			"	|%15u|\n", d);
	result(test, t);
		printf(			"-15u");
	test =	printf(			"	|%-15u|\n", d);
	t =	ft_printf(			"	|%-15u|\n", d);
	result(test, t);
		printf(			"00.15u");
	test =	printf(			"	|%00.15u|\n", 11);
	t =	ft_printf(			"	|%00.15u|\n", 11);
	result(test, t);
		printf(			"08.5u");
	test =	printf(			"	|%08.5u|\n", 1);
	t =	ft_printf(			"	|%08.5u|\n", 1);
	result(test, t);
		printf(			"08.5u");
	test =	printf(			"	|%08.5u|\n", 34);
	t =	ft_printf(			"	|%08.5u|\n", 34);
	result(test, t);
		printf(			"-8.5u");
	test =	printf(			"	|%-8.5u|\n", 34);
	t =	ft_printf(			"	|%-8.5u|\n", 34);
	result(test, t);
		printf(			"8.5u");
	test =	printf(			"	|%8.5u|\n", 534117);
	t =	ft_printf(			"	|%8.5u|\n", 534117);
	result(test, t);
		printf(			"-8.3u");
	test =	printf(			"	|%-8.3u|\n", 8375);
	t =	ft_printf(			"	|%-8.3u|\n", 8375);
	result(test, t);
		printf(			"8.3u");
	test =	printf(			"	|%8.3u|\n", 8375);
	t =	ft_printf(			"	|%8.3u|\n", 8375);
	result(test, t);
		printf(			"08.3u");
	test =	printf(			"	|%08.3u|\n", 8375);
	t =	ft_printf(			"	|%08.3u|\n", 8375);
	result(test, t);
		printf(			"08.2u");
	test =	printf(			"	|%08.2u|\n", 8375);
	t =	ft_printf(			"	|%08.2u|\n", 8375);
	result(test, t);
		printf(			"0*u");
	test =	printf(			"	|%0*u|\n", 10, 8375);
	t =	ft_printf(			"	|%0*u|\n", 10, 8375);
	result(test, t);
		printf(			"0*.*u");
	test =	printf(			"	|%0*u|\n", 10, 5, 8375);
	t =	ft_printf(			"	|%0*u|\n", 10, 5, 8375);
	result(test, t);
		printf(			"8.10u");
	test =	printf(			"	|%8.10u|\n", 8375);
	t =	ft_printf(			"	|%8.10u|\n", 8375);
	result(test, t);
		printf(			".*u");
	test =	printf(			"	|%.*u|\n", -3, 8375);
	t =	ft_printf(			"	|%.*u|\n", -3, 8375);
	result(test, t);
	
	printf("\n  [Above: %d | %d OK]\n", g_test, g_pass);

printf("_____________________________________\nBONUS: \n\n");
		printf(			" u");
	test =	printf(			"		|% u|\n", 0);
	t =	ft_printf(			"		|% u|\n", 0);
	result(test, t);
		printf(			"+u");
	test =	printf(			"		|%+u|\n", 0);
	t =	ft_printf(			"		|%+u|\n", 0);
	result(test, t);

	printf("\n_____________________________________\nunsigned \n");

	printf("\n[RESULT: \x1b[33m%d\x1b[0m correct out of \x1b[33m%d\x1b[0m tests]", g_pass, g_test);
	if (g_pass != g_test)
		printf("\x1b[31m FAILS:\x1b[0m%d", g_test - g_pass);
	printf("\n\n");

	return (0);
}
