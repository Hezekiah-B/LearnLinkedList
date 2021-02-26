##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

############### Compiler ##################
CC = @gcc
AR = @ar crs
###########################################

### Defines to give to your  programme ####
DEFINE = -DTEST
# look doc for "give a macro" or tell me for help
###########################################

############### Default  ##################
# for src use wilcard for each directory 
SRC	= 	$(wildcard src/*.c)
NAME = linked
# for flags choose according to you need
INCPATH = -I./include/
LIB = 
CFLAGS	= -Wall -Wextra -g3
#  if you want opti compil with "-O3"  (add -03 and preload shared lib is does'nt work)
###########################################

############### Unit_Test #################
# for src use wilcard for each directory and add your unit test
SRC_UNIT	= 	$(wildcard src/exemple_list.c) \
				$(wildcard unit_test/*.c)
NAME_UNIT = linked
# for flags choose according to you need
INCPATH_UNIT = -I./include/
# need install criterion for use
LIB_UNIT = -lcriterion
CFLAGS_UNIT	= -Wall -Wextra
###########################################

################# Choose ##################

DEBUG_OFF = @echo -e "\n\e[1;91m DEBUG OFF"
DEBUG_ON = @echo -e "\n\e[1;92m DEBUG ON"

UNIT_OFF = "\e[1;91m UNIT_TEST OFF"
UNIT_ON = "\e[1;92m UNIT_TEST ON"

MODE = "\e[1;93m mode :"

CHOOSE ?= default

ifeq ($(CHOOSE), default)
    PRINT_MODE = $(CHOOSE)
    PRINT_DEBUG_MODE = $(DEBUG_OFF)
    PRINT_UNIT_MODE = $(UNIT_OFF)
    all:
	$(CC) -o $(NAME) $(SRC) $(INCPATH) $(CFLAGS) $(LIB)

	$(PRINT_DEBUG_MODE)\
	$(PRINT_UNIT_MODE) \
	$(MODE) \
	$(PRINT_MODE)
else ifeq ($(CHOOSE), unit_test)
    PRINT_MODE = $(CHOOSE)
    PRINT_DEBUG_MODE = $(DEBUG_OFF)
    PRINT_UNIT_MODE = $(UNIT_ON)
    all:
	$(CC) -o $(NAME_UNIT) $(SRC_UNIT) $(CFLAGS_UNIT) $(INCPATH_UNIT) $(LIB_UNIT)

	$(PRINT_DEBUG_MODE)\
	$(PRINT_UNIT_MODE) \
	$(MODE) \
	$(PRINT_MODE)
else ifeq ($(CHOOSE), debug)
    PRINT_MODE = $(CHOOSE)
    PRINT_DEBUG_MODE = $(DEBUG_ON)
    PRINT_UNIT_MODE = $(UNIT_OFF)
    all:
	$(CC) -o $(NAME) $(SRC) $(DEFINE) $(CFLAGS) $(INCPATH) $(LIB)

	$(PRINT_DEBUG_MODE)\
	$(PRINT_UNIT_MODE) \
	$(MODE) \
	$(PRINT_MODE)
endif
###########################################


############### CLean All #################
clean:
	@rm -f $(OBJ) \
	@rm -f $(wildcard *.o) \
	@rm -f $(wildcard *.so)

fclean: clean
	@rm -f $(NAME)
###########################################

############## Compilation #################
re: fclean all
###########################################
