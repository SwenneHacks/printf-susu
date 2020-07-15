/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/17 19:04:04 by swofferh      #+#    #+#                 */
/*   Updated: 2020/06/17 19:38:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	result(int test, int ft)
{
	printf("\x1b[33m[test %d] \x1b[0m", g_test);
	if (test == ft)
	{
		printf("\x1b[32m PASS \x1b[0m\n\n");
		g_pass++;
	}
	else
	{
		printf("\n\x1b[31m FAIL \x1b[0m\n\n\n");
		g_fail++;
	}
	g_test++;
}
