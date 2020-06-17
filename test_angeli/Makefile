# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/06/17 20:13:38 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR = ../
LIB = libftprintf.a
INC = test.h
TEST = test.c

all:
	@make re -C ..
	@gcc -w -I $(INC) $(DIR)$(LIB) $(TEST)

td:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_decimal.c
	@./a.out
	@make clean

tu:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_unsigned.c
	@./a.out
	@make clean

tp:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_ptr.c
	@./a.out
	@make clean

ts:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_str.c
	@./a.out
	@make clean

tx:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_hexa_lower.c
	@./a.out
	@make clean

tc:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_char.c
	@./a.out
	@make clean

tb:
	@make re -C ..
	@gcc -w -I $(INC) $(TEST) $(DIR)$(LIB) main_pct.c
	@./a.out
	@make clean
	
clean:
	@rm -rf a.out