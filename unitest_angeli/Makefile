# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/06/19 21:13:37 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR = ../../vogesphere/
LIB = libftprintf.a
INC = printf.h
TEST = test.c

all:
	@make re -C $(DIR)

td: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_decimal.c
	@./a.out
	@make clean

tu: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_unsigned.c
	@./a.out
	@make clean

tp: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_ptr.c
	@./a.out
	@make clean

ts: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_str.c
	@./a.out
	@make clean

tx: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_hexa_lower.c
	@./a.out
	@make clean

tc: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_char.c
	@./a.out
	@make clean

tb: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_pct.c
	@./a.out
	@make clean
	
clean:
	@rm -rf a.out