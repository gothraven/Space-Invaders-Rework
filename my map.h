#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <poll.h>
#include <termios.h>


int main(/*int argc, char const *argv[]*/)
{
	char*[/*la taille de lecran de jeu*/];
	int cmp=0;
	char buff[1];
	int fd;

	fd = open(argv[/*la taille de l'ecran de jeux*/], O_RDONLY);
	while(cmp=!/*la largeur de lecran de jeux+1*/){
		read(fd, buff, 1);
			if(buff[0]!='\n'){
					write(1, buff, 1);
			}
	cmp++;
	}
	close(fd);
	return 0;
}