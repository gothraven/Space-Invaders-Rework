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
#include "engine.h"

static struct termios oldt;

int main(){
	
	tcgetattr(STDIN_FILENO,&oldt);

	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name ="easy";
	load_mode(mode);
	load_game(game,mode,0); 

	changemode(1);
	
	Game_t * game = malloc(sizeof(Game_t));
	Mod_t * mode = malloc(sizeof(Mod_t));
	mode->name = "easy";
	load_mode(mode);
	int i = 0,status = 0;
	while(mode->levels[i] != NULL && status != 1){
		status = engine_launcher(game,mode,i);
		i++;
	}
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	
	return 0;
}
