/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_hexa_lower.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 19:45:27 by limartin      #+#    #+#                 */
/*   Updated: 2020/06/17 21:20:00 by swofferh      ########   odam.nl         */
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
	unsigned int	val;

	val = 42;
	val = 15;
	val = 16;
	val = 185334478;
	val = -1;
	val = 4294967295;
	val = -4294967295;
	val = 0;
	val = 2457;
	
	g_pass 	= 0;
	g_test	= 1;
	g_fail	= 0;

	int test;
	int t;

	int broken = 0;
	int	bonus = 0;

	test = printf(" (%d)\n", printf("Handling minimum field width"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) Mfw 0: |%0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Mfw 1: |%1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 0: |%0x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 1: |%1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 2: |%2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 3: |%3x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 4: |%4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 5: |%5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 10: |%10x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 15: |%15x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw 42: |%42x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42x|", val));
result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling precision"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) Precis. 0: |%.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Precis. 1: |%.1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Precis. 2: |%.2x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 0: |%.0x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 1: |%.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 2: |%.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 3: |%.3x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 4: |%.4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 5: |%.5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 10: |%.10x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 15: |%.15x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. 42: |%.42x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42x|", val));
result(test, t);

	test = printf(" (%d)\n", printf("(0) P .00: |%.00x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) P .01: |%.01x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01x|", 0));	
	result(test, t);
	test = printf(" (%d)\n", printf("P .00: |%.00x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .00: |%.00x|", val));	
	result(test, t);
	test = printf(" (%d)\n", printf("P .01: |%.01x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .01: |%.01x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .02: |%.02x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .02: |%.02x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .03: |%.03x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .03: |%.03x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .04: |%.04x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .04: |%.04x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .05: |%.05x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .05: |%.05x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .010: |%.010x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .010: |%.010x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .015: |%.015x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .015: |%.015x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .042: |%.042x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .042: |%.042x|", val));
result(test, t);

	test = printf(" (%d)\n", printf("P .007: |%.007x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .007: |%.007x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .000000000007: |%.000000000007x|", val));
	t = ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007x|", val));
result(test, t);


	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) 0.0: |%0.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 1.0: |%1.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(10) 1.0: |%1.0x|", 10));
	t = ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0x|", 10));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 0.1: |%0.1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 1.1: |%1.1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("0.0: |%0.0x|", val));
	t = ft_printf(" (%d)\n", ft_printf("0.0: |%0.0x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("1.1: |%1.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("1.1: |%1.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("2.2: |%2.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("2.2: |%2.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("3.2: |%3.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("3.2: |%3.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("2.3: |%2.3x|", val));
	t = ft_printf(" (%d)\n", ft_printf("2.3: |%2.3x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.4: |%8.4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.4: |%8.4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("4.8: |%4.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("4.8: |%4.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.8: |%8.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.8: |%8.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.2: |%8.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.2: |%8.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("2.8: |%2.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("2.8: |%2.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.1: |%8.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("8.1: |%8.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("1.8: |%1.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("1.8: |%1.8x|", val));
result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) 00.0: |%00.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 01.0: |%01.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 00.1: |%00.1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("01.1: |%01.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("01.1: |%01.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02.2: |%02.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("02.2: |%02.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("03.2: |%03.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("03.2: |%03.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02.3: |%02.3x|", val));
	t = ft_printf(" (%d)\n", ft_printf("02.3: |%02.3x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.4: |%08.4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.4: |%08.4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("04.8: |%04.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("04.8: |%04.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.8: |%08.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.8: |%08.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.2: |%08.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.2: |%08.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02.8: |%02.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("02.8: |%02.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08.1: |%08.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("08.1: |%08.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("01.8: |%01.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("01.8: |%01.8x|", val));
result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) 0: |%0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 0: |%0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 00: |%00x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 00: |%00x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 01: |%01x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 01: |%01x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) 02: |%02x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) 02: |%02x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("0: |%0x|", val));
	t = ft_printf(" (%d)\n", ft_printf("0: |%0x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("00: |%00x|", val));
	t = ft_printf(" (%d)\n", ft_printf("00: |%00x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("01: |%01x|", val));
	t = ft_printf(" (%d)\n", ft_printf("01: |%01x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("02: |%02x|", val));
	t = ft_printf(" (%d)\n", ft_printf("02: |%02x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("03: |%03x|", val));
	t = ft_printf(" (%d)\n", ft_printf("03: |%03x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("08: |%08x|", val));
	t = ft_printf(" (%d)\n", ft_printf("08: |%08x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("000000000008: |%000000000008x|", val));
	t = ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("010: |%010x|", val));
	t = ft_printf(" (%d)\n", ft_printf("010: |%010x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("0000000000010: |%0000000000010x|", val));
	t = ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010x|", val));
result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) -0: |%-0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -00: |%-00x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -01: |%-01x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -02: |%-02x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02x|", 0));
result(test, t);

	test = printf(" (%d)\n", printf("-0: |%-0x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-0: |%-0x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-00: |%-00x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-00: |%-00x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-01: |%-01x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-01: |%-01x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-02: |%-02x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-02: |%-02x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-03: |%-03x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-03: |%-03x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-08: |%-08x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-08: |%-08x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("0-8: |%0-8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("0-8: |%0-8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-000000000008: |%-000000000008x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-010: |%-010x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-010: |%-010x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-0000000000010: |%-0000000000010x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010x|", val));
result(test, t);


	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	t = ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) Mfw -0: |%-0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Mfw -1: |%-1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) Mfw -2: |%-2x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2x|", 0));
	result(test, t);

	test = printf(" (%d)\n", printf("Mfw -0: |%-0x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -1: |%-1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -2: |%-2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -3: |%-3x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -4: |%-4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -5: |%-5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -10: |%-10x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw --10: |%--10x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw ---10: |%---10x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -15: |%-15x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw -42: |%-42x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42x|", val));
result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	t = ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));
result(test, t);

	test = printf(" (%d)\n", printf("(0) -0.0: |%-0.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -0.1: |%-0.1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -1.0: |%-1.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -1.1: |%-1.1x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -0.2: |%-0.2x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -2.0: |%-2.0x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("(0) -2.2: |%-2.2x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2x|", 0));
result(test, t);


	test = printf(" (%d)\n", printf("-0.0: |%-0.0x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0x|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-0.1: |%-0.1x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1x|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.0: |%-1.0x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0x|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.1: |%-1.1x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1x|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-0.2: |%-0.2x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2x|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.0: |%-2.0x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0x|", 5));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.2: |%-2.2x|", 5));
	t = ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2x|", 5));
result(test, t);


	test = printf(" (%d)\n", printf("-1.1: |%-1.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.2: |%-2.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-3.2: |%-3.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.3: |%-2.3x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-4.8: |%-4.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.8: |%-8.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.2: |%-8.2x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-2.8: |%-2.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.1: |%-8.1x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-1.8: |%-1.8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8x|", val));
result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling wildcards"));
	t = ft_printf(" (%d)\n", ft_printf("Handling wildcards"));
result(test, t);

	test = printf(" (%d)\n", printf("Mfw *1: |%*x|", 1, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*x|", 1, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*x|", 5, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*x|",5, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*x|",        5, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|",        5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *10: |%*x|", 10, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*x|", 10, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *i: |%*x|", val, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*x|", val, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw **5: |%*.*x|", 5, 6, val));
	t = ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*x|", 5, 6, val));
	result(test, t);

	test = printf(" (%d)\n", printf("Precis. .*1: |%.*x|", 1, val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*x|", 1, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*x|", 5, val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*x|",5, val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*x|",      5, val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",      5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*10: |%.*x|", 10, val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*x|", 10, val));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*i: |%.*x|", val, val));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*x|", val, val));
	result(test, t);

	test = printf(" (%d)\n", printf("P .*0: |%.*x|", 0, val));
	t = ft_printf(" (%d)\n", ft_printf("P .*0: |%.*x|", 0, val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*01: |%.*x|", 01, val));
	t = ft_printf(" (%d)\n", ft_printf("P .*01: |%.*x|", 01, val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*05: |%.*x|", 05, val));
	t = ft_printf(" (%d)\n", ft_printf("P .*05: |%.*x|", 05, val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*010: |%.*x|", 010, val));
	t = ft_printf(" (%d)\n", ft_printf("P .*010: |%.*x|", 010, val));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*000000000007: |%.*x|", 000000000007, val));
	t = ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*x|", 000000000007, val));
	result(test, t);

	test = printf(" (%d)\n", printf("*8.4: |%*.4x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4x|", 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.8: |%*.8x|", 4, val));
	t = ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8x|", 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*8.8: |%*.8x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8x|", 8, val));
	result(test, t);

	test = printf(" (%d)\n", printf("8.*4: |%8.*x|", 4, val));
	t = ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*x|", 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("4.*8: |%4.*x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*x|", 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("8.*8: |%8.*x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*x|", 8, val));
	result(test, t);

	test = printf(" (%d)\n", printf("*8.*4: |%*.*x|", 8, 4, val));
	t = ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*x|", 8, 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.*8: |%*.*x|", 4, 8, val));
	t = ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*x|", 4, 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*8.*8: |%*.*x|", 8, 8, val));
	t = ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*x|", 8, 8, val));
	result(test, t);

	printf("WEIRD OCTAL SHIT:\n");
	test = printf(" (%d)\n", printf("*010.*4: |%*.*x|", 010, 4, val));
	t = ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*x|", 010, 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf(" *07.*4: |%*.*x|", 07, 4, val));
	t = ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*x|", 07, 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.*010: |%*.*x|", 4, 010, val));
	t = ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*x|", 4, 010, val));
	result(test, t);
	printf("WEIRD HEXADECIMAL SHIT:\n");
	test = printf(" (%d)\n", printf("*0x10.*4: |%*.*x|", 0x10, 4, val));
	t = ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*x|", 0x10, 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf(" *0x7.*4: |%*.*x|", 0x7, 4, val));
	t = ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*x|", 0x7, 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.*0x10: |%*.*x|", 4, 0x10, val));
	t = ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*x|", 4, 0x10, val));
	result(test, t);



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

	test = printf(" (%d)\n", printf("*8: |%*x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("*8: |%*x|", 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("0*8: |%0*x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("0*8: |%0*x|", 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("00*8: |%00*x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("00*8: |%00*x|", 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*x|", 8, val));
	result(test, t);


	test = printf(" (%d)\n", printf("-*0: |%-*x|", 0, val));
	t = ft_printf(" (%d)\n", ft_printf("-*0: |%-*x|", 0, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-0*0: |%-0*x|", 0, val));
	t = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*x|", 0, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-0*3: |%-0*x|", 3, val));
	t = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*x|", 3, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-03): |%*x|", -03, val));
	t = ft_printf(" (%d)\n", ft_printf("*(-03): |%*x|", -03, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-5): |%*x|", -5, val));
	t = ft_printf(" (%d)\n", ft_printf("*(-5): |%*x|", -5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*(5): |%*x|", 5, val));
	t = ft_printf(" (%d)\n", ft_printf("*(5): |%*x|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(5): |%-*x|", 5, val));
	t = ft_printf(" (%d)\n", ft_printf("-*(5): |%-*x|", 5, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4x|", val));
	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4x|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(8).4: |%-*.4x|", 8, val));
	t = ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4x|", 8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-8).4: |%*.4x|", -8, val));
	t = ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4x|", -8, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), val));
	t = ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(4): |%-8.*x|", 4, val));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*x|", 4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(-4): |%-8.*x|", -4, val));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*x|", -4, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(0): |%-8.*x|", 0, val));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*x|", 0, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(1): |%-8.*x|", 1, val));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*x|", 1, val));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(0).4: |%-*.4x|", 0, val));
	t = ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4x|", 0, val));
	result(test, t);
	test = printf(" (%d)\n", printf("*(0).4: |%*.4x|", 0, val));
	t = ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4x|", 0, val));
result(test, t);


	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	t = ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
	result(test, t);

	test = printf(" (%d)\n", printf("Mfw *1: |%*x|", 1, 0));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*x|", 1, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*x|", 5, 0));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*x|",5, 0));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *5: |%*x|",        5, 0));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|",        5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *10: |%*x|", 10, 0));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*x|", 10, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Mfw *i: |%*x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*x|", 0, 0));
	result(test, t);

	test = printf(" (%d)\n", printf("Precis. .*1: |%.*x|", 1, 0));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*x|", 1, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*x|", 5, 0));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*x|",5, 0));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*5: |%.*x|",      5, 0));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",      5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*10: |%.*x|", 10, 0));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*x|", 10, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("Precis. .*i: |%.*x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*x|", 0, 0));
	result(test, t);

	test = printf(" (%d)\n", printf("P .*0: |%.*x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("P .*0: |%.*x|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*01: |%.*x|", 01, 0));
	t = ft_printf(" (%d)\n", ft_printf("P .*01: |%.*x|", 01, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*05: |%.*x|", 05, 0));
	t = ft_printf(" (%d)\n", ft_printf("P .*05: |%.*x|", 05, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*010: |%.*x|", 010, 0));
	t = ft_printf(" (%d)\n", ft_printf("P .*010: |%.*x|", 010, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("P .*000000000007: |%.*x|", 000000000007, 0));
	t = ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*x|", 000000000007, 0));
	result(test, t);

	test = printf(" (%d)\n", printf("*8.4: |%*.4x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4x|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.8: |%*.8x|", 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8x|", 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*8.8: |%*.8x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8x|", 8, 0));
	result(test, t);

	test = printf(" (%d)\n", printf("8.*4: |%8.*x|", 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*x|", 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("4.*8: |%4.*x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*x|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("8.*8: |%8.*x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*x|", 8, 0));
	result(test, t);

	test = printf(" (%d)\n", printf("*8.*4: |%*.*x|", 8, 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*x|", 8, 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.*8: |%*.*x|", 4, 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*x|", 4, 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*8.*8: |%*.*x|", 8, 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*x|", 8, 8, 0));
	result(test, t);

	printf("WEIRD OCTAL SHIT:\n");
	test = printf(" (%d)\n", printf("*010.*4: |%*.*x|", 010, 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*x|", 010, 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf(" *07.*4: |%*.*x|", 07, 4, 0));
	t = ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*x|", 07, 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.*010: |%*.*x|", 4, 010, 0));
	t = ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*x|", 4, 010, 0));
	result(test, t);
	printf("WEIRD HEXADECIMAL SHIT:\n");
	test = printf(" (%d)\n", printf("*0x10.*4: |%*.*x|", 0x10, 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*x|", 0x10, 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf(" *0x7.*4: |%*.*x|", 0x7, 4, 0));
	t = ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*x|", 0x7, 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*4.*0x10: |%*.*x|", 4, 0x10, 0));
	t = ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*x|", 4, 0x10, 0));
	result(test, t);



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

	test = printf(" (%d)\n", printf("*8: |%*x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*8: |%*x|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("0*8: |%0*x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("0*8: |%0*x|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("00*8: |%00*x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("00*8: |%00*x|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*x|", 8, 0));
	result(test, t);


	test = printf(" (%d)\n", printf("-*0: |%-*x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*0: |%-*x|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-0*0: |%-0*x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*x|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-0*3: |%-0*x|", 3, 0));
	t = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*x|", 3, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-03): |%*x|", -03, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(-03): |%*x|", -03, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-5): |%*x|", -5, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(-5): |%*x|", -5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(5): |%*x|", 5, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(5): |%*x|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(5): |%-*x|", 5, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*(5): |%-*x|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(8).4: |%-*.4x|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4x|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-8).4: |%*.4x|", -8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4x|", -8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), 0));
	t = ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(4): |%-8.*x|", 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*x|", 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(-4): |%-8.*x|", -4, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*x|", -4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(0): |%-8.*x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*x|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(1): |%-8.*x|", 1, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*x|", 1, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(0).4: |%-*.4x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4x|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(0).4: |%*.4x|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4x|", 0, 0));
result(test, t);


	printf("\n----------------------------------------------------\n");
	
	

	test = printf(" (%d)\n", printf("Negative ints are a pain:"));
	t = ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	result(test, t);


	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	result(test, t);


	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	result(test, t);


	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	t = ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	result(test, t);

	test = printf(" (%d)\n", printf("8.: |%8.x|", 0));
	t = ft_printf(" (%d)\n", ft_printf("8.: |%8.x|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("8.: |%8.x|", 42));
	t = ft_printf(" (%d)\n", ft_printf("8.: |%8.x|", 42));
	result(test, t);
	test = printf(" (%d)\n", printf("08.*(-4): |%08.*x|", -4, 42));
	t = ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*x|", -4, 42));
	result(test, t);

	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	t = ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	result(test, t);


	test = printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20x|", val));

	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20x|", val));

	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17x|", val));
	result(test, t);
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20x|", val));

	test = printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18x|", val));
	result(test, t);

	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15x|", val));
	result(test, t);


	printf("\n----------------------------------------------------\n");

	test = printf(" (%d)\n", printf("Basic base calculation tests"));
	t = ft_printf(" (%d)\n", ft_printf("Basic base calculation tests"));
	result(test, t);

	val = 42;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = 15;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));	
	result(test, t);
	val = 16;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = 185334478;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = -1;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = 4294967295;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = -4294967295;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = 0;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);
	val = 2457;
	test = printf(" (%d)\n", printf("Ya basic: |%x|", val));
	t = ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	result(test, t);

	

	if(broken)
	{
	printf("This is an incomplete    printf conversion: %-0*.*", 13, 7);
	ft_printf("This is an incomplete ft_printf conversion: %-0*.*", 13, 7);

	printf("This is a bogus    printf conversion: %-0*.*b", 13, 7);
	ft_printf("This is a bogus ft_printf conversion: %-0*.*b", 13, 7);

	printf("This is a bogus    printf conversion with double precision: %-0*..*b", 13, 7);
	ft_printf("This is a bogus ft_printf conversion with double precision: %-0*..*b", 13, 7);
	}


	printf("				\x1b[31m FAILS: %d \x1b[0m\n\n\n", g_fail);

	return (0);
}
