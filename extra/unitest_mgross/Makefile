# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mgross <mgross@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/24 16:32:25 by mgross         #+#    #+#                 #
#    Updated: 2019/06/17 18:25:51 by nstabel       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

all:
	@make re -C ../vogesphere
	@make clean -C ../vogesphere
	@gcc -g -w -o unit_test unit_test.c -I. ../vogesphere/libftprintf.a

	@echo "usage: ./unit_test [less] all [flags] \n\
	flags:	less	- hide details \n\
		all	- all conversions at once \n\
		c	- character \n\
		s	- string \n\
		p	- pointer \n\
		d / i	- integer \n\
		u	- unsigned (including hexadecimal and octal) \n\
		f	- floats \n\
		Lf	- long doubles \n\
		dollar	- number of argument \n\
		e	- floats in scientific mode \n\
		Le	- doubles in scientific mode"