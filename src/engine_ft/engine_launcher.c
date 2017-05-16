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

/*! \fn int engine_launcher(Game_t * game,Mod_t * mode,int levelNumber)
 *  \brief this function is the engine of the game, everything goes back to it. 
 *  \param game is a structure which contains all the game
  *  \param mode is the structure which contains the game mode 
 *  \param levelNumber is a variables where the number of the level is stored 
 *
 *  La fonction met en relation toutes les parties du jeu
 *  \return 0 if level won, 1 level lost or player surrendered
 */

int engine_launcher(Game_t * game,Mod_t * mode,int levelNumber)
{
	
	load_game(game,mode,levelNumber); 
	
	char key[3];
	char keypressed[0]; 
	game->defender->fireOn = 1;

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
			read(0,key,3);
			if(key[2] == 68) keypressed[0] = 'q';
			if(key[2] == 67) keypressed[0] = 'd';
			if(key[0] == ' ') keypressed[0] = ' ';
			if(key[0] == 'p') keypressed[0] = 'p';
			if(key[0] == 'q') keypressed[0] = 's';

		}

		/* the player side */
		player_handler(game,keypressed);

		/* the enemies side */
		stat = invaders_handler(game,&stime);
		
		/* in case  player want to pause */		
		if(keypressed[0] == 'p'){
			game_pause(game->map);
			read(0,keypressed,1);
			game_continue(game->map);

		}

		/* in case  player want to surrender */
		if(keypressed[0] == 's'){
			surrender(game->map);
			read(1,keypressed,1);
			if(keypressed[0] == 'y'){
				return 1;
			}else{
				keypressed[0] = 'q';
			}
		}
		
		/* to keep the status bar updated */
		status_bar_handler(game);
		
		
		if( stat == 1){ /*in case level is won*/
			level_done(game->map);
			return 0;
		}else if(stat == 2){ /*in case level is lost*/
			game_over(game->map);
			return 1;
		}

		/*to print the hole picture of the game*/
		map_show(game->map);


	}

}