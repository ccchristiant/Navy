##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

NAME		=	navy

SRC		=	$(SRC_DIR)main.c			\
			$(SRC_DIR)man.c				\
			$(SRC_DIR)launch_navy.c				\
			$(SRC_DIR)init_player1.c				\
			$(SRC_DIR)init_player2.c				\
			$(SRC_DIR)assign_player_data.c				\
			$(SRC_DIR)attack_traduction.c				\
			$(SRC_DIR)play_game.c				\
			$(SRC_DIR)my_turn_to_play.c				\
			$(SRC_DIR)waiting_my_turn.c				\
			$(SRC_DIR)hit_or_missed.c				\
			$(SRC_DIR)$(ERR_DIR)check_pos_files.c				\
			$(SRC_DIR)$(COM_P_DIR)connection.c				\
			$(SRC_DIR)$(COM_P_DIR)send_signal.c 					\
			$(SRC_DIR)$(COM_P_DIR)get_attack.c 					\
			$(SRC_DIR)$(COM_P_DIR)check_sent_signal.c 					\
			$(SRC_DIR)$(COM_P_DIR)attack_response.c 					\
			$(SRC_DIR)$(COM_P_DIR)wait_signal.c 					\
			$(SRC_DIR)$(COM_P_DIR)fetch_signal.c 					\
			$(SRC_DIR)$(MGEN_DIR)load_file_in_mem.c				\
			$(SRC_DIR)$(MGEN_DIR)open_file.c				\
			$(SRC_DIR)$(MGEN_DIR)map_generator.c				\
			$(SRC_DIR)$(MGEN_DIR)vertical_ship.c			\
			$(SRC_DIR)$(MGEN_DIR)horizontal_ship.c			\
			$(SRC_DIR)$(MGEN_DIR)update_map.c				\
			$(SRC_DIR)$(MGEN_DIR)update_adv_map.c				\

TESTS		=	unit_tests

CC		=	gcc

RM		=	rm -f

GCOVR		=	gcovr

INC		=	-I./include

LIB 		=	-L./lib -lmy

CRIT		=	-lcriterion

COVER		=	--coverage

BRANCH		=	--branches

EXCLUD		=	--exclude

CPPFLAGS 	=	$(INC) -Wall -Wextra -g3

SRC_DIR		=	src/

ERR_DIR			=	error/

MGEN_DIR		=	map_generator/

COM_P_DIR		=	communication_protocol/

TESTS_DIR	=	tests/

OBJ		=	$(SRC:.c=.o)

GCNO		=	$(UNIT_TEST:.c=.gcno)

GCDA		=	$(UNIT_TEST:.c=.gcda)

UNIT_TEST	=	$(TESTS_DIR)tests_navy.c

TEST_SRC	= 	$(SRC_DIR)attack_traduction.c				\

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LIB)

unit_test:	fclean $(NAME)
	$(CC) -o $(TESTS) $(TEST_SRC) $(UNIT_TEST) $(LIB) $(INC) $(COVER) $(CRIT)

tests_run: 	unit_test
	./$(TESTS)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR) $(BRANCH)

clean:
	$(MAKE) -C lib/my clean
	$(RM) $(OBJ) *gc*

fclean:		clean
	$(MAKE) -C lib/my fclean
	$(RM) $(NAME) $(TESTS)

re:	fclean all

.PHONY:		all tests fclean re

##.SILENT: 	all tests_run clean fclean re
