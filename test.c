/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 20:37:12 by swofferh      #+#    #+#                 */
/*   Updated: 2020/06/19 20:37:15 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	result(int test, int ft)
{
	if (test == ft)
	{
		printf("				\x1b[32m PASS \x1b[0m\n");
		g_pass++;
	}
	else
	{
		printf("				\x1b[31m FAIL \x1b[0m\n");
		printf("				pf[%d]\n", test - 5);
		printf("				ft[%d]\n\n", ft - 5);
		g_fail++;
	}
	g_test++;
}
