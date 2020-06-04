
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
		printf("				ft[%d]\n", ft - 5);
	}
	g_test++;
}

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
	    printf(			"%%x\n");
    test =	printf(	    	"	   |%x|\n", i);
	t =	ft_printf(	    	"	   |%x|\n", i);
	result(test, t);
	    printf(			"%%X\n");
    test =	printf(	    	"	   |%X|\n", d);
	t =	ft_printf(	    	"	   |%X|\n", d);
	result(test, t);
	    printf(			"%%X\n");
    test =	printf(	    	"	   |%X|\n", i);
	t =	ft_printf(	    	"	   |%X|\n", i);
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
	    printf(			"%%*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", -10, -11, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, d);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", 010, 011, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 010, 011, d);
	result(test, t);
	    printf(			"%%8.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 8, 11, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 8, 11, d);
	result(test, t);
	    printf(			"%%-1.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", -1, 1, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", -1, 1, d);
	result(test, t);
   		printf(			"%%10.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 10, 11, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 10, 11, d);
	result(test, t);
	    printf(			"%%5.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", 5, 1, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", 5, 1, d);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 10, 11, d);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 10, 11, d);
	result(test, t);
	    printf(			"%%-*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", -10, -11, d);
	t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, d);
	result(test, t);
	    printf(			"%%011.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 1, d);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 1, d);
	result(test, t);

printf("\n_____________________________________\nNEGATIVE: \n\n");

	
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
    test =	printf(	    	"	   |%*.*x|\n", 5, 1, i);
	t =	ft_printf(	    	"	   |%*.*x|\n", 5, 1, i);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 10, 11, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 10, 11, i);
	result(test, t);
	    printf(			"%%-*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", -10, -11, i);
	t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, i);
	result(test, t);
	    printf(			"%%011.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 1, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 1, i);
	result(test, t);
	    printf(			"%%0-1.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", -11, -1, i);
	t =	ft_printf(	    	"	   |%0*.*x|\n", -11, -1, i);
	result(test, t);
	
printf("\n_____________________________________ ZERO: \n\n");

		printf(			"%%*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", -10, -11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, 0);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%0*.*x|\n", -10, -11, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", -10, -11, 0);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", 010, 011, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 010, 011, 0);
	result(test, t);
	    printf(			"%%8.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 8, 11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 8, 11, 0);
	result(test, t);
	    printf(			"%%-1.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", -1, 1, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", -1, 1, 0);
	result(test, t);
	    printf(			"%%10.11x\n");
    test =	printf(	    	"	   |%*.*x|\n", 10, 11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 10, 11, 0);
	result(test, t);
	    printf(			"%%5.1x\n");
    test =	printf(	    	"	   |%*.*x|\n", 5, 1, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 5, 1, 0);
	result(test, t);
	    printf(			"%%0*.*x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 10, 11, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 10, 11, 0);
	result(test, t);
	    printf(			"%%011.1x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 1, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 1, 0);
	result(test, t);
	    printf(			"%%-11.3x\n");
    test =	printf(	    	"	   |%-*.*x|\n", 11, 3, 0);
	t =	ft_printf(	    	"	   |%-*.*x|\n", 11, 3, 0);
	result(test, t);
	   printf(			"%%011.3x\n");
    test =	printf(	    	"	   |%0*.*x|\n", 11, 3, 0);
	t =	ft_printf(	    	"	   |%0*.*x|\n", 11, 3, 0);
	result(test, t);
	    printf(			"%%11.0x\n");
    test =	printf(	    	"	   |%*.*x|\n", 11, 0, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 11, 0, 0);
	result(test, t);
	    printf(			"%%05.0x\n");
    test =	printf(	    	"	   |%*.*x|\n", 5, 0, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", 5, 0, 0);
	result(test, t);
	    printf(			"%%05x\n");
    test =	printf(	    	"	   |%0*x|\n", 5, 0);
	t =	ft_printf(	    	"	   |%0*x|\n", 5, 0);
	result(test, t);
	    printf(			"%%-*.*x\n");
    test =	printf(	    	"	   |%*.*x|\n", -10, -11, 0);
	t =	ft_printf(	    	"	   |%*.*x|\n", -10, -11, 0);
	result(test, t);

printf("\n_____________________________________ TO FIX: \n\n");

	printf("\n[Above: %d | %d OK]\n\n", g_test, g_pass);

}