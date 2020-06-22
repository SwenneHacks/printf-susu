/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 19:19:09 by swofferh      #+#    #+#                 */
/*   Updated: 2020/06/22 19:46:18 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int a = 0;
	int b = 0;
	a = printf(		"[%-3.1u]\n", 3);
	b = ft_printf(	"[%-3.1u]\n", 3);
	printf("\npf |%d|\nft |%d|\n\n", a, b);
	return (0);
}