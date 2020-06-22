
#include "test.h"

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

	printf("\n____________________________________\nWARNINGS: \n\n");

//____________________________________________________________ POINTER
	test =	printf(			"%%p 	|%p|\n", &c);
	t =	ft_printf(			"%%p 	|%p|\n", &c);
	result(test, t);
//____________________________________________________________ CHARS

	test =	printf(			"%%c 		|%c|\n", c);
	t =	ft_printf(			"%%c 		|%c|\n", c);
	result(test, t);
//____________________________________________________________ HEXA
	test =	printf(			"%%x		|%x|\n", d);
	t =	ft_printf(			"%%x		|%x|\n", d);
	result(test, t);
	test =	printf(			"%%X 		|%X|\n", d);
	t =	ft_printf(			"%%X 		|%X|\n", d);
	result(test, t);
//_____________________________________________________________ OCTA
	test =	printf(			"%%o 		|%o|\n", d);
	t =	ft_printf(			"%%o 		|%o|\n", d);
	result(test, t);
//___________________________________________________________ UNSIGNED
	test =	printf(			"%%u 		|%u|\n", d);
	t =	ft_printf(			"%%u 		|%u|\n", d);
	result(test, t);
//___________________________________________________________ STRINGS
		printf(				"%%05s");
	test =	printf(				"		|%09s|\n", s);
	t =	ft_printf(				"		|%09s|\n", s);
	result(test, t);
		printf(				"%%0-0s");
	test =	printf(				"		|%0-0s|\n", s);
	t =	ft_printf(				"		|%0-0s|\n", s);
	result(test, t);
//___________________________________________________________ DECIMAL

printf("\n_____________________________________\nPERCENT: \n\n");
	
		printf(				"%%0-0%%");
	test =	printf(				"		|%0-0%|\n");
	t =	ft_printf(				"		|%0-0%|\n");
	result(test, t);
		printf(				"%%05%%");
	test =	printf(				"		|%05%|\n");
	t =	ft_printf(				"		|%05%|\n");
	result(test, t);
		printf(				"%%-5%%");
	test =	printf(				"		|%-5%|\n");
	t =	ft_printf(				"		|%-5%|\n");
	result(test, t);
		printf(				"%%-05%%");
	test =	printf(				"		|%-05%|\n");
	t =	ft_printf(				"		|%-05%|\n");
	result(test, t);
		printf(				"%%1.5%%");
	test =	printf(				"		|%1.5%|\n");
	t =	ft_printf(				"		|%1.5%|\n");
	result(test, t);
		printf(				"%%5.1%%");
	test =	printf(				"		|%5.1%|\n");
	t =	ft_printf(				"		|%5.1%|\n");
	result(test, t);

	printf("\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________ TO FIX: \n\n");

	test =	printf(			"%%u,-		|%u|\n", i);
	t =	ft_printf(			"%%u,-		|%u|\n", i);
	result(test, t);
	test =	printf(			"%%u,&		|%u|\n", &i);
	t =	ft_printf(			"%%u,&		|%u|\n", &i);
	result(test, t);
		printf(			"%%0-8.5d");
	test =	printf(			"		|%0-8.5d|\n", 7);
	t =	ft_printf(			"		|%0-8.5d|\n", 7);
	result(test, t);
		printf(			"%%0-10.d");
	test =	printf(			"		|%0-10.d|\n", 7);
	t =	ft_printf(			"		|%0-10.d|\n", 7);
	result(test, t);
		printf(			"%%0-8.5d");
	test =	printf(			"		|%0-8.5d|\n", 7);
	t =	ft_printf(			"		|%0-8.5d|\n", 7);
	result(test, t);
		printf(			"%%0-8.5d");
	test =	printf(			"		|%0-8.5d|\n", -7);
	t =	ft_printf(			"		|%0-8.5d|\n", -7);
	result(test, t);
		printf(			"%%--0.3d");
	test =	printf(			"		|%--0.3d|\n", 77);
	t =	ft_printf(			"		|%--0.3d|\n", 77);
	result(test, t);
		printf(			"%%-0.1d");
	test =	printf(			"		|%-0.1d|\n", -77);
	t =	ft_printf(			"		|%-0.1d|\n", -77);
	result(test, t);
		printf(			"%%0-5.3d");
	test =	printf(			"		|%0-5.3d|\n", 0);
	t =	ft_printf(			"		|%0-5.3d|\n", 0);
	result(test, t);
		printf(			"%%0-3.5d");
	test =	printf(			"		|%0-3.5d|\n", 33);
	t =	ft_printf(			"		|%0-3.5d|\n", 33);
	result(test, t);
		printf(			"%%0+3.5d");
	test =	printf(			"		|%0+3.5d|\n", 33);
	t =	ft_printf(			"		|%0+3.5d|\n", 33);
	result(test, t);
		printf(			"%%+04d");
	test =	printf(			"		|%+04d|\n", 0);
	t =	ft_printf(			"		|%+04d|\n", 0);
	result(test, t);
		printf(			"%%+4d");
	test =	printf(			"		|%+4d|\n", 0);
	t =	ft_printf(			"		|%+4d|\n", 0);
	result(test, t);
	// 	printf(			"%% 4d");
	// test =	printf(			"		|% 4d|\n", 0);
	// t =	ft_printf(			"		|% 4d|\n", 0);
	// result(test, t);
	// 	printf(			"%% -4d");
	// test =	printf(			"		|% -4d|\n", 0);
	// t =	ft_printf(			"		|% -4d|\n", 0);
	// result(test, t);
	// 	printf(			"%% 04d");
	// test =	printf(			"		|% 04d|\n", 0);
	// t =	ft_printf(			"		|% 04d|\n", 0);
	// result(test, t);
	// 	printf(			"%% 8.5d");
	// test =	printf(			"		|% 8.5d|\n", 55);
	// t =	ft_printf(			"		|% 8.5d|\n", 55);
	// result(test, t);
	// 	printf(			"%%+8.5d");
	// test =	printf(			"		|%+8.5d|\n", 55);
	// t =	ft_printf(			"		|%+8.5d|\n", 55);
	// result(test, t);
	// 	printf(			"%%+-8.5d");
	// test =	printf(			"		|%+-8.5d|\n", 55);
	// t =	ft_printf(			"		|%+-8.5d|\n", 55);
	// result(test, t);
	// 	printf(			"%%+-8.5d");
	// test =	printf(			"		|%+-8.5d|\n", -55);
	// t =	ft_printf(			"		|%+-8.5d|\n", -55);
	// result(test, t);
	// 	printf(			"%% 0+-5d");
	// test =	printf(			"		|% 0+-5d|\n", -55);
	// t =	ft_printf(			"		|% 0+-5d|\n", -55);
	// result(test, t);
	// 	printf(			"%% 8.5d");
	// test =	printf(			"		|% 8.5d|\n", 55);
	// t =	ft_printf(			"		|% 8.5d|\n", 55);
	// result(test, t);
	// 	printf(			"%%+8.5d");
	// test =	printf(			"		|%+8.5d|\n", 55);
	// t =	ft_printf(			"		|%+8.5d|\n", 55);
	// result(test, t);
	// 	printf(			"%%0+8.5d");
	// test =	printf(			"		|%0+8.5d|\n", i);
	// t =	ft_printf(			"		|%0+8.5d|\n", i);
	// result(test, t);
	// 	printf(			"%%0+8.5d");
	// test =	printf(			"		|%0+8.5d|\n", 55);
	// t =	ft_printf(			"		|%0+8.5d|\n", 55);
	// result(test, t);
	// 	printf(			"%%0+8.5d");
	// test =	printf(			"		|%0+8.5d|\n", 0);
	// t =	ft_printf(			"		|%0+8.5d|\n", 0);
	// result(test, t);
	// 	printf(			"%%0 8.5d");
	// test =	printf(			"		|%0 8.5d|\n", 0);
	// t =	ft_printf(			"		|%0 8.5d|\n", 0);
	// result(test, t);
	// 	printf(			"%%+-.5d"); 		
	// test =	printf(			"		|%+0*.5d|\n", -8, 55);
	// t =	ft_printf(			"		|%+0*.5d|\n", -8, 55);
	// result(test, t);

	printf("	[Above: %d | %d OK]\n", g_test, g_pass);

	printf("\n_____________________________________\nUndefined Behavior: \n\n\n");

	test = printf("*8.4: 		|%*.4%|\n", 8);
	t = ft_printf("*8.4: 		|%*.4%|\n", 8);
	result(test, t);
	test = printf("*4.8: 		|%*.8%|\n", 4);
	t = ft_printf("*4.8: 		|%*.8%|\n", 4);
	result(test, t);
	test = printf("*8.8: 		|%*.8%|\n", 8);
	t = ft_printf("*8.8: 		|%*.8%|\n", 8);
	result(test, t);
	test = printf("8.*4: 		|%8.*%|\n", 4);
	t = ft_printf("8.*4: 		|%8.*%|\n", 4);
	result(test, t);
	test = printf("4.*8: 		|%4.*%|\n", 8);
	t = ft_printf("4.*8: 		|%4.*%|\n", 8);
	result(test, t);
	test = printf("8.*8: 		|%8.*%|\n", 8);
	t = ft_printf("8.*8: 		|%8.*%|\n", 8);
	result(test, t);
	test = printf("Mfw *5: 	|%*%|\n",  5);
	t = ft_printf("Mfw *5: 	|%*%|\n",  5);
	result(test, t);
	test = printf("Precis. .*i: 	|%.*%|\n", 0);
	t = ft_printf("Precis. .*i: 	|%.*%|\n", 0);
	result(test, t);
	test = printf("01.8: 		|%01.8%|\n");
	t = ft_printf("01.8: 		|%01.8%|\n");
	result(test, t);
	test = printf("Precis. .*: 	|%.*%|\n");
	t = ft_printf("Precis. .*: 	|%.*%|\n");
	result(test, t);
	test = printf("Precis. .*: 	|%.*%|\n", 0);
	t = ft_printf("Precis. .*: 	|%.*%|\n", 0);

	printf("\n_____________________________________\n Bonus: \n");
	printf("\n[RESULT: \x1b[33m%d\x1b[0m correct out of \x1b[33m%d\x1b[0m tests]\n\n", g_pass, g_test);

	return (0);
}
