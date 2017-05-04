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
#include "shots.h"
#include "ctime.h"

static struct termios oldt;

int main(){

	struct timespec stime;
	time_init(&stime);
	
	tcgetattr(STDIN_FILENO,&oldt);
	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name ="easy";
	load_mode(mode);
	load_game(game,mode,0); 
	changemode(1);
	
	char keypressed[1]; 
	game->defender->fireOn = 1;
	

	map_init(game->map);
	draw_shape(game->map,game->defender->shape,game->defender->x,game->defender->y);
	map_show(game->map);


	while(1){
		
		int status = poll_ft();
		

		if (status > 0){

			read(0,keypressed,1);

		}else if (!status) {
    		// We got a timeout

		}else{
			changemode(0);
			printf("\nPoll() error.\n");
			return 0;
		}

		//int now = time_diff(&stime);

		player_handler(game->map,game->defender,keypressed);
			
		for (int i = 0; i < game->nbInvaders; ++i){

			move_invader(game->map,game->invaders[i],game->invaders[i]->dir.h,game->invaders[i]->dir.v);

		}
		
			map_show(game->map);
		
	}

	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	return 0;
}
