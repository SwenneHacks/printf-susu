
#include "test.h"

int		main(void)
{
	int				test;
	char			*s = "Here";
	int				t;
	g_pass 			= 0;
	g_test			= 0;

	printf("\n____________________________________\nSTRINGS: \n\n");

			printf(			"%%s");
	test =	printf(				"		|%s|\n", "");
	t =	ft_printf(				"		|%s|\n", "");
	result(test, t);
			printf(			"%%ss");
	test =	printf(				"		|%ss|\n", s);
	t =	ft_printf(				"		|%ss|\n", s);
	result(test, t);
			printf(			"%%3s");
	test =	printf(				"		|%5s|\n", s);
	t =	ft_printf(				"		|%5s|\n", s);
	result(test, t);
			printf(			"%%5s");
	test =	printf(				"		|%5s|\n", s);
	t =	ft_printf(				"		|%5s|\n", s);
	result(test, t);
			printf(			"%%11s");
	test =	printf(				"		|%11s|\n", s);
	t =	ft_printf(				"		|%11s|\n", s);
	result(test, t);
			printf(			"%%s%%s");
	test =	printf(				"		|%s%s|\n", s, "ok");
	t =	ft_printf(				"		|%s%s|\n", s, "ok");
	result(test, t);
			printf(			"%%-5s");
	test =	printf(				"		|%-5s|\n", s);
	t =	ft_printf(				"		|%-5s|\n", s);
	result(test, t);
			printf(			"%%.2s");
	test =	printf(				"		|%.2s|\n", s);
	t =	ft_printf(				"		|%.2s|\n", s);
	result(test, t);
			printf(			"%%*s,6");
	test =	printf(				"		|%*s|\n", 6, s);
	t =	ft_printf(				"		|%*s|\n", 6, s);
	result(test, t);
			printf(			"%%6.4s");
	test =	printf(				"		|%6.4s|\n", s);
	t =	ft_printf(				"		|%6.4s|\n", s);
	result(test, t);
			printf(			"%%*.*s");
	test =	printf(				"		|%*.*s|\n", -5, 2, s);
	t =	ft_printf(				"		|%*.*s|\n", -5, 2, s);
	result(test, t);
			printf(			"%%*s,-1");
	test =	printf(				"		|%*s|\n", -1, s);
	t =	ft_printf(				"		|%*s|\n", -1, s);
	result(test, t);
			printf(			"%%*s");
	test =	printf(				"		|%*s|\n", 0, s);
	t =	ft_printf(				"		|%*s|\n", 0, s);
	result(test, t);
			printf(			"%%-*s,5");
	test =	printf(				"		|%-*s|\n", 5, s);
	t =	ft_printf(				"		|%-*s|\n", 5, s);
	result(test, t);
			printf(			"%%--*s,1");
	test =	printf(				"		|%--*s|\n", 1, s);
	t =	ft_printf(				"		|%--*s|\n", 1, s);
	result(test, t);
			printf(			"%%.*s,2");
	test =	printf(				"		|%.*s|\n", 2, s);
	t =	ft_printf(				"		|%.*s|\n", 2, s);
	result(test, t);
			printf(			"%%-6.4s");
	test =	printf(				"		|%-6.4s|\n", s);
	t =	ft_printf(				"		|%-6.4s|\n", s);
	result(test, t);
			printf(			"%%s+2");
	test =	printf(				"		|%ss|\n", s + 2);
	t =	ft_printf(				"		|%ss|\n", s + 2);
	result(test, t);

	printf("\n	[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________\nNULL: \n\n");

		printf(				"%%s,NULL");
	test =	printf(				"		|%s|\n", NULL);
	t =	ft_printf(				"		|%s|\n", NULL);
	result(test, t);
		printf(				"%%011s");
	test =	printf(				"		|%011s|\n", NULL);
	t =	ft_printf(				"		|%011s|\n", NULL);
	result(test, t);
		printf(				"%%-0.8s");
	test =	printf(				"		|%-0.8s|\n", NULL);
	t =	ft_printf(				"		|%-0.8s|\n", NULL);
	result(test, t);
		printf(				"after\\0");
	test =	printf(				"		|%s|\n", "this is ok\0but this one should be hidden");
	t =	ft_printf(				"		|%s|\n", "this is ok\0but this one should be hidden");
	result(test, t);
		printf(				"%%-5s");
	test =	printf(				"		|%-5s|\n", NULL);
	t =	ft_printf(				"		|%-5s|\n", NULL);
	result(test, t);

	printf("\n	[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________\nUN.BEHAVIOR: \n\n");

		printf(				"%%011s");
	test =	printf(				"		|%011s|\n", s);
	t =	ft_printf(				"		|%011s|\n", s);
	result(test, t);
		printf(				"%%0-5s");
	test =	printf(				"		|%0-5s|\n", s);
	t =	ft_printf(				"		|%0-5s|\n", s);
	result(test, t);

	printf("\n	[RESULT: %d | %d OK ] \n\n", g_test, g_pass);

	return (0);
}
