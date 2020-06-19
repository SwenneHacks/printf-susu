
#include "test.h"

int		main(void)
{
	int				test;
	unsigned int	i = -9;
	int				d = 5555555;
	char			c = 'c';
	char			*s = "Here";
	int				t;
	g_pass 			= 0;
	g_test			= 0;

	printf("\n____________________________________\nBASICS HEXA: \n\n");

	    printf(			"%%x\n");
    test =	printf(	    	"	   |%x|\n", d);
	t =	ft_printf(	    	"	   |%x|\n", d);
	result(test, t);
	    printf(			"%%X\n");
    test =	printf(	    	"	   |%X|\n", d);
	t =	ft_printf(	    	"	   |%X|\n", d);
	result(test, t);

	printf("\n____________________________________\nSMALL x: \n\n");
	
	    printf(			"%%1x\n");
    test =	printf(	    	"	   |%1x|\n", d);
	t =	ft_printf(	    	"	   |%1x|\n", d);
	result(test, t);
	    printf(			"%%0x\n");
    test =	printf(	    	"	   |%0x|\n", d);
	t =	ft_printf(	    	"	   |%0x|\n", d);
	result(test, t);
        printf(			"%%5x\n");
    test =	printf(	    	"	   |%5x|\n", d);
	t =	ft_printf(	    	"	   |%5x|\n", d);
	result(test, t);
        printf(			"%%10x\n");
    test =	printf(	    	"	   |%10x|\n", d);
	t =	ft_printf(	    	"	   |%10x|\n", d);
	result(test, t);
	    printf(			"%%.x\n");
    test =	printf(	    	"	   |%.x|\n", d);
	t =	ft_printf(	    	"	   |%.x|\n", d);
	result(test, t);
	    printf(			"%%1.0x\n");
    test =	printf(	    	"	   |%1.0x|\n", d);
	t =	ft_printf(	    	"	   |%1.0x|\n", d);
	result(test, t);
        printf(			"%%1.5x\n");
    test =	printf(	    	"	   |%1.5x|\n", d);
	t =	ft_printf(	    	"	   |%1.5x|\n", d);
	result(test, t);
	    printf(			"%%5.1x\n");
    test =	printf(	    	"	   |%5.1x|\n", d);
	t =	ft_printf(	    	"	   |%5.1x|\n", d);
	result(test, t);

printf("\n____________________________________\nBIG x: \n\n");

	    printf(			"%%X\n");
    test =	printf(	    	"	   |%X|\n", d);
	t =	ft_printf(	    	"	   |%X|\n", d);
	result(test, t);
	    printf(			"%%X\n");
    test =	printf(	    	"	   |%X|\n", i);
	t =	ft_printf(	    	"	   |%X|\n", i);
	result(test, t);
	    printf(			"%%1X\n");
    test =	printf(	    	"	   |%1X|\n", d);
	t =	ft_printf(	    	"	   |%1X|\n", d);
	result(test, t);
        printf(			"%%5X\n");
    test =	printf(	    	"	   |%5X|\n", d);
	t =	ft_printf(	    	"	   |%5X|\n", d);
	result(test, t);
        printf(			"%%10X\n");
    test =	printf(	    	"	   |%10X|\n", d);
	t =	ft_printf(	    	"	   |%10X|\n", d);
	result(test, t);
	    printf(			"%%.X\n");
    test =	printf(	    	"	   |%.X|\n", d);
	t =	ft_printf(	    	"	   |%.X|\n", d);
	result(test, t);
        printf(			"%%1.5X\n");
    test =	printf(	    	"	   |%1.5X|\n", d);
	t =	ft_printf(	    	"	   |%1.5X|\n", d);
	result(test, t);
	    printf(			"%%5.1X\n");
    test =	printf(	    	"	   |%5.1X|\n", d);
	t =	ft_printf(	    	"	   |%5.1X|\n", d);
	result(test, t);

printf("\n_____________________________________ FLAGS: \n\n");
	

	    printf(			"%%09X\n");
    test =	printf(	    	"	   |%09X|\n", d);
	t =	ft_printf(	    	"	   |%09X|\n", d);
	result(test, t);
	    printf(			"%%-9X\n");
    test =	printf(	    	"	   |%-9X|\n", d);
	t =	ft_printf(	    	"	   |%-9X|\n", d);
	result(test, t);
	    printf(			"%%5.x\n");
    test =	printf(	    	"	   |%*.x|\n", 5, d);
	t =	ft_printf(	    	"	   |%*.x|\n", 5, d);
	result(test, t);
	    printf(			"%%9.5X\n");
    test =	printf(	    	"	   |%9.5X|\n", 34);
	t =	ft_printf(	    	"	   |%9.5X|\n", 34);
	result(test, t);
	    printf(			"%%09.5X\n");
    test =	printf(	    	"	   |%09.5X|\n", 34);
	t =	ft_printf(	    	"	   |%09.5X|\n", 34);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", 010, 011, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 010, 011, d);
	result(test, t);
	    printf(			"%%8.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 8, 11, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 8, 11, d);
	result(test, t);
	    printf(			"%%-8.5x\n");
    test =	printf(	    	"	   |%-*.*x|\n", 8, 5, d);
	t =	ft_printf(	    	"	   |%-*.*x|\n", 8, 5, d);
	result(test, t);
	    printf(			"%%8.5x\n");
    test =	printf(	    	"	   |%*.*x|\n", 8, 5, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 8, 5, d);
	result(test, t);
	    printf(			"%%08.5x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 8, 5, d);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 8, 5, d);
	result(test, t);
	    printf(			"%%-1.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", -1, 1, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", -1, 1, d);
	result(test, t);
	    printf(			"%%-2.7x\n");
    test =	printf(	    	"	   |%*.*x|\n", -2, 7, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", -2, 7, d);
	result(test, t);
   		printf(			"%%10.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 10, 11, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 10, 11, d);
	result(test, t);
	    printf(			"%%5.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", 5, 1, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 5, 1, d);
	result(test, t);
	    printf(			"%%011.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 1, d);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 1, d);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 10, 11, d);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 10, 11, d);
	result(test, t);

	printf("\n\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________\nNEGATIVE: \n\n");

	    printf(			"%%x\n");
    test =	printf(	    	"	   |%x|\n", i);
	t =	ft_printf(	    	"	   |%x|\n", i);
	result(test, t);
	    printf(			"%%8X\n");
    test =	printf(	    	"	   |%8X|\n", i);
	t =	ft_printf(	    	"	   |%8X|\n", i);
	result(test, t);
	    printf(			"%%09X\n");
    test =	printf(	    	"	   |%09X|\n", i);
	t =	ft_printf(	    	"	   |%09X|\n", i);
	result(test, t);
	    printf(			"%%-9X\n");
    test =	printf(	    	"	   |%-9X|\n", i);
	t =	ft_printf(	    	"	   |%-9X|\n", i);
	result(test, t);
	    printf(			"%%5.1x\n");
    test =	printf(	    	"	   |%5.1x|\n", i);
	t =	ft_printf(	    	"	   |%5.1x|\n", i);
	result(test, t);
	    printf(			"%%1.5x\n");
    test =	printf(	    	"	   |%1.5x|\n", i);
	t =	ft_printf(	    	"	   |%1.5x|\n", i);
	result(test, t);
	    printf(			"%%1.0x\n");
    test =	printf(	    	"	   |%1.0x|\n", i);
	t =	ft_printf(	    	"	   |%1.0x|\n", i);
	result(test, t);
	    printf(			"%%5.1X\n");
    test =	printf(	    	"	   |%5.1X|\n", i);
	t =	ft_printf(	    	"	   |%5.1X|\n", i);
	result(test, t);
	    printf(			"%%1.5X\n");
    test =	printf(	    	"	   |%1.5X|\n", i);
	t =	ft_printf(	    	"	   |%1.5X|\n", i);
	result(test, t);
	    printf(			"%%10.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 10, 11, i);
	t =	ft_printf(	    	"	   |%*.*x|\n", 10, 11, i);
	result(test, t);
	    printf(			"%%5.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", -5, 1, i);
	t =	ft_printf(	    	"	   |%*.*x|\n", -5, 1, i);
	result(test, t);
	    printf(			"%%010.11x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 10, 11, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 10, 11, i);
	result(test, t);
	    printf(			"%%011.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 1, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 1, i);
	result(test, t);
	    printf(			"%%09.8x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 9, 8, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 9, 8, i);
	result(test, t);
	    printf(			"%%-9.10x\n");
    test =	printf(	    	"	   |%-*.*x|\n", 9, 10, i);
	t =	ft_printf(	    	"	   |%-*.*x|\n", 9, 10, i);
	result(test, t);
	    printf(			"%%09.10x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 9, 10, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 9, 10, i);
	result(test, t);
	    printf(			"%%-8.10x\n");
    test =	printf(	    	"	   |%-*.*x|\n", 8, 10, i);
	t =	ft_printf(	    	"	   |%-*.*x|\n", 8, 10, i);
	result(test, t);
	    printf(			"%%0-1.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", -11, -1, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", -11, -1, i);
	result(test, t);
	
	printf("\n\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________\n ZERO: \n\n");

	    printf(			"%%x\n");
    test =	printf(	    	"	   |%x|\n", 0);
	t =	ft_printf(	    	"	   |%x|\n", 0);
	result(test, t);
	    printf(			"%%1x\n");
    test =	printf(	    	"	   |%1x|\n", 0);
	t =	ft_printf(	    	"	   |%1x|\n", 0);
	result(test, t);
	    printf(			"%%0x\n");
    test =	printf(	    	"	   |%0x|\n", 0);
	t =	ft_printf(	    	"	   |%0x|\n", 0);
	result(test, t);
	    printf(			"%%05x\n");
    test =	printf(	    	"	   |%0*x|\n", 5, 0);
	t =	ft_printf(	    	"	   |%0*x|\n", 5, 0);
	result(test, t);
        printf(			"%%5x\n");
    test =	printf(	    	"	   |%5x|\n", 0);
	t =	ft_printf(	    	"	   |%5x|\n", 0);
	result(test, t);
		printf(			"%%-5x\n");
    test =	printf(	    	"	   |%-5x|\n", 0);
	t =	ft_printf(	    	"	   |%-5x|\n", 0);
	result(test, t);
	    printf(			"%%-5.0x\n");
    test =	printf(	    	"	   |%-5.0x|\n", 0);
	t =	ft_printf(	    	"	   |%-5.0x|\n", 0);
	result(test, t);
	    printf(			"%%05.0x\n");
    test =	printf(	    	"	   |%*.*x|\n", 5, 0, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 5, 0, 0);
	result(test, t);
	    printf(			"%%-5.1x\n");
    test =	printf(	    	"	   |%-*.*x|\n", 5, 1, 0);
	t =	ft_printf(	    	"	   |%-*.*x|\n", 5, 1, 0);
	result(test, t);
	    printf(			"%%-1.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", -1, 1, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", -1, 1, 0);
	result(test, t);
	    printf(			"%%8.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 8, 11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 8, 11, 0);
	result(test, t);
	    printf(			"%%11.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 11, 11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 11, 11, 0);
	result(test, t);
	    printf(			"%%013.11x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 13, 11, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 13, 11, 0);
	result(test, t);
	    printf(			"%%011.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 1, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 1, 0);
	result(test, t);
	    printf(			"%%.11x\n");
    test =	printf(	    	"	   |%.*x|\n", 11, 0);
	t =	ft_printf(	    	"	   |%.*x|\n", 11, 0);
	result(test, t);
	    printf(			"%%-11.3x\n");
    test =	printf(	    	"	   |%-*.*x|\n", 11, 3, 0);
	t =	ft_printf(	    	"	   |%-*.*x|\n", 11, 3, 0);
	result(test, t);
	   printf(			"%%11.3x\n");
    test =	printf(	    	"	   |%*.*x|\n", 11, 3, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 11, 3, 0);
	result(test, t);
	   printf(			"%%011.3x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 3, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 3, 0);
	result(test, t);
	   printf(			"%%11.13x\n");
    test =	printf(	    	"	   |%*.*x|\n", 11, 13, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 11, 13, 0);
	result(test, t);
	   printf(			"%%011.3x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 3, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 3, 0);
	result(test, t);
	    printf(			"%%11.0x\n");
    test =	printf(	    	"	   |%*.*x|\n", 11, 0, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 11, 0, 0);
	result(test, t);
	    printf(			"%%10.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 10, 11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 10, 11, 0);
	result(test, t);
	    printf(			"%%10.-1x\n");
    test =	printf(	    	"	   |%*.*x|\n", 10, -1, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 10, -1, 0);
	result(test, t);

	printf("\n\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________\n WARNINGS: \n\n");

	    printf(			"weird arg\n");
    test =	printf(	    	"	   |%X|\n", "%x");
	t =	ft_printf(	    	"	   |%X|\n", "%x");
	result(test, t);
	    printf(			"l max\n");
    test =	printf(	    	"	   |%X|\n", 4294967295);
	t =	ft_printf(	    	"	   |%X|\n", 4294967295);
	result(test, t);
	//     printf(			"%%*.*x\n");
    // test =	printf(	    	"	   |%*.*x|\n", 10, 11, 0);
	// t =	ft_printf(	    	"	   |%*.*x|\n", 10, 11, 0);
	// result(test, t);
	//     printf(			"%%0-x\n");
    // test =	printf(	    	"	   |%0-*.*x|\n", 10, 11, 5);
	// t =	ft_printf(	    	"	   |%0-*.*x|\n", 10, 11, 5);
	// result(test, t);
	// 	printf(			"%%-*.*x\n");
    // test =	printf(	    	"	   |%*.*x|\n", -10, -11, 5);
	// t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, 5);
	// result(test, t);
	//     printf(			"%%0*.*x\n");
    // test =	printf(	    	"	   |%0*.*x|\n", -10, -11, 5);
	// t =	ft_printf(	    	"	   |%0*.*x|\n", -10, -11, 5);
	// result(test, t);
	//     printf(			"%%-*.*x\n");
    // test =	printf(	    	"	   |%*.*x|\n", -10, -11, d);
	// t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, d);
	// result(test, t);
	//     printf(			"%%*.*x\n");
    // test =	printf(	    	"	   |%*.*x|\n", -10, -11, d);
	// t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, d);
	// result(test, t);

	printf("\n\n[Above: %d | %d OK]\n", g_test, g_pass);

printf("\n_____________________________________\n BONUS: \n\n");

	    printf(			"#lmax\n");
    test =	printf(	    	"	   |%#X|\n", 4294967295);
	t =	ft_printf(	    	"	   |%#X|\n", 4294967295);
	result(test, t);
	    printf(			"%%#9X\n");
    test =	printf(	    	"	   |%#-9X|\n", i);
	t =	ft_printf(	    	"	   |%#-9X|\n", i);
	result(test, t);
	    printf(			"%%#-9X\n");
    test =	printf(	    	"	   |%#-9X|\n", i);
	t =	ft_printf(	    	"	   |%#-9X|\n", i);
	result(test, t);
	    printf(			"%%#09X,-\n");
    test =	printf(	    	"	   |%#09X|\n", i);
	t =	ft_printf(	    	"	   |%#09X|\n", i);
	result(test, t);
	    printf(			"%%#09X,33\n");
    test =	printf(	    	"	   |%#09X|\n", 33);
	t =	ft_printf(	    	"	   |%#09X|\n", 33);
	result(test, t);
	    printf(			"%%#10.11x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 10, 11, i);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 10, 11, i);
	result(test, t);
		printf(			"%%#xX\n");
    test =	printf(	    	"	   |%#xX|\n", d);
	t =	ft_printf(	    	"	   |%#xX|\n", d);
	result(test, t);
		printf(			"%%#xX\n");
    test =	printf(	    	"	   |%#xX|\n", 0);
	t =	ft_printf(	    	"	   |%#xX|\n", 0);
	result(test, t);
		printf(			"%%#09X\n");
    test =	printf(	    	"	   |%#09X|\n", d);
	t =	ft_printf(	    	"	   |%#09X|\n", d);
	result(test, t);
	    printf(			"%%#-9X\n");
    test =	printf(	    	"	   |%#-9X|\n", d);
	t =	ft_printf(	    	"	   |%#-9X|\n", d);
	result(test, t);
	    printf(			"%%#-5.x\n");
    test =	printf(	    	"	   |%#*.x|\n", -5, d);
	t =	ft_printf(	    	"	   |%#*.x|\n", -5, d);
	result(test, t);
	    printf(			"%%#8.11x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 8, 11, d);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 8, 11, d);
	result(test, t);
	    printf(			"%%#8.2x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 8, 2, d);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 8, 2, d);
	result(test, t);
	    printf(			"%%#8.5x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 8, 5, 34);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 8, 5, 34);
	result(test, t);
	    printf(			"%%#8.5x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 8, 5, d);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 8, 5, d);
	result(test, t);
	    printf(			"%%#-8.5x\n");
    test =	printf(	    	"	   |%#-*.*x|\n", 8, 5, d);
	t =	ft_printf(	    	"	   |%#-*.*x|\n", 8, 5, d);
	result(test, t);
	    printf(			"%%#08.5x\n");
    test =	printf(	    	"	   |%#0*.*x|\n", 8, 5, d);
	t =	ft_printf(	    	"	   |%#0*.*x|\n", 8, 5, d);
	result(test, t);
	    printf(			"%%#08.5x\n");
    test =	printf(	    	"	   |%#0*.*x|\n", 8, 5, 34);
	t =	ft_printf(	    	"	   |%#0*.*x|\n", 8, 5, 34);
	result(test, t);
	    printf(			"%%#-1.1x\n");
    test =	printf(	    	"	   |%#*.*x|\n", -1, 1, d);
	t =	ft_printf(	    	"	   |%#*.*x|\n", -1, 1, d);
	result(test, t);
   		printf(			"%%#10.11x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 10, 11, d);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 10, 11, d);
	result(test, t);
	    printf(			"%%#5.1x\n");
    test =	printf(	    	"	   |%#*.*x|\n", 5, 1, d);
	t =	ft_printf(	    	"	   |%#*.*x|\n", 5, 1, d);
	result(test, t);
	    printf(			"%%#011.1x\n");
    test =	printf(	    	"	   |%#0*.*x|\n", 11, 1, d);
	t =	ft_printf(	    	"	   |%#0*.*x|\n", 11, 1, d);
	result(test, t);
	    printf(			"%%#0*.*x\n");
    test =	printf(	    	"	   |%#0*.*x|\n", 10, 11, d);
	t =	ft_printf(	    	"	   |%#0*.*x|\n", 10, 11, d);
	result(test, t);

	printf("\n_____________________________________\nhexadecimal \n");

	printf("\n[RESULT: \x1b[33m%d\x1b[0m correct out of \x1b[33m%d\x1b[0m tests]\n\n", g_pass, g_test);

	return (0);
}