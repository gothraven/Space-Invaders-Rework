#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(){
	
	char * tab[6];
		tab[0] = "xterm";
		tab[1] = "-geometry";
		tab[2] = "150x50";
		tab[3] = "-e";
		tab[4] = "./game";
		tab[5] = NULL;
	


	execvp(tab[0],tab); //executing the game on a diffrent terminal
	
	return 0;
}
