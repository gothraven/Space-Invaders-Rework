/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    game.c                                      #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/
#include "terminal.h"
#include "map.h"
#include "player.h"
#include "load.h"
#include "game.h"
#include "list.h"
#include "invaders.h"
#include <stdint.h>
//static struct termios oldt;

int main(){

	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name ="easy";
	load_mode(mode);
	load_game(game,mode,1);

	return 0;
}


// testing the time
 /*	clock_t t1, t2;  
    t1 = clock();   
    sleep(3);
    t2 = clock();   
    printf("%g %g %g\n",(double)t1,(double)t2,(double)CLOCKS_PER_SEC);
    double diff = (double)( (t2 - t1) / CLOCKS_PER_SEC);   
    printf("%g",diff); 
  */




 // including path into invaders test

/*
Invader_t * invader = malloc(sizeof(Invader_t));
	load_invader(invader,"1","easy");
	show_invader(invader);
*/

 //LIST TESTS
/*
	Path_t * path = NULL;
	int n = 0;
	
	while(n<10){
		path = list_add(path,n,n+1);
		n++;
	}
	
	path = list_close(path);

	list_show(path); 
*/

//LOADING THE GAME 
/*
tcgetattr(STDIN_FILENO,&oldt);
	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name ="hard";
	load_mode(mode);
	load_game(game,mode,1);
*/