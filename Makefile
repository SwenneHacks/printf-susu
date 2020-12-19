# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/12/19 22:31:18 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR = ../
LIB = libftprintf.a
INC = printf.h
TEST = test.c

all:
	@make re -C $(DIR)
	@mkdir -p output

td: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_d.c
	@./a.out
	@mv a.out output/out_decimal

tu: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_u.c
	@./a.out
	@mv a.out output/out_unsigned

tp: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_p.c
	@./a.out
	@mv a.out output/out_pointer

ts: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_s.c
	@./a.out
	@mv a.out output/out_string

tx: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_x.c
	@./a.out
	@mv a.out output/out_hexadecimal

tc: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_c.c
	@./a.out
	@mv a.out output/out_characters

tb: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) test_b.c
	@./a.out
	@mv a.out output/out_bonus

bug:
	@gcc -w -I $(DIR)$(INC) -g main.c $(TEST) $(DIR)$(LIB) -o bug
	@echo "---- Done compiling for debugger.\n"
	@./bug

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
	@rm -rf a.out bug
	@rm -rf bug.dSYM 
	