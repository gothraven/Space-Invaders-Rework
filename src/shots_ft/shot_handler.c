/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    shot_handler.c                              #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 23:19:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "player.h"
#include "invaders.h" 
#include "shots.h"

/*! \fn void shot_handler(Game_t * game, char * keypressed)
 *  \brief this function handle all about the user shot
 *  \param game is a structure which contains all the game
 *  \param keypressed contains the key pressed by the user
 *  
 *  La fonction gère tout ce qui est en rapport avec les tirs du defender
 */

void shot_handler(Game_t * game, char * keypressed)
{
	if(keypressed[0] == SPACEKEY && game->defender->fireOn == 1){
			game->defender->shot->x = game->defender->x+2;
			game->defender->shot->y = game->defender->y-1;
			game->defender->fireOn = 0;
			keypressed[0] = 'l';
	}
	
	if(shot_touch(game->map,game->defender->shot) && game->defender->fireOn == 0){
		int invader_id = invader_touched(game);
		if(invader_id){
			kill_invader(game,invader_id);
			game->score+=100;
		}
		erase_shot(game->map,game->defender->shot);
		game->defender->fireOn = 1;	
	}

	if(game->defender->fireOn == 0) move_shot(game->map,game->defender->shot,UP);

}	
