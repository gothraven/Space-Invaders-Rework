/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    engine_launcher.c                           #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 03:15:59 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "engine.h"

int engine_launcher(Game_t * game,Mod_t * mode,int levelNumber)
{
	
	load_game(game,mode,levelNumber); 
	
	
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
	int stat = 0;
	while(1){
			
		int status = poll_ft();
	
		if (status > 0){
			read(0,keypressed,1);
		}

		if(keypressed[0] == 'p'){
			game_pause(game->map);
			read(0,keypressed,1);
			game_continue(game->map);
		}
		
		snprintf(strs, SCORE_LENGHT, "%d", game->score);
		snprintf(strh, HEALTH_LENGHT, "%d", game->defender->health);
		snprintf(strl, LEVEL_LENGHT, "%d", game->level);
		
		draw_shape(game->map,score,SCORE_X+9,SCORE_Y);
		draw_shape(game->map,health,HEALTH_X+10,HEALTH_Y);
		draw_shape(game->map,level,LEVEL_X+9,LEVEL_Y);

		stat = invaders_handler(game,&stime);
		
		if( stat == 1){
			level_done(game->map);
			next_level(game->map);
			return 0;
		}else if(stat == 2){
			game_over(game->map);
			return 1;
		}

		player_handler(game,keypressed);
		
		map_show(game->map);

	}

}