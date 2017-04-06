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

//static struct termios oldt;

int main(){

	Invader_t * invader = malloc(sizeof(Invader_t));
	load_invader(invader,"1","easy");
	show_invader(invader);
	pause();
	
	return 0;
}

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