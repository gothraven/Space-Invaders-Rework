#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>


#define SCREEN_WIDTH 150
#define SCREEN_HEIGHT 50

void changemode(int);
int  kbhit(void);
void toXY(int x,int y);
void print_Map();

int main(void){
  int key;
  changemode(1); 
  print_Map();
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
    tcgetattr( STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt);
  }else{
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt);
  }

}

int kbhit (void){

  struct timeval tv;
  fd_set rdfs;

  tv.tv_sec = 0;
  tv.tv_usec = 0;

  FD_ZERO(&rdfs);
  FD_SET (STDIN_FILENO, &rdfs);

  select(STDIN_FILENO+1, &rdfs, NULL, NULL, &tv);
  
  return FD_ISSET(STDIN_FILENO, &rdfs);
}

void toXY(int x,int y){
  char buffer[9];
  sprintf(buffer, "\x1b[%d;%dH", y, x);
  write(1,buffer,sizeof(buffer));
}

void print_Map(){
  for(int i=1; i <= SCREEN_WIDTH; i++){
    for(int j=1; j <= SCREEN_HEIGHT; j++){
      if(i==1 || i==2 || i == (SCREEN_WIDTH-1) || i == SCREEN_WIDTH || j==1 || j==SCREEN_HEIGHT){     
      toXY(i,j);
      write(1,"#",1);
      }
    }
  }

  /*  modify these to get a better look   */
  toXY(5,2);                    
  write(1,"SCORE:",7);
  toXY(60,2); 
  write(1,"LEVEL - ",8);
  toXY(120,2); 
  write(1,"HEALTH = ",8);
  
}