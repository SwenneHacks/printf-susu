
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
	int				t;
	g_pass 			= 0;
	g_test			= 0;

printf("_____________________________________\nBASICS:\n\n");

		printf(			"%%i");
	test =	printf(			"		|%i|\n", 7);
	t =	ft_printf(			"		|%i|\n", 7);
	result(test, t);
		printf(			"%%d");
	test =	printf(			" 		|%d|\n", 7);
	t =	ft_printf(			" 		|%d|\n", 7);
	result(test, t);
		printf(			"%%05d");
	test =	printf(			" 		|%05d|\n", 7);
	t =	ft_printf(			" 		|%05d|\n", 7);
	result(test, t);
		printf(			"%%5d");
	test =	printf(			" 		|%5d|\n", 7);
	t =	ft_printf(			" 		|%5d|\n", 7);
	result(test, t);
		printf(			"%%*d");
	test =	printf(			"		|%*d|\n", 4, +7);
	t =	ft_printf(			"		|%*d|\n", 4, +7);
	result(test, t);
		printf(			"%%00011d");
	test =	printf(			"		|%00011d|\n", 7);
	t =	ft_printf(			"		|%00011d|\n", 7);
	result(test, t);

printf("_____________________________________\nPRECISION:\n\n");

		printf(			"%%.1d");
	test =	printf(			"		|%.1d|\n", 55);
	t =	ft_printf(			"		|%.1d|\n", 55);
	result(test, t);
		printf(			"%%5.1d");
	test =	printf(			"		|%5.1d|\n", 55);
	t =	ft_printf(			"		|%5.1d|\n", 55);
	result(test, t);
		printf(			"%%8.5d");
	test =	printf(			"		|%8.5d|\n", 55);
	t =	ft_printf(			"		|%8.5d|\n", 55);
	result(test, t);
		printf(			"%%.5d");
	test =	printf(			"		|%.5d|\n", 55);
	t =	ft_printf(			"		|%.5d|\n", 55);
	result(test, t);
		printf(			"%%3.7d");
	test =	printf(			"		|%3.7d|\n", 55);
	t =	ft_printf(			"		|%3.7d|\n", 55);
	result(test, t);
		printf(			"%%-3.7d");
	test =	printf(			"		|%-3.7d|\n", 3267);
	t =	ft_printf(			"		|%-3.7d|\n", 3267);
	result(test, t);
		printf(			"%%-8.5d");
	test =	printf(			"		|%-8.5d|\n", 55);
	t =	ft_printf(			"		|%-8.5d|\n", 55);
	result(test, t);
		printf(			"%%-8.3d");
	test =	printf(			"		|%-8.3d|\n", 8375);
	t =	ft_printf(			"		|%-8.3d|\n", 8375);
	result(test, t);
		printf(			"%%-3.3d");
	test =	printf(			"		|%-3.3d|\n", 6983);
	t =	ft_printf(			"		|%-3.3d|\n", 6983);
	result(test, t);
		printf(			"%%8.5d");
	test =	printf(			"		|%8.5d|\n", -77);
	t =	ft_printf(			"		|%8.5d|\n", -77);
	result(test, t);
		printf(			"%%07.5d");
	test =	printf(			"		|%07.5d|\n", -77);
	t =	ft_printf(			"		|%07.5d|\n", -77);
	result(test, t);
		printf(			"%%08.1d");
	test =	printf(			"		|%08.1d|\n", -77);
	t =	ft_printf(			"		|%08.1d|\n", -77);
	result(test, t);
		printf(			"%%08.1d");
	test =	printf(			"		|%08.1d|\n", 77);
	t =	ft_printf(			"		|%08.1d|\n", 77);
	result(test, t);
		printf(			"%%09.5d");
	test =	printf(			"		|%09.5d|\n", -77);
	t =	ft_printf(			"		|%09.5d|\n", -77);
	result(test, t);
		printf(			"%%010.5d");
	test =	printf(			"		|%010.5d|\n", -77);
	t =	ft_printf(			"		|%010.5d|\n", -77);
	result(test, t);
		printf(			"%%-7.2d");
	test =	printf(			"		|%-7.2d|\n", -77);
	t =	ft_printf(			"		|%-7.2d|\n", -77);
	result(test, t);
		printf(			"%%-8.3d");
	test =	printf(			"		|%-8.3d|\n", 7777);
	t =	ft_printf(			"		|%-8.3d|\n", 7777);
	result(test, t);
		printf(			"%%-9.1d");
	test =	printf(			"		|%-9.1d|\n", -77);
	t =	ft_printf(			"		|%-9.1d|\n", -77);
	result(test, t);
		printf(			"%%-10.5d");
	test =	printf(			"		|%-10.5d|\n", -77);
	t =	ft_printf(			"		|%-10.5d|\n", -77);
	result(test, t);
		printf(			"%%-10.8d");
	test =	printf(			"		|%-10.8d|\n", -77);
	t =	ft_printf(			"		|%-10.8d|\n", -77);
	result(test, t);
		printf(			"%%-11.8d");
	test =	printf(			"		|%-11.8d|\n", -77);
	t =	ft_printf(			"		|%-11.8d|\n", -77);
	result(test, t);
		printf(			"%%-11.8d");
	test =	printf(			"		|%-11.8d|\n", 77);
	t =	ft_printf(			"		|%-11.8d|\n", 77);
	result(test, t);
		printf(			"%%9.5d");
	test =	printf(			"		|%9.5d|\n", -77);
	t =	ft_printf(			"		|%9.5d|\n", -77);
	result(test, t);
		printf(			"%%9.5d");
	test =	printf(			"		|%9.5d|\n", 77);
	t =	ft_printf(			"		|%9.5d|\n", 77);
	result(test, t);
		printf(			"%%10.5d");
	test =	printf(			"		|%10.5d|\n", 77);
	t =	ft_printf(			"		|%10.5d|\n", 77);
	result(test, t);
		printf(			"%%11.5d");
	test =	printf(			"		|%11.5d|\n", 77);
	t =	ft_printf(			"		|%11.5d|\n", 77);
	result(test, t);
		printf(			"%%11.1d");
	test =	printf(			"		|%11.5d|\n", 77);
	t =	ft_printf(			"		|%11.5d|\n", 77);
	result(test, t);
		printf(			"%%11.1d");
	test =	printf(			"		|%11.1d|\n", -77);
	t =	ft_printf(			"		|%11.1d|\n", -77);
	result(test, t);

	printf("_____________________________________\nNEGATIVE:\n\n");

		printf(			"%%.1d");
	test =	printf(			"		|%.1d|\n", -7);
	t =	ft_printf(			"		|%.1d|\n", -7);
	result(test, t);
		printf(			"%%0.5d");
	test =	printf(			"		|%0.5d|\n", -7);
	t =	ft_printf(			"		|%0.5d|\n", -7);
	result(test, t);
		printf(			"%%.5d");
	test =	printf(			"		|%.5d|\n", -7);
	t =	ft_printf(			"		|%.5d|\n", -7);
	result(test, t);
		printf(			"%%3.7d");
	test =	printf(			"		|%3.7d|\n", -55);
	t =	ft_printf(			"		|%3.7d|\n", -55);
	result(test, t);
		printf(			"%%-3.3d");
	test =	printf(			"		|%-3.3d|\n", -8375);
	t =	ft_printf(			"		|%-3.3d|\n", -8375);
	result(test, t);
		printf(			"%%-3.7d");
	test =	printf(			"		|%-3.7d|\n", -2375);
	t =	ft_printf(			"		|%-3.7d|\n", -2375);
	result(test, t);
		printf(			"%%-1d");
	test =	printf(			"		|%-2d|\n", -777);
	t =	ft_printf(			"		|%-2d|\n", -777);
	result(test, t);
		printf(			"%%-10d");
	test =	printf(			"		|%-10d|\n", -777);
	t =	ft_printf(			"		|%-10d|\n", -777);
	result(test, t);
		printf(			"%%1.10d");
	test =	printf(			"		|%1.10d|\n", -77);
	t =	ft_printf(			"		|%1.10d|\n", -77);
	result(test, t);
		printf(			"%%-1.11d");
	test =	printf(			"		|%-1.11d|\n", -77);
	t =	ft_printf(			"		|%-1.11d|\n", -77);
	result(test, t);


printf("_____________________________________\nZERO:\n\n");

		printf(			"%%d,0");
	test =	printf(			"		|%d|\n", 0);
	t =	ft_printf(			"		|%d|\n", 0);
	result(test, t);
		printf(			"%%.d,0");
	test =	printf(			"		|%.d|\n", 0);
	t =	ft_printf(			"		|%.d|\n", 0);
	result(test, t);
		printf(			"%%.5d");
	test =	printf(			"		|%.5d|\n", 0);
	t =	ft_printf(			"		|%.5d|\n", 0);
	result(test, t);
		printf(			"%%.0d");
	test =	printf(			"		|%.0d|\n", 0);
	t =	ft_printf(			"		|%.0d|\n", 0);
	result(test, t);
		printf(			"%%-1.d");
	test =	printf(			"		|%-1.d|\n", 0);
	t =	ft_printf(			"		|%-1.d|\n", 0);
	result(test, t);
		printf(			"%%-8.5d");
	test =	printf(			"		|%-8.5d|\n", 0);
	t =	ft_printf(			"		|%-8.5d|\n", 0);
	result(test, t);
		printf(			"%%5d");
	test =	printf(			"		|%5d|\n", 0);
	t =	ft_printf(			"		|%5d|\n", 0);
	result(test, t);
		printf(			"%%03d");
	test =	printf(			"		|%05d|\n", 0);
	t =	ft_printf(			"		|%05d|\n", 0);
	result(test, t);
		printf(			"%%-3d");
	test =	printf(			" 		|%-5d|\n", 0);
	t =	ft_printf(			" 		|%-5d|\n", 0);
	result(test, t);
		printf(			"%%08.5d");
	test =	printf(			"		|%08.5d|\n", 0);
	t =	ft_printf(			"		|%08.5d|\n", 0);
	result(test, t);
		printf(			"%%8.5d");
	test =	printf(			"		|%8.5d|\n", 0);
	t =	ft_printf(			"		|%8.5d|\n", 0);
	result(test, t);

	printf("\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("_____________________________________\nERROR:\n\n");
	
		printf(			"%%--3.7d");
	test =	printf(			"		|%----3.7d|\n", 55);
	t =	ft_printf(			"		|%----3.7d|\n", 55);
	result(test, t);
		printf(			"%%--5.3d");
	test =	printf(			"		|%--5.3d|\n", 07);
	t =	ft_printf(			"		|%--5.3d|\n", 07);
	result(test, t);
		printf(			"%%%%0.0d");
	test =	printf(			"		|%%%0.0d|\n", -7);
	t =	ft_printf(			"		|%%%0.0d|\n", -7);
	result(test, t);
		printf(			"no arg");
	test =	printf(			"		|%d|\n");
	t =	ft_printf(			"		|%d|\n");
	result(test, t);
		printf(			"lvl up");
	test =	printf(			"		|%d%d%d%d%d%d%d%d|\n", 'a','b',2,0,-1,1+3,-0);
	t =	ft_printf(			"		|%d%d%d%d%d%d%d%d|\n", 'a','b',2,0,-1,1+3,-0);
	result(test, t);
	
	printf("\n[RESULT: %d correct out of %d tests]\n\n", g_pass, g_test);

	return (0);
}
