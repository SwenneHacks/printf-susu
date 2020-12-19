/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_decimal.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 19:45:27 by limartin      #+#    #+#                 */
/*   Updated: 2020/06/19 21:33:03 by swofferh      ########   odam.nl         */
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
	char	val = 'a';
	// val = '%';
	// val = 'c';
	// val = '$';
    // val = (char)-42;

	int broken = 0;
	int	bonus = 0;
	
	g_pass 	= 0;
	g_test	= 1;
	g_fail	= 0;

	int test = 0;
	int t = 0;

	int octal;

	octal = 010;
	octal--;

	printf("octal: %i\n", octal);

	//this will print 7.

	int octal_atoi;

	octal_atoi = atoi("010");
	octal_atoi--;

	printf("octal: %i\n", octal_atoi);

	//this will print 9.

	int hexadec;

	hexadec = 0x10;
	hexadec--;

	printf("hexadec: %i\n", hexadec);

	//this will print 15.

	int hexadec_atoi;

	hexadec_atoi = atoi("0x10");
	hexadec_atoi--;

	printf("hexadec: %i\n\n", hexadec_atoi);

	//this will print -1.

	test = printf(" (%d)\n", printf("*8: |%*i|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*8: |%*i|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("0*8: |%0*i|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("0*8: |%0*i|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("00*8: |%00*i|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("00*8: |%00*i|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*i|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*i|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*0: |%-*i|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*0: |%-*i|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-0*0: |%-0*i|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*i|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-0*3: |%-0*i|", 3, 0));
	t = ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*i|", 3, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-03): |%*i|", -03, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(-03): |%*i|", -03, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-5): |%*i|", -5, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(-5): |%*i|", -5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(5): |%*i|", 5, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(5): |%*i|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(5): |%-*i|", 5, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*(5): |%-*i|", 5, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.4: |%-8.4i|", 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4i|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(8).4: |%-*.4i|", 8, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4i|", 8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(-8).4: |%*.4i|", -8, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4i|", -8, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(int)(-8.4): |%*i|", ((int)(-8.4)), 0));
	t = ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*i|", ((int)(-8.4)), 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(4): |%-8.*i|", 4, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*i|", 4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(-4): |%-8.*i|", -4, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*i|", -4, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(0): |%-8.*i|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*i|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-8.*(1): |%-8.*i|", 1, 0));
	t = ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*i|", 1, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("-*(0).4: |%-*.4i|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4i|", 0, 0));
	result(test, t);
	test = printf(" (%d)\n", printf("*(0).4: |%*.4i|", 0, 0));
	t = ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4i|", 0, 0));
	result(test, t);
	
	test = printf(" (%d)\n", printf("Negative ints are a pain:"));
	t = ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", val));
	result(test, t);
	test = printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", val));
	result(test, t);
	test = printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", val));
	t = t = ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", val));
	result(test, t);
	test = printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", val));
	result(test, t);
	test = printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", val));
	result(test, t);
	test = printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", val));
	result(test, t);
	test = printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", val));
	result(test, t);
	
	test = printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	t = ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	result(test, t);
	test = printf(" (%d)\n", printf("8.: |%8.i|", 0));
	t = ft_printf(" (%d)\n", ft_printf("8.: |%8.i|", 0));
	result(test, t);
	test = printf(" (%d)\n", printf("8.: |%8.i|", 42));
	t = ft_printf(" (%d)\n", ft_printf("8.: |%8.i|", 42));
	result(test, t);
	test = printf(" (%d)\n", printf("08.*(-4): |%08.*i|", -4, 42));
	t = ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*i|", -4, 42));
	result(test, t);

	test = printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	t = ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17i|", val));
	test = printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17i|", val));
	test = printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17i|", val));
	test = printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20i|", val));
	t = ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18i|", val));
	result(test, t);
	test = printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15i|", val));
	t = ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15i|", val));
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

	printf("		\x1b[31m FAILS: %d \x1b[0m\n\n\n", g_fail);

	return (0);
}
