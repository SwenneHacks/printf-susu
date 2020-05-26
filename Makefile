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

DIR 	= ../
PRINTF 	= libftprintf.a
FLAGS 	= -Wall -Werror -Wextra

BTEST 	= test.c
CTEST	= test_c.c
DTEST	= test_d.c

all:
	@make re -C $(DIR)

testB: all
	$(CC) $(DIR)$(PRINTF) $(BTEST) -o output_test
	@echo ""
	@./output_test

testC: all
	$(CC) $(DIR)$(PRINTF) $(CTEST) -o output_test_c
	@echo ""
	@./output_test_c

testD: all
	$(CC) $(DIR)$(PRINTF) $(DTEST) -o output_test_d
	@echo ""
	@./output_test_d

fix: all
	@gcc -g $(SRC)
	@echo "---- Done compiling for debugger.\n"
	@./a.out

add:
	git add $(SRC) Makefile $(INC) $(TEST)
	git status
