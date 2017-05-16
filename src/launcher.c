#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

#define MODE_DIR "mods"

int mode_exist(char * name);
int show_modes();
int show_options();

int main(int argc, char *argv[])
{
	if(argc < 2){
		return show_options();	
	}
	if(!mode_exist(argv[1])){
		return show_modes();
	}
	// "xterm -geometry 150x50 -e ./game " first terminal option
	// "gnome-terminal --geometry=150x50 --zoom=0.7 -e ./game " second terminal option
	char game[120] = "gnome-terminal --geometry=150x50 --zoom=0.7 -x ./game ";
	
	strcat(game,argv[1]);
	
	FILE * fd = popen(game,"r");
	printf("(thank you, see you next time)\n");
	return pclose(fd);
	
}

int mode_exist(char * name)
{

	DIR * mode = opendir(MODE_DIR);	
	struct dirent * dir = NULL;
	while((dir=readdir(mode))!=NULL){
		if(dir->d_name[0] != '.'){
			if(strcmp(name,dir->d_name) == 0){
				return 1;
			}
		}
	}	
	return 0;
}

int show_modes()
{
	DIR * mode = opendir(MODE_DIR);	
	struct dirent * dir = NULL;
	printf("The existing modes are :\n\n");
	while((dir=readdir(mode))!=NULL){
		if(dir->d_name[0] != '.'){
			printf("		- %s\n",dir->d_name);
		}
	}
	printf("\nplease choose one of them.\n");
	return 0;
}

int show_options()
{	
	printf("Sorry, you have given less paramaters\n\n");
	printf("	./go [game_mode]\n\n");
	printf("To launche the game you should give the right mode\n\n");
	return show_modes();
}