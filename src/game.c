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

#define SCORE_LENGHT 20
#define HEALTH_LENGHT 3
#define LEVEL_LENGHT 4

static struct termios oldt;

int main(){
	
	tcgetattr(STDIN_FILENO,&oldt);
	Mod_t * mode = malloc(sizeof(Mod_t));
	Game_t * game = malloc(sizeof(Game_t));
	mode->name ="easy";
	load_mode(mode);
	load_game(game,mode,0); 
	changemode(1);
	
	char keypressed[1]; 
	game->defender->fireOn = 1;

	char strs[SCORE_LENGHT];
	char strh[HEALTH_LENGHT];
	char strl[LEVEL_LENGHT];
	char * score[2] = {strs,NULL};
	char * health[2] = {strh,NULL};
	char * level[2] = {strl,NULL};

	map_init(game->map);
	draw_shape(game->map,game->defender->shape,game->defender->x,game->defender->y);
	game_start(game->map);
	map_show(game->map);

	struct timespec stime;
	time_init(&stime);

	while(1){
			
		int status = poll_ft();
		
		if (status > 0){

			read(0,keypressed,1);

		}
		
		snprintf(strs, SCORE_LENGHT, "%d", game->score);
		snprintf(strh, HEALTH_LENGHT, "%d", game->defender->health);
		snprintf(strl, LEVEL_LENGHT, "%d", game->level);
		
		draw_shape(game->map,score,SCORE_X+9,SCORE_Y);
		draw_shape(game->map,health,HEALTH_X+10,HEALTH_Y);
		draw_shape(game->map,level,LEVEL_X+9,LEVEL_Y);

		invaders_handler(game,&stime);

		player_handler(game,keypressed);
		
		map_show(game->map);

	}

	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	
	return 0;
}
