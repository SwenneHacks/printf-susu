# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/06/20 23:41:05 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR = ../vogesphere/
LIB = libftprintf.a
INC = printf.h
TEST = test.c

all:
	@make re -C $(DIR)
	@mkdir output

td:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_d.c
	@./a.out
	@mv a.out output/out_decimal

tu:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_u.c
	@./a.out
	@mv a.out output/out_unsigned

tp:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_p.c
	@./a.out
	@mv a.out output/out_pointer

ts:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_s.c
	@./a.out
	@mv a.out output/out_string

tx:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_x.c
	@./a.out
	@mv a.out output/out_hexadecimal

tc:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_c.c
	@./a.out
	@mv a.out output/out_characters

tb:
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_b.c
	@./a.out
	@mv a.out output/out_bonus

bug:
	@gcc -w -I $(DIR)$(INC) -g main.c $(TEST) $(DIR)$(LIB)
	@echo "---- Done compiling for debugger.\n"
	@./a.out
	@mv a.out output/out_debugging

total: tb tc tx ts tp tu td 
	@clear
	@./output/out_decimal | tail -n5
	@./output/out_characters | tail -n5
	@./output/out_hexadecimal | tail -n5
	@./output/out_unsigned | tail -n5
	@./output/out_pointer | tail -n5
	@./output/out_string | tail -n5
	@./output/out_bonus | tail -n5
	
clean:
	@rm -rf output
	@rm -rf a.out