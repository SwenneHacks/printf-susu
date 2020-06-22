/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_pct.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 19:45:27 by limartin      #+#    #+#                 */
/*   Updated: 2020/06/22 15:33:12 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test.h"

// int		ft_printf(const char *format, ...)
// {
// 	return 0;
// }


int		main(void)
{
	int broken = 0;
	int	bonus = 0;

	g_pass 	= 0;
	g_test	= 1;
	g_fail	= 0;
	
	int test = 0;
	int ft = 0;

	test = printf(" (%d)\n", printf("Handling minimum field width"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Mfw 0: |%0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Mfw 1: |%1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 0: |%0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 1: |%1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 2: |%2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 3: |%3%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 4: |%4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 5: |%5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 10: |%10%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 15: |%15%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw 42: |%42%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42%|"));
	result(test, ft);
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling precision"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Precis. 0: |%.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Precis. 1: |%.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Precis. 2: |%.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 0: |%.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 1: |%.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 2: |%.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 3: |%.3%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 4: |%.4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 5: |%.5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 10: |%.10%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 15: |%.15%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. 42: |%.42%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) P .00: |%.00%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) P .01: |%.01%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01%|"));	
	result(test, ft);
	test = printf(" (%d)\n", printf("P .00: |%.00%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .00: |%.00%|"));	
	result(test, ft);
	test = printf(" (%d)\n", printf("P .01: |%.01%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .01: |%.01%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .02: |%.02%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .02: |%.02%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .03: |%.03%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .03: |%.03%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .04: |%.04%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .04: |%.04%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .05: |%.05%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .05: |%.05%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .010: |%.010%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .010: |%.010%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .015: |%.015%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .015: |%.015%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .042: |%.042%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .042: |%.042%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .007: |%.007%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .007: |%.007%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .000000000007: |%.000000000007%|"));
	ft = ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007%|"));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 0.0: |%0.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 1.0: |%1.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(10) 1.0: |%1.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 0.1: |%0.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 1.1: |%1.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("0.0: |%0.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("0.0: |%0.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("1.1: |%1.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("1.1: |%1.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("2.2: |%2.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("2.2: |%2.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("3.2: |%3.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("3.2: |%3.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("2.3: |%2.3%|"));
	ft = ft_printf(" (%d)\n", ft_printf("2.3: |%2.3%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.4: |%8.4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("8.4: |%8.4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("4.8: |%4.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("4.8: |%4.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.8: |%8.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("8.8: |%8.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.2: |%8.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("8.2: |%8.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("2.8: |%2.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("2.8: |%2.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.1: |%8.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("8.1: |%8.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("1.8: |%1.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("1.8: |%1.8%|"));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 00.0: |%00.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 01.0: |%01.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 00.1: |%00.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("01.1: |%01.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("01.1: |%01.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("02.2: |%02.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("02.2: |%02.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("03.2: |%03.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("03.2: |%03.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("02.3: |%02.3%|"));
	ft = ft_printf(" (%d)\n", ft_printf("02.3: |%02.3%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("08.4: |%08.4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("08.4: |%08.4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("04.8: |%04.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("04.8: |%04.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("08.8: |%08.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("08.8: |%08.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("08.2: |%08.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("08.2: |%08.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("02.8: |%02.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("02.8: |%02.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("08.1: |%08.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("08.1: |%08.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("01.8: |%01.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("01.8: |%01.8%|"));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 0: |%0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 0: |%0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 00: |%00%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 00: |%00%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 01: |%01%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 01: |%01%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) 02: |%02%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) 02: |%02%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("0: |%0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("0: |%0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("00: |%00%|"));
	ft = ft_printf(" (%d)\n", ft_printf("00: |%00%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("01: |%01%|"));
	ft = ft_printf(" (%d)\n", ft_printf("01: |%01%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("02: |%02%|"));
	ft = ft_printf(" (%d)\n", ft_printf("02: |%02%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("03: |%03%|"));
	ft = ft_printf(" (%d)\n", ft_printf("03: |%03%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("08: |%08%|"));
	ft = ft_printf(" (%d)\n", ft_printf("08: |%08%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("000000000008: |%000000000008%|"));
	ft = ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("010: |%010%|"));
	ft = ft_printf(" (%d)\n", ft_printf("010: |%010%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("0000000000010: |%0000000000010%|"));
	ft = ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010%|"));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -0: |%-0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -00: |%-00%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -01: |%-01%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -02: |%-02%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0: |%-0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-0: |%-0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-00: |%-00%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-00: |%-00%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-01: |%-01%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-01: |%-01%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-02: |%-02%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-02: |%-02%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-03: |%-03%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-03: |%-03%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-08: |%-08%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-08: |%-08%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("0-8: |%0-8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("0-8: |%0-8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-000000000008: |%-000000000008%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-010: |%-010%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-010: |%-010%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0000000000010: |%-0000000000010%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010%|"));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Mfw -0: |%-0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Mfw -1: |%-1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) Mfw -2: |%-2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -0: |%-0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -1: |%-1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -2: |%-2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -3: |%-3%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -4: |%-4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -5: |%-5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -10: |%-10%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw --10: |%--10%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw ---10: |%---10%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -15: |%-15%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw -42: |%-42%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42%|"));
	result(test, ft);
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -0.0: |%-0.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -0.1: |%-0.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -1.0: |%-1.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -1.1: |%-1.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -0.2: |%-0.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -2.0: |%-2.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("(0) -2.2: |%-2.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0.0: |%-0.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0.1: |%-0.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-1.0: |%-1.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-1.1: |%-1.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0.2: |%-0.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-2.0: |%-2.0%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-2.2: |%-2.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-1.1: |%-1.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-2.2: |%-2.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-3.2: |%-3.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-2.3: |%-2.3%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-4.8: |%-4.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.8: |%-8.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.2: |%-8.2%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-2.8: |%-2.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.1: |%-8.1%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-1.8: |%-1.8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8%|"));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling wildcards"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling wildcards"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *1: |%*%|", 1));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*%|", 1));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *5: |%*%|", 5));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *5: |%*%|",5));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *5: |%*%|",        5));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|",        5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *10: |%*%|", 10));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*%|", 10));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *i: |%*%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw **5: |%*.*%|", 5, 6));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*%|", 5, 6));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*1: |%.*%|", 1));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*%|", 1));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*%|", 5));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*%|",5));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*%|",      5));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",      5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*10: |%.*%|", 10));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*%|", 10));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*i: |%.*%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*0: |%.*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("P .*0: |%.*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*01: |%.*%|", 01));
	ft = ft_printf(" (%d)\n", ft_printf("P .*01: |%.*%|", 01));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*05: |%.*%|", 05));
	ft = ft_printf(" (%d)\n", ft_printf("P .*05: |%.*%|", 05));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*010: |%.*%|", 010));
	ft = ft_printf(" (%d)\n", ft_printf("P .*010: |%.*%|", 010));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*000000000007: |%.*%|", 000000000007));
	ft = ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*%|", 000000000007));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.4: |%*.4%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.8: |%*.8%|", 4));
	ft = ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8%|", 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.8: |%*.8%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.*4: |%8.*%|", 4));
	ft = ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*%|", 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("4.*8: |%4.*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.*8: |%8.*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.*4: |%*.*%|", 8, 4));
	ft = ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*%|", 8, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.*8: |%*.*%|", 4, 8));
	ft = ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*%|", 4, 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.*8: |%*.*%|", 8, 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*%|", 8, 8));
	result(test, ft);
	printf("WEIRD OCTAL SHIT:\n");
	test = printf(" (%d)\n", printf("*010.*4: |%*.*%|", 010, 4));
	ft = ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*%|", 010, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf(" *07.*4: |%*.*%|", 07, 4));
	ft = ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*%|", 07, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.*010: |%*.*%|", 4, 010));
	ft = ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*%|", 4, 010));
	result(test, ft);
	printf("WEIRD HEXADECIMAL SHIT:\n");
	test = printf(" (%d)\n", printf("*0x10.*4: |%*.*%|", 0x10, 4));
	ft = ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*%|", 0x10, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	ft = ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.*0x10: |%*.*%|", 4, 0x10));
	ft = ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*%|", 4, 0x10));
	result(test, ft);


	//int octal;

	// octal = 010;
	// octal--;

	// printf("octal: %i\n", octal);

	// //this will print 7.

	// int octal_atoi;

	// octal_atoi = atoi("010");
	// octal_atoi--;

	// printf("octal: %i\n", octal_atoi);

	// //this will print 9.

	// int hexadec;

	// hexadec = 0x10;
	// hexadec--;

	// printf("hexadec: %i\n", hexadec);

	// //this will print 15.

	// int hexadec_atoi;

	// hexadec_atoi = atoi("0x10");
	// hexadec_atoi--;

	// printf("hexadec: %i\n", hexadec_atoi);

	// //this will print -1.

	test = printf(" (%d)\n", printf("*8: |%*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8: |%*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("0*8: |%0*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("0*8: |%0*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("00*8: |%00*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("00*8: |%00*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("-*0: |%-*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("-*0: |%-*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0*0: |%-0*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("-0*3: |%-0*%|", 3));
	ft = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*%|", 3));
	result(test, ft);
	test = printf(" (%d)\n", printf("*(-03): |%*%|", -03));
	ft = ft_printf(" (%d)\n", ft_printf("*(-03): |%*%|", -03));
	result(test, ft);
	test = printf(" (%d)\n", printf("*(-5): |%*%|", -5));
	ft = ft_printf(" (%d)\n", ft_printf("*(-5): |%*%|", -5));
	result(test, ft);
	test = printf(" (%d)\n", printf("*(5): |%*%|", 5));
	ft = ft_printf(" (%d)\n", ft_printf("*(5): |%*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("-*(5): |%-*%|", 5));
	ft = ft_printf(" (%d)\n", ft_printf("-*(5): |%-*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4%|"));
	ft = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("-*(8).4: |%-*.4%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*(-8).4: |%*.4%|", -8));
	ft = ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4%|", -8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*(int)(-8.4): |%*%|", ((int)(-8.4))));
	ft = ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*%|", ((int)(-8.4))));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.*(4): |%-8.*%|", 4));
	ft = ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*%|", 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.*(-4): |%-8.*%|", -4));
	ft = ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*%|", -4));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.*(0): |%-8.*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("-8.*(1): |%-8.*%|", 1));
	ft = ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*%|", 1));
	result(test, ft);
	test = printf(" (%d)\n", printf("-*(0).4: |%-*.4%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("*(0).4: |%*.4%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4%|", 0));
	result(test, ft);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	ft = ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *1: |%*%|", 1));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*%|", 1));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *5: |%*%|", 5));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *5: |%*%|",5));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *5: |%*%|",        5));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|",        5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *10: |%*%|", 10));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*%|", 10));
	result(test, ft);
	test = printf(" (%d)\n", printf("Mfw *i: |%*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*1: |%.*%|", 1));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*%|", 1));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*%|", 5));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|", 5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*%|",5));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*%|",      5));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",      5));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*10: |%.*%|", 10));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*%|", 10));
	result(test, ft);
	test = printf(" (%d)\n", printf("Precis. .*i: |%.*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*0: |%.*%|", 0));
	ft = ft_printf(" (%d)\n", ft_printf("P .*0: |%.*%|", 0));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*01: |%.*%|", 01));
	ft = ft_printf(" (%d)\n", ft_printf("P .*01: |%.*%|", 01));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*05: |%.*%|", 05));
	ft = ft_printf(" (%d)\n", ft_printf("P .*05: |%.*%|", 05));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*010: |%.*%|", 010));
	ft = ft_printf(" (%d)\n", ft_printf("P .*010: |%.*%|", 010));
	result(test, ft);
	test = printf(" (%d)\n", printf("P .*000000000007: |%.*%|", 000000000007));
	ft = ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*%|", 000000000007));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.4: |%*.4%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.8: |%*.8%|", 4));
	ft = ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8%|", 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.8: |%*.8%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.*4: |%8.*%|", 4));
	ft = ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*%|", 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("4.*8: |%4.*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.*8: |%8.*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.*4: |%*.*%|", 8, 4));
	ft = ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*%|", 8, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.*8: |%*.*%|", 4, 8));
	ft = ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*%|", 4, 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("*8.*8: |%*.*%|", 8, 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*%|", 8, 8));
	result(test, ft);
	
	printf("WEIRD OCTAL SHIT:\n");
	test = printf(" (%d)\n", printf("*010.*4: |%*.*%|", 010, 4));
	ft = ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*%|", 010, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf(" *07.*4: |%*.*%|", 07, 4));
	ft = ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*%|", 07, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.*010: |%*.*%|", 4, 010));
	ft = ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*%|", 4, 010));
	result(test, ft);
	
	printf("WEIRD HEXADECIMAL SHIT:\n");
	test = printf(" (%d)\n", printf("*0x10.*4: |%*.*%|", 0x10, 4));
	ft = ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*%|", 0x10, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	ft = ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	result(test, ft);
	test = printf(" (%d)\n", printf("*4.*0x10: |%*.*%|", 4, 0x10));
	ft = ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*%|", 4, 0x10));
	result(test, ft);



	//int octal;

	// octal = 010;
	// octal--;

	// printf("octal: %i\n", octal);

	// //this will print 7.

	// int octal_atoi;

	// octal_atoi = atoi("010");
	// octal_atoi--;

	// printf("octal: %i\n", octal_atoi);

	// //this will print 9.

	// int hexadec;

	// hexadec = 0x10;
	// hexadec--;

	// printf("hexadec: %i\n", hexadec);

	// //this will print 15.

	// int hexadec_atoi;

	// hexadec_atoi = atoi("0x10");
	// hexadec_atoi--;

	// printf("hexadec: %i\n", hexadec_atoi);

	// //this will print -1.

	test = printf(" (%d)\n", printf("*8: |%*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("*8: |%*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("0*8: |%0*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("0*8: |%0*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("00*8: |%00*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("00*8: |%00*%|", 8));
	result(test, ft);
	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*%|", 8));
	ft = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*%|", 8));
	result(test, ft);


	printf("\n------------------------------------------------------------------------------------------------\n\n");
	
	

	test = printf(" (%d)\n", printf("Negative ints are a pain:"));
	ft = ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	result(test, ft);


	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	result(test, ft);


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	ft = ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	result(test, ft);

	test = printf(" (%d)\n", printf("8.: |%8.%|"));
	ft = ft_printf(" (%d)\n", ft_printf("8.: |%8.%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("8.: |%8.%|"));
	ft = ft_printf(" (%d)\n", ft_printf("8.: |%8.%|"));
	result(test, ft);
	test = printf(" (%d)\n", printf("08.*(-4): |%08.*%|", -4));
	ft = ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*%|", -4));
	result(test, ft);

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	ft = ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	result(test, ft);


	test = printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20%|"));

	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20%|"));

	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17%|"));
	result(test, ft);
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20%|"));

	test = printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18%|"));
	result(test, ft);

	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15%|"));
	ft = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15%|"));
	result(test, ft);



	if(broken)
	{
	printf("This is an incomplete    printf conversion: %-0*.*", 13, 7);
	ft_printf("This is an incomplete ft_printf conversion: %-0*.*", 13, 7);

	printf("This is a bogus    printf conversion: %-0*.*b", 13, 7);
	ft_printf("This is a bogus ft_printf conversion: %-0*.*b", 13, 7);

	printf("This is a bogus    printf conversion with double precision: %-0*..*b", 13, 7);
	ft_printf("This is a bogus ft_printf conversion with double precision: %-0*..*b", 13, 7);
	}

	printf("		\x1b[31m FAILS: %d \x1b[0m\n\n\n", g_fail);

	return (0);
}
