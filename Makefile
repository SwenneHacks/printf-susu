# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/16 17:46:43 by swofferh       #+#    #+#                 #
#    Updated: 2019/12/22 21:42:57 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

DIR 	= ../vogesphere/
INC		= test.h
PRINTF 	= libftprintf.a

all:
	@make re -C $(DIR)
	@mkdir -p ./out

clean:
	@make fclean -C $(DIR)
	@rm -rf ./out
	@echo "---- Done cleaning everything at (./test).\n"

tc: all
	@gcc $(DIR)$(PRINTF) test_c.c -o out/test_c
	@echo ""
	@./out/test_c

td: all
	@gcc $(DIR)$(PRINTF) test_d.c -o out/test_d
	@echo ""
	@./out/test_d

tu: all 
	@gcc $(DIR)$(PRINTF) test_u.c -o out/test_u
	@echo ""
	@./out/test_u

tp: all
	@gcc $(DIR)$(PRINTF) test_p.c -o out/test_p
	@echo ""
	@./out/test_p

ts: all
	@gcc $(DIR)$(PRINTF) test_s.c -o out/test_s
	@echo ""
	@./out/test_s

tx: all
	@gcc $(DIR)$(PRINTF) test_x.c -o out/test_x
	@echo ""
	@./out/test_x

tb: all
	@gcc $(DIR)$(PRINTF) test.c -o out/test_bonus
	@echo ""
	@./out/test_bonus

fix: all
	@gcc -g main.c $(DIR)$(PRINTF)
	@echo "---- Done compiling for debugger.\n"
	@./a.out

add:
	git add test* Makefile README.md
	git status
