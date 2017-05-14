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

	char game[120] = "xterm -geometry 150x50 -e ./game ";
	
	strcat(game,argv[1]);
	
	FILE * fd = popen(game,"r");
	
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






		/*int status;	
	pid_t pid;

	char * game[6];
	game[0] = "xterm";
	game[1] = "-geometry";
	game[2] = "150x50";
	game[3] = "-e";
	game[4] = "./game";
	game[5] = argv[1];
	game[6] = NULL;
	
	

	pid = fork();
	if(pid == 0){

		status = execvp(game[0],game);
		exit(status);

	}else if(pid < 0){
		
		perror("ERROR");
		return 1;

	}else{

		waitpid(pid, &status, WUNTRACED);		
		printf("test\n");
		if(status == 1) printf("no params\n");
		if(status == 2) printf("no mods\n");
		if(status == 0) printf("your score is %d\n",status);

		return 0;
	}*/