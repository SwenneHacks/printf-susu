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

DIR 	= ..
INC		= test.h
PRINTF 	= /lib/libftprintf.a
FLAGS 	= -Wall -Werror -Wextra

BTEST 	= test.c
CTEST	= test_c.c
DTEST	= test_d.c
STEST	= test_s.c

all:
	@make re -C $(DIR)
	@mkdir out

clean:
	@make fclean -C $(DIR)
	@rm -rf out
	@echo "---- Done cleaning everything.\n"

re: clean all

tc: re
	@gcc $(DIR)$(PRINTF) $(CTEST) -o out/test_c
	@echo ""
	@./out/test_c

td: re
	@gcc $(DIR)$(PRINTF) $(DTEST) -o out/test_d
	@echo ""
	@./out/test_d

tp: re
	@gcc $(DIR)$(PRINTF) $(DTEST) -o out/test_d
	@echo ""
	@./out/test_d

ts: re
	@gcc $(DIR)$(PRINTF) $(STEST) -o out/test_s
	@echo ""
	@./out/test_s

tb: re
	@gcc $(DIR)$(PRINTF) $(BTEST) -o out/test
	@echo ""
	@./out/test

fix: re
	@gcc -g main.c $(DIR)$(PRINTF)
	@echo "---- Done compiling for debugger.\n"
	@./a.out

add:
	git add test* Makefile README.md
	git status
