# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/06/17 18:40:59 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR = ../
LIB = libftprintf.a
INC = test.h
TEST = test.c

all:
	@make re -C ..
	@gcc -I $(INC) $(DIR)$(LIB) $(TEST)

td:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_d.c
	@./a.out
	@make clean

tu:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_u.c
	@./a.out
	@make clean

tp:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_p.c
	@./a.out
	@make clean

ts:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_s.c
	@./a.out
	@make clean

tx:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_x.c
	@./a.out
	@make clean

tc:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_c.c
	@./a.out
	@make clean

tb:
	@make re -C ..
	@gcc -I $(INC) $(TEST) $(DIR)$(LIB) test_b.c
	@./a.out
	@make clean

bug:
	@make re -C ..
	@gcc -I $(INC) -g main.c $(TEST) $(DIR)$(LIB)
	@echo "---- Done compiling for debugger.\n"
	@./a.out
	@make clean
	
clean:
	rm -rf a.out