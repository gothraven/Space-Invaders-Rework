EXEC=game mouseInput keyboardInput
SOURCES=game.c mouseInput.c keyboardInput.c
CC=gcc
CFLAGS= -g -Wall -Wextra -Werror -std=gnu99
.PHONY: default clean

all: $(EXEC)

game: game.c
mouseInput: mouseInput.c
keyboardInput: keyboardInput.c


% : %.c

	@echo "\033[33mCreating \033[1m\033[39m$@\033[21m \033[33mfrom \033[1m\033[39m$<\033[21m \033[33m"
	@$(CC) $< -o $@ $(CFLAGS)

clean:
	@echo " "
	@echo "\033[9m$(EXEC) \033[29m"
	@echo " "
	@rm -rf $(EXEC)
