/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_ptr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 19:45:27 by limartin      #+#    #+#                 */
/*   Updated: 2020/06/19 21:33:26 by swofferh      ########   odam.nl         */
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
	// unsigned int val = 42;
	//void	*val = NULL;
	//char	*val = "An example string";
	
	int		pointed = 867676769;
	int		*val = &pointed;

	g_pass 	= 0;
	g_test	= 1;
	g_fail	= 0;

	int broken = 0;
	int	bonus = 0;
	int test = 0;
	int t = 0;

	test = printf(" (%d)\n", printf("Handling minimum field width"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));
	result(test, t);	test = printf(" (%d)\n", printf("(0) Mfw 0: |%0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Mfw 1: |%1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 0: |%0p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 1: |%1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 2: |%2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 3: |%3p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 4: |%4p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 5: |%5p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 10: |%10p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 15: |%15p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 42: |%42p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42p|", val));
	result(test, t);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision"));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Precis. 0: |%.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Precis. 1: |%.1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Precis. 2: |%.2p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 0: |%.0p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 1: |%.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 2: |%.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 3: |%.3p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 4: |%.4p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 5: |%.5p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 10: |%.10p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 15: |%.15p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 42: |%.42p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) P .00: |%.00p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) P .01: |%.01p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01p|", 0));	
	result(test, t);
	test = printf(" (%d)\n", printf("P .00: |%.00p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .00: |%.00p|", val));	
	result(test, t);
	test = printf(" (%d)\n", printf("P .01: |%.01p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .01: |%.01p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .02: |%.02p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .02: |%.02p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .03: |%.03p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .03: |%.03p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .04: |%.04p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .04: |%.04p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .05: |%.05p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .05: |%.05p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .010: |%.010p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .010: |%.010p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .015: |%.015p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .015: |%.015p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .042: |%.042p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .042: |%.042p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .007: |%.007p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .007: |%.007p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .000000000007: |%.000000000007p|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007p|", val));
	result(test, t);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));
	result(test, t);	test = printf(" (%d)\n", printf("(0) 0.0: |%0.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 1.0: |%1.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(10) 1.0: |%1.0p|", 10));
	t = ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0p|", 10));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 0.1: |%0.1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 1.1: |%1.1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("0.0: |%0.0p|", val));
	t = ft_printf(" (%d)\n", ft_printf("0.0: |%0.0p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("1.1: |%1.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("1.1: |%1.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("2.2: |%2.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("2.2: |%2.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("3.2: |%3.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("3.2: |%3.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("2.3: |%2.3p|", val));
	t = ft_printf(" (%d)\n", ft_printf("2.3: |%2.3p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.4: |%8.4p|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.4: |%8.4p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("4.8: |%4.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("4.8: |%4.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.8: |%8.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.8: |%8.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.2: |%8.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.2: |%8.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("2.8: |%2.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("2.8: |%2.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.1: |%8.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.1: |%8.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("1.8: |%1.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("1.8: |%1.8p|", val));
	result(test, t);

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));
	result(test, t);	
	test = printf(" (%d)\n", printf("(0) 00.0: |%00.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 01.0: |%01.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 00.1: |%00.1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("01.1: |%01.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("01.1: |%01.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02.2: |%02.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("02.2: |%02.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("03.2: |%03.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("03.2: |%03.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02.3: |%02.3p|", val));
	t = ft_printf(" (%d)\n", ft_printf("02.3: |%02.3p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.4: |%08.4p|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.4: |%08.4p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("04.8: |%04.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("04.8: |%04.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.8: |%08.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.8: |%08.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.2: |%08.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.2: |%08.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02.8: |%02.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("02.8: |%02.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.1: |%08.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.1: |%08.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("01.8: |%01.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("01.8: |%01.8p|", val));
	result(test, t);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 0: |%0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 0: |%0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 00: |%00p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 00: |%00p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 01: |%01p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 01: |%01p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 02: |%02p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 02: |%02p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("0: |%0p|", val));
	t = ft_printf(" (%d)\n", ft_printf("0: |%0p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("00: |%00p|", val));
	t = ft_printf(" (%d)\n", ft_printf("00: |%00p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("01: |%01p|", val));
	t = ft_printf(" (%d)\n", ft_printf("01: |%01p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02: |%02p|", val));
	t = ft_printf(" (%d)\n", ft_printf("02: |%02p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("03: |%03p|", val));
	t = ft_printf(" (%d)\n", ft_printf("03: |%03p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08: |%08p|", val));
	t = ft_printf(" (%d)\n", ft_printf("08: |%08p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("000000000008: |%000000000008p|", val));
	t = ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("010: |%010p|", val));
	t = ft_printf(" (%d)\n", ft_printf("010: |%010p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("0000000000010: |%0000000000010p|", val));
	t = ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010p|", val));
	result(test, t);

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -0: |%-0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -00: |%-00p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -01: |%-01p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -02: |%-02p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-0: |%-0p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-0: |%-0p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-00: |%-00p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-00: |%-00p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-01: |%-01p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-01: |%-01p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-02: |%-02p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-02: |%-02p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-03: |%-03p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-03: |%-03p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-08: |%-08p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-08: |%-08p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("0-8: |%0-8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("0-8: |%0-8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-000000000008: |%-000000000008p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-010: |%-010p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-010: |%-010p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-0000000000010: |%-0000000000010p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010p|", val));
	result(test, t);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));
	result(test, t);	test = printf(" (%d)\n", printf("(0) Mfw -0: |%-0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Mfw -1: |%-1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Mfw -2: |%-2p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -0: |%-0p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -1: |%-1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -2: |%-2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -3: |%-3p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -4: |%-4p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -5: |%-5p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -10: |%-10p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw --10: |%--10p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw ---10: |%---10p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -15: |%-15p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -42: |%-42p|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42p|", val));
	result(test, t);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));
	result(test, t);	test = printf(" (%d)\n", printf("(0) -0.0: |%-0.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -0.1: |%-0.1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -1.0: |%-1.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -1.1: |%-1.1p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -0.2: |%-0.2p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -2.0: |%-2.0p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -2.2: |%-2.2p|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2p|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-0.0: |%-0.0p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-0.1: |%-0.1p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.0: |%-1.0p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.1: |%-1.1p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-0.2: |%-0.2p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.0: |%-2.0p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.2: |%-2.2p|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2p|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.1: |%-1.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.2: |%-2.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-3.2: |%-3.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.3: |%-2.3p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-4.8: |%-4.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.8: |%-8.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.2: |%-8.2p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.8: |%-2.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.1: |%-8.1p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1p|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.8: |%-1.8p|", val));
	t = ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8p|", val));
	result(test, t);
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	test = printf(" (%d)\n", printf("Handling wildcards"));
	t = ft_printf(" (%d)\n", ft_printf("Handling wildcards"));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *1: |%*p|", 1, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*p|", 1, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*p|", 5, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*p|",5, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*p|",        5, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|",        5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *10: |%*p|", 10, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*p|", 10, val));
	result(test, t);
	//test = printf(" (%d)\n", printf("Mfw *i: |%*p|", val, val));
	//t = ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*p|", val, val));
	//result(test, t);
	// t = printf(" (%d)\n", printf("Mfw **5: |%*.*p|", 5, 6, val));
	// t = ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*p|", 5, 6, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("Precis. .*1: |%.*p|", 1, val));
	// t = ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*p|", 1, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("Precis. .*5: |%.*p|", 5, val));
	// t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|", 5, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("Precis. .*5: |%.*p|",5, val));
	// t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",5, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("Precis. .*5: |%.*p|",      5, val));
	// t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",      5, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("Precis. .*10: |%.*p|", 10, val));
	// t = ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*p|", 10, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("Precis. .*i: |%.*p|", val, val));
	// t = ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*p|", val, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("P .*0: |%.*p|", 0, val));
	// t = ft_printf(" (%d)\n", ft_printf("P .*0: |%.*p|", 0, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("P .*01: |%.*p|", 01, val));
	// t = ft_printf(" (%d)\n", ft_printf("P .*01: |%.*p|", 01, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("P .*05: |%.*p|", 05, val));
	// t = ft_printf(" (%d)\n", ft_printf("P .*05: |%.*p|", 05, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("P .*010: |%.*p|", 010, val));
	// t = ft_printf(" (%d)\n", ft_printf("P .*010: |%.*p|", 010, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("P .*000000000007: |%.*p|", 000000000007, val));
	// t = ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*p|", 000000000007, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*8.4: |%*.4p|", 8, val));
	// t = ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4p|", 8, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*4.8: |%*.8p|", 4, val));
	// t = ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8p|", 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*8.8: |%*.8p|", 8, val));
	// t = ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8p|", 8, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("8.*4: |%8.*p|", 4, val));
	// t = ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*p|", 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("4.*8: |%4.*p|", 8, val));
	// t = ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*p|", 8, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("8.*8: |%8.*p|", 8, val));
	// t = ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*p|", 8, val));
	// result(test, t);

	// test = printf(" (%d)\n", printf("*8.*4: |%*.*p|", 8, 4, val));
	// t = ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*p|", 8, 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*4.*8: |%*.*p|", 4, 8, val));
	// t = ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*p|", 4, 8, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*8.*8: |%*.*p|", 8, 8, val));
	// t = ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*p|", 8, 8, val));
	// result(test, t);

	// printf("WEIRD OCTAL SHIT:\n");
	// test = printf(" (%d)\n", printf("*010.*4: |%*.*p|", 010, 4, val));
	// t = ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*p|", 010, 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf(" *07.*4: |%*.*p|", 07, 4, val));
	// t = ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*p|", 07, 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*4.*010: |%*.*p|", 4, 010, val));
	// t = ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*p|", 4, 010, val));
	// result(test, t);
	// printf("WEIRD HEXADECIMAL SHIT:\n");
	// test = printf(" (%d)\n", printf("*0x10.*4: |%*.*p|", 0x10, 4, val));
	// t = ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*p|", 0x10, 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf(" *0x7.*4: |%*.*p|", 0x7, 4, val));
	// t = ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*p|", 0x7, 4, val));
	// result(test, t);
	// test = printf(" (%d)\n", printf("*4.*0x10: |%*.*p|", 4, 0x10, val));
	// t = ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*p|", 4, 0x10, val));
	// result(test, t);



// 	//int octal;

// 	// octal = 010;
// 	// octal--;

// 	// printf("octal: %i\n", octal);

// 	// //this will print 7.

// 	// int octal_atoi;

// 	// octal_atoi = atoi("010");
// 	// octal_atoi--;

// 	// printf("octal: %i\n", octal_atoi);

// 	// //this will print 9.

// 	// int hexadec;

// 	// hexadec = 0x10;
// 	// hexadec--;

// 	// printf("hexadec: %i\n", hexadec);

// 	// //this will print 15.

// 	// int hexadec_atoi;

// 	// hexadec_atoi = atoi("0x10");
// 	// hexadec_atoi--;

// 	// printf("hexadec: %i\n", hexadec_atoi);

// 	// //this will print -1.

// 	test = printf(" (%d)\n", printf("*8: |%*p|", 8, val));
// 	t = ft_printf(" (%d)\n", ft_printf("*8: |%*p|", 8, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("0*8: |%0*p|", 8, val));
// 	t = ft_printf(" (%d)\n", ft_printf("0*8: |%0*p|", 8, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("00*8: |%00*p|", 8, val));
// 	t = ft_printf(" (%d)\n", ft_printf("00*8: |%00*p|", 8, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*p|", 8, val));
// 	t = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*p|", 8, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*0: |%-*p|", 0, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-*0: |%-*p|", 0, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-0*0: |%-0*p|", 0, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*p|", 0, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-0*3: |%-0*p|", 3, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*p|", 3, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(-03): |%*p|", -03, val));
// 	t = ft_printf(" (%d)\n", ft_printf("*(-03): |%*p|", -03, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(-5): |%*p|", -5, val));
// 	t = ft_printf(" (%d)\n", ft_printf("*(-5): |%*p|", -5, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(5): |%*p|", 5, val));
// 	t = ft_printf(" (%d)\n", ft_printf("*(5): |%*p|", 5, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*(5): |%-*p|", 5, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-*(5): |%-*p|", 5, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.4: |%-8.4p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4p|", val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*(8).4: |%-*.4p|", 8, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4p|", 8, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(-8).4: |%*.4p|", -8, val));
// 	t = ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4p|", -8, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), val));
// 	t = ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(4): |%-8.*p|", 4, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*p|", 4, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(-4): |%-8.*p|", -4, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*p|", -4, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(0): |%-8.*p|", 0, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*p|", 0, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(1): |%-8.*p|", 1, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*p|", 1, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*(0).4: |%-*.4p|", 0, val));
// 	t = ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4p|", 0, val));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(0).4: |%*.4p|", 0, val));
// 	t = ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4p|", 0, val));
// 	result(test, t);
// 	printf("\n------------------------------------------------------------------------------------------------\n\n");

// 	test = printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
// 	t = ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Mfw *1: |%*p|", 1, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*p|", 1, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Mfw *5: |%*p|", 5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Mfw *5: |%*p|",5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Mfw *5: |%*p|",        5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|",        5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Mfw *10: |%*p|", 10, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*p|", 10, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Mfw *i: |%*p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*p|", 0, 0));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Precis. .*1: |%.*p|", 1, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*p|", 1, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Precis. .*5: |%.*p|", 5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|", 5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Precis. .*5: |%.*p|",5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Precis. .*5: |%.*p|",      5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",      5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Precis. .*10: |%.*p|", 10, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*p|", 10, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("Precis. .*i: |%.*p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*p|", 0, 0));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("P .*0: |%.*p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("P .*0: |%.*p|", 0, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("P .*01: |%.*p|", 01, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("P .*01: |%.*p|", 01, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("P .*05: |%.*p|", 05, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("P .*05: |%.*p|", 05, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("P .*010: |%.*p|", 010, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("P .*010: |%.*p|", 010, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("P .*000000000007: |%.*p|", 000000000007, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*p|", 000000000007, 0));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("*8.4: |%*.4p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4p|", 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*4.8: |%*.8p|", 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8p|", 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*8.8: |%*.8p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8p|", 8, 0));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("8.*4: |%8.*p|", 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*p|", 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("4.*8: |%4.*p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*p|", 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("8.*8: |%8.*p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*p|", 8, 0));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("*8.*4: |%*.*p|", 8, 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*p|", 8, 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*4.*8: |%*.*p|", 4, 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*p|", 4, 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*8.*8: |%*.*p|", 8, 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*p|", 8, 8, 0));
// 	result(test, t);

// 	printf("WEIRD OCTAL SHIT:\n");
// 	test = printf(" (%d)\n", printf("*010.*4: |%*.*p|", 010, 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*p|", 010, 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf(" *07.*4: |%*.*p|", 07, 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*p|", 07, 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*4.*010: |%*.*p|", 4, 010, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*p|", 4, 010, 0));
// 	result(test, t);
// 	printf("WEIRD HEXADECIMAL SHIT:\n");
// 	test = printf(" (%d)\n", printf("*0x10.*4: |%*.*p|", 0x10, 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*p|", 0x10, 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf(" *0x7.*4: |%*.*p|", 0x7, 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*p|", 0x7, 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*4.*0x10: |%*.*p|", 4, 0x10, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*p|", 4, 0x10, 0));
// 	result(test, t);



// 	//int octal;

// 	// octal = 010;
// 	// octal--;

// 	// printf("octal: %i\n", octal);

// 	// //this will print 7.

// 	// int octal_atoi;

// 	// octal_atoi = atoi("010");
// 	// octal_atoi--;

// 	// printf("octal: %i\n", octal_atoi);

// 	// //this will print 9.

// 	// int hexadec;

// 	// hexadec = 0x10;
// 	// hexadec--;

// 	// printf("hexadec: %i\n", hexadec);

// 	// //this will print 15.

// 	// int hexadec_atoi;

// 	// hexadec_atoi = atoi("0x10");
// 	// hexadec_atoi--;

// 	// printf("hexadec: %i\n", hexadec_atoi);

// 	// //this will print -1.

// 	test = printf(" (%d)\n", printf("*8: |%*p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*8: |%*p|", 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("0*8: |%0*p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("0*8: |%0*p|", 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("00*8: |%00*p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("00*8: |%00*p|", 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*p|", 8, 0));
// 	result(test, t);


// 	test = printf(" (%d)\n", printf("-*0: |%-*p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-*0: |%-*p|", 0, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-0*0: |%-0*p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*p|", 0, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-0*3: |%-0*p|", 3, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*p|", 3, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(-03): |%*p|", -03, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*(-03): |%*p|", -03, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(-5): |%*p|", -5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*(-5): |%*p|", -5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(5): |%*p|", 5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*(5): |%*p|", 5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*(5): |%-*p|", 5, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-*(5): |%-*p|", 5, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.4: |%-8.4p|", 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4p|", 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*(8).4: |%-*.4p|", 8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4p|", 8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(-8).4: |%*.4p|", -8, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4p|", -8, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(4): |%-8.*p|", 4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*p|", 4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(-4): |%-8.*p|", -4, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*p|", -4, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(0): |%-8.*p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*p|", 0, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-8.*(1): |%-8.*p|", 1, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*p|", 1, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("-*(0).4: |%-*.4p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4p|", 0, 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("*(0).4: |%*.4p|", 0, 0));
// 	t = ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4p|", 0, 0));
// 	result(test, t);
	
// 	printf("\n------------------------------------------------------------------------------------------------\n\n");
	

// 	test = printf(" (%d)\n", printf("Negative ints are a pain:"));
// 	t = ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
// 	result(test, t);


// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
// 	result(test, t);


// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
// 	result(test, t);


// 	printf("\n------------------------------------------------------------------------------------------------\n\n");

// 	test = printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
// 	t = ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("8.: |%8.p|", 0));
// 	t = ft_printf(" (%d)\n", ft_printf("8.: |%8.p|", 0));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("8.: |%8.p|", 42));
// 	t = ft_printf(" (%d)\n", ft_printf("8.: |%8.p|", 42));
// 	result(test, t);
// 	test = printf(" (%d)\n", printf("08.*(-4): |%08.*p|", -4, 42));
// 	t = ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*p|", -4, 42));
// 	result(test, t);

// 	printf("\n------------------------------------------------------------------------------------------------\n\n");

// 	test = printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
// 	t = ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
// 	result(test, t);


// 	test = printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17p|", val));
// 	result(test, t);
// 	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20p|", val));
// 	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20p|", val));

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18p|", val));
// 	result(test, t);

// 	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15p|", val));
// 	result(test, t);


// 	printf("\n------------------------------------------------------------------------------------------------\n\n");

// 	test = printf(" (%d)\n", printf("Basic base calculation tests"));
// 	t = ft_printf(" (%d)\n", ft_printf("Basic base calculation tests"));
// 	result(test, t);

// 	val = 42;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = 15;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));	
// 	result(test, t);
// 	val = 16;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = 185334478;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = -1;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = 4294967295;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = -4294967295;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = 0;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);
// 	val = 2457;
// 	test = printf(" (%d)\n", printf("Ya basic: |%p|", val));
// 	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
// 	result(test, t);

// 	printf("\n------------------------------------------------------------------------------------------------\n\n");

// 	test = printf(" (%d)\n", printf("I LIKE EVEN BIGGER DIGITS AND I CANNOT LIE"));
// 	t = ft_printf(" (%d)\n", ft_printf("I LIKE EVEN BIGGER DIGITS AND I CANNOT LIE"));
// 	result(test, t);

// 	// unsigned long BIGGG = 0;
// 	// BIGGG = BIGGG - 1;

// 	// void *BIG = 0;
// 	// while ((BIG + 1) > BIG)
// 	// {
// 	// 	BIG = BIG + BIGGG;
// 	// 	printf("%p\n", BIG);
// 	// }
// 		// BIG = BIG + 1;
// 		// printf("%p\n", BIG);

// 		//this is just proof that the below number, e.g. unsigned long MAX, is the largest address that a 
// 		//'void *' pointer can hold. Uncomment the above to see that going one higher resets the value to zero
// 	// result(test, t);

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: -028.27i |%-028.27p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -028.27i |%-028.27p|", BIG));
// 	// result(test, t);
// 	// printf(" (%i)\n", printf("Sometimes it be like that: -028.30i |%-028.30p|", BIG));
// 	// ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -028.30i |%-028.30p|", BIG));

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: -28.27i |%-28.27p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -28.27i |%-28.27p|", BIG));
// 	// result(test, t);
// 	// printf(" (%i)\n", printf("Sometimes it be like that: -28.30i |%-28.30p|", BIG));
// 	// ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -28.30i |%-28.30p|", BIG));

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: 28.27i |%28.27p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 28.27i |%28.27p|", BIG));
// 	// result(test, t);
// 	// printf(" (%i)\n", printf("Sometimes it be like that: 28.30i |%28.30p|", BIG));
// 	// ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 28.30i |%28.30p|", BIG));

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: 028i |%028p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 028i |%028p|", BIG));
// 	// result(test, t);

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: 28i |%28p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 28i |%28p|", BIG));
// 	// result(test, t);

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: 28.25i |%28.25p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 28.25i |%28.25p|", BIG));
// 	// result(test, t);

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: -28i |%-28p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -28i |%-28p|", BIG));
// 	// result(test, t);

// 	// test = printf(" (%d)\n", printf("Sometimes it be like that: -28.25i |%-28.25p|", BIG));
// 	// t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -28.25i |%-28.25p|", BIG));
	

// 	// if(broken)
// 	// {
// 	// printf("This is an incomplete    printf conversion: %-0*.*", 13, 7);
// 	// ft_printf("This is an incomplete ft_printf conversion: %-0*.*", 13, 7);

// 	// printf("This is a bogus    printf conversion: %-0*.*b", 13, 7);
// 	// ft_printf("This is a bogus ft_printf conversion: %-0*.*b", 13, 7);

// 	// printf("This is a bogus    printf conversion with double precision: %-0*..*b", 13, 7);
// 	// ft_printf("This is a bogus ft_printf conversion with double precision: %-0*..*b", 13, 7);
// 	// }

	printf("		\x1b[31m FAILS: %d \x1b[0m\n\n\n", g_fail);

	return (0);
}
