#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <poll.h>
#include <termios.h>


int main(/*int argc, char const *argv[]*/){
	
	char * tab[6];
		tab[0] = "xterm";
		tab[1] = "-geometry";
		tab[2] = "150x50";
		tab[3] = "-e";
		tab[4] = "./keyboardInput";
		tab[5] = NULL;
	
	execvp(tab[0],tab); //executing the game on a diffrent terminal
	
	return 0;
}