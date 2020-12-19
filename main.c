/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 19:19:09 by swofferh      #+#    #+#                 */
/*   Updated: 2020/12/19 22:35:13 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>

int	main(void)
{
	int a = 0;
	int b = 0;
	a = printf(		"|%0-*.*x|\n", 10, 11, 5);
	b = ft_printf(	"|%0-*.*x|\n", 10, 11, 5);
	while (1);
	printf("\npf |%d|\nft |%d|\n\n", a, b);
	//while (1);
	//system("leaks bug");
	return(0);
}