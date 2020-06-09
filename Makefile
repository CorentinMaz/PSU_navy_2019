##
## EPITECH PROJECT, 2018
## MUL_my_defender_2018
## File description:
## Makefile
##

NAME		=	navy

SRC			=	$(shell find . -type f -name "*.c")

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

INCLUDE		=	-Iinclude

LIB			=

W			=	-W -Wall -Wextra

CFLAGS 		= 	$(INCLUDE) $(LIB) -g3

GREEN		=	\e[1;32m

WHITE		=	\e[0m

ORANGE		=	\e[38;5;208m

RED			=	\e[38;5;196m

BLUE		=	\e[1;34m

PINK		=	\e[38;5;198m

CYAN		=	\e[38;49;96m

D			=	0

#	PERCENTAGE

THIS		=	$(firstword $(MAKEFILE_LIST))

ifndef ECHO
T			:=	$(shell $(MAKE) $(MAKECMDGOALS) --no-print-directory \
				-nrRf $(THIS) \
				ECHO="COUNTTHIS" | grep -c "COUNTTHIS")
N			:=	x
C			=	$(words $N)$(eval N := x $N)
ECHO		=	echo -ne "$(RED)\r[`expr $C '*' 100 / $T`%]"
endif

#	END	PERCENTAGE

ifndef TIME_REF
TIME_REF	=	$(date +%s)
endif

all:	$(NAME)	\
	time

time:
	@#$$(($$(date +%s) - $(TIME_REF)))
	@$(ECHO) "\n$(GREEN)SUCCESS$(ORANGE)!!!$(RED) ->$(BLUE) Build took $(PINK)- $(BLUE)seconds to compile $(PINK)$T $(BLUE)files $(WHITE)\n"

$(NAME):	$(TIME_REF)	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

%.o:	%.c
	@$(CC) -o $@ -c $< $(CFLAGS)
	@$(ECHO) "$(BLUE)Compiling [$(GREEN)$(notdir $<) $(CYAN)-> $(ORANGE)$@$(BLUE)]$(WHITE)\n"

clear:
	@clear

clean:
	@find . -name "*.o" -delete
	@find . -name "*~" -delete
	@find . -name "#*#" -delete
	@find . -name "vgcore.*" -delete
	@$(ECHO) "$(BLUE)Delete \"$(ORANGE)*.o$(BLUE)\", \"$(ORANGE)*~$(BLUE)\", \"$(ORANGE)#*#$(BLUE)\", \"$(ORANGE)vgcore.*$(BLUE)\"$(WHITE)\n"

fclean:	clean
	@rm -f $(NAME)
	@$(ECHO) "$(BLUE)Delete binary \"$(ORANGE)$(NAME)$(BLUE)\"$(WHITE)\n"

re:
	@$(MAKE) --no-print-directory -s $(THIS) fclean
	@$(MAKE) --no-print-directory -s $(THIS) all

play:	re
		@./$(NAME)

debug:	re
		@valgrind --log-file=debug ./$(NAME)
		@more debug

.PHONY:	all	time	clear	clean	fclean	re	play	debug
