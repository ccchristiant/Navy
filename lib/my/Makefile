##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

NAME		=	libmy.a

TESTS		=	unit_tests

CC		=	gcc

RM		=	rm -f

GCOVR		=	gcovr

INC		=	-I../../include

LIB 		=	-L../ -lprintf

CRIT		=	-lcriterion

COVER		=	--coverage

BRANCH		=	--branches

EXCLUD		=	--exclude

CPPFLAGS 	=	$(INC) -Wall -Wextra

SRC_DIR		=	src/

TESTS_DIR	=	tests/

OBJ		=	$(SRC:.c=.o)

GCNO		=	$(UNIT_TEST:.c=.gcno)

GCDA		=	$(UNIT_TEST:.c=.gcda)

UNIT_TEST	=	$(TESTS_DIR)tests_my_printf.c		\
			$(SRC_DIR)my_printf.c

SRC		=	$(SRC_DIR)my_ctostr.c			\
			$(SRC_DIR)my_revstr.c			\
			$(SRC_DIR)my_strlen.c			\
			$(SRC_DIR)my_putchar.c			\
			$(SRC_DIR)my_putstr.c			\
			$(SRC_DIR)my_putnbr.c			\
			$(SRC_DIR)my_itoa.c			\
			$(SRC_DIR)my_putunbr.c			\
			$(SRC_DIR)my_octal.c			\
			$(SRC_DIR)my_hexa.c			\
			$(SRC_DIR)my_nbrlen.c			\
			$(SRC_DIR)my_getnbr.c			\
			$(SRC_DIR)my_strcmp.c			\
			$(SRC_DIR)my_binary.c			\
			$(SRC_DIR)my_strlowcase.c		\
			$(SRC_DIR)my_strcpy.c			\
			$(SRC_DIR)my_strcat.c			\
			$(SRC_DIR)my_compute_power_it.c			\
			$(SRC_DIR)wrap_percent.c		\
			$(SRC_DIR)wrap_print_adress.c		\
			$(SRC_DIR)my_printf.c			\
			$(SRC_DIR)my_show_word_array.c		\
			$(SRC_DIR)my_str_to_word_array.c	\
			$(SRC_DIR)my_strtol.c			\
			$(SRC_DIR)my_strncat.c			\
			$(SRC_DIR)my_strncmp.c			\
			$(SRC_DIR)my_strncpy.c			\
			$(SRC_DIR)my_str_isupper.c		\
			$(SRC_DIR)my_str_islower.c		\
			$(SRC_DIR)my_str_isnum.c		\
			$(SRC_DIR)my_strdup.c			\
			$(SRC_DIR)my_str_isalpha.c

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ..

unit_test:	fclean $(NAME)
	$(CC) -o $(TESTS) $(UNIT_TEST) $(LIB) $(INC) $(COVER) $(CRIT)

tests_run: unit_test
	./$(TESTS)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR) $(BRANCH)

clean:
	$(RM) $(OBJ) *gc*

fclean:	clean
	$(RM) ../$(NAME) $(TESTS)

re:	fclean all

.PHONY: all tests fclean re
