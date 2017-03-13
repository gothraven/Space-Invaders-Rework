#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>


#define SCREEN_WIDTH 150
#define SCREEN_HEIGHT 50
#define MAP_SIZE SCREEN_WIDTH*SCREEN_HEIGHT

void changemode(int);
int  kbhit(void);


void fill_Map(char* map);

int main(void){
	int key;
	changemode(1); 

	char * map = malloc((MAP_SIZE)*sizeof(char));
	fill_Map(map);
	write(1,map,MAP_SIZE);

  while(1){ //we keep waiting forever
  	if(!kbhit()){ 
      // something has been detected. now get that.
  		key = getchar(); 
  		printf("%c",key);
  	}
  }

  changemode(0);
  return 0;
}

void changemode(int dir){

	static struct termios oldt, newt;

	if(dir == 1){
		tcgetattr(STDIN_FILENO,&oldt);
		newt = oldt;
		newt.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	}else{
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	}

}

int kbhit(void){

	struct timeval tv;
	fd_set rdfs;

	tv.tv_sec = 0;
	tv.tv_usec = 0;

	FD_ZERO(&rdfs);
	FD_SET(STDIN_FILENO, &rdfs);

	select(STDIN_FILENO+1, &rdfs, NULL, NULL, &tv);

	return FD_ISSET(STDIN_FILENO, &rdfs);
}

void fill_Map(char* map){
	for (int i = 0; i < MAP_SIZE; i++){
		if( i){
		map[i]='#';
		}
	}
}