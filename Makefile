EXEC=shell test
SOURCES=game.c
CC=gcc
CFLAGS= -g -w -Wall -Wextra -Werror -std=gnu99
.PHONY: default clean

all: $(EXEC)

game: game.c

% : %.c

	@echo "\033[33mCreating \033[1m\033[39m$@\033[21m \033[33mfrom \033[1m\033[39m$<\033[21m \033[33m"
	@$(CC) $< -o $@ $(CFLAGS)

clean:
	@echo " "
	@echo "\033[9m$(EXEC) \033[29m"
	@echo " "
	@rm -rf $(EXEC)
