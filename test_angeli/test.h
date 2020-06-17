/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/08 22:27:52 by swofferh      #+#    #+#                 */
/*   Updated: 2020/06/17 19:38:26 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include "../printf.h"

int g_pass;
int g_test;
int g_fail;

void	result(int test, int ft);

#endif
