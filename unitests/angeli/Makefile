# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/06/22 21:31:16 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR = ../../
LIB = libftprintf.a
INC = printf.h
TEST = test.c

all:
	@make re -C $(DIR)

td: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_decimal.c
	@./a.out > output_td
	@cat output_td

tu: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_unsigned.c
	@./a.out > output_tu
	@cat output_tu

tp: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_ptr.c
	@./a.out > output_tp
	@cat output_tp

ts: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_str.c
	@./a.out > output_ts
	@cat output_ts

tx: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_hexa_lower.c
	@./a.out > output_tx
	@cat output_tx

tc: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_char.c
	@./a.out > output_tc
	@cat output_tc

tb: all
	@gcc -w -I $(DIR)$(INC) $(TEST) $(DIR)$(LIB) main_pct.c
	@./a.out > output_tb
	@cat output_tb
	
clean:
	@rm -rf a.out
	@rm -rf output_*