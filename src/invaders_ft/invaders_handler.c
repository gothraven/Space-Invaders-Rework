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

/*! \fn void invaders_handler(Game_t * game,struct timespec * time)
 *  \brief this function handles everything about the invaders
 *  \param game is a structure which contains all the game
 *  \param time is a structure which contains the time of everything
 *
 *  La fonction controle tout ce qui a un rapport avec les invaders
 */

void invaders_handler(Game_t * game,struct timespec * time)
{
	int dtime = time_diff(time);
	for (int j = 0; j < game->nbInvaders; ++j){
		if((game->invaders[j]->appear*1000) <= dtime){
			move_invader(game->map,game->invaders[j],game->invaders[j]->dir.h,game->invaders[j]->dir.v);
		}
	}
}