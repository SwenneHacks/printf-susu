# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh      #+#    #+#                  #
#    Updated: 2020/06/10 21:35:05 by sofferha      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR 	= ../vogesphere/
INC		= test.h

all:
	@make re -C $(DIR)

clean:
	@rm -rf a.out

tc: all
	@gcc -I $(INC) $(DIR)libftprintf.a test_c.c
	@echo ""
	@./a.out
	@make clean

td: all
	@gcc -I $(INC) $(DIR)libftprintf.a test_d.c 
	@echo ""
	@./a.out
	@make clean

tu: all 
	@gcc -I $(INC) $(DIR)libftprintf.a test_u.c 
	@echo ""
	@./a.out
	@make clean

tp: all
	@gcc -I $(INC) $(DIR)libftprintf.a test_p.c 
	@echo ""
	@./a.out
	@make clean

ts: all
	@gcc -I $(INC) $(DIR)libftprintf.a test_s.c 
	@echo ""
	@./a.out
	@make clean

tx: all
	@gcc -I $(INC) $(DIR)libftprintf.a test_x.c 
	@echo ""
	@./a.out
	@make clean

tb: all
	@gcc -I $(INC) $(DIR)libftprintf.a test.c
	@echo ""
	@./a.out
	@make clean

fix: all
	@gcc -I $(INC) -g main.c $(DIR)libftprintf.a
	@echo "---- Done compiling for debugger.\n"
	@./a.out
	@make clean
