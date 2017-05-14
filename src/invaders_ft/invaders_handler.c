/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    invaders_handler.c                          #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 02:33:59 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "invaders.h"
#include "ctime.h"

<<<<<<< HEAD
/*! \fn void invaders_handler(Game_t * game,struct timespec * time)
 *  \brief this function handles everything about the invaders
 *  \param game is a structure which contains all the game
 *  \param time is a structure which contains the time of everything
 *
 *  La fonction controle tout ce qui a un rapport avec les invaders
 */

void invaders_handler(Game_t * game,struct timespec * time)
=======
int invaders_handler(Game_t * game,struct timespec * time)
>>>>>>> e9a4a52f66a3bde79d2fa1b9123eed5619ffca9f
{
	if(game->nbInvaders == 0) return 1;
	int dtime = time_diff(time);
	for (int i = 0; i < game->nbInvaders; ++i){
		if((game->invaders[i]->appear*1000) <= dtime){
			move_invader(game->map,game->invaders[i],game->invaders[i]->dir.h,game->invaders[i]->dir.v);
			if(game->invaders[i]->y >= SCREEN_HEIGHT-2) return 2;
		}
	}
	return 0;
}