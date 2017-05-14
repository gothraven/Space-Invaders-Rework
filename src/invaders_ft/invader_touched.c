/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    invader_touched.c                           #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 00:19:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "invaders.h"

/*! \fn int invader_touched(Game_t * game)
 *  \brief tell us if a ship was touch by a shoot 
 *  \param game is a structure which contains all the game
 *
 *  La fonction indique si un vaisseaux a etait toucher et renvois son id 
 *
 *  \return the id of the invaders who was touched
 */

int invader_touched(Game_t * game)
{
	for (int i = 0; i < game->nbInvaders; ++i){
		
		if(is_touched(game->invaders[i],game->defender->shot)){
			return game->invaders[i]->id;
		}
	
	}
	return 0;
}

/*! \fn int is_touched(Invader_t * invader,Shot_t * shot)
 *  \brief manage the collision between a shot and a invader
 *  \param invader is the ship of the ennemies
 *  \param shot is a struct which contains everithing about a certains shot 
 *
 *  La fonction gere la collision entre un tire et un invaders
 *
 *  \return 1 if the invaders was touch
 */

int is_touched(Invader_t * invader,Shot_t * shot)
{	
	int i_width = invader_width(invader);
	int i_height = invader_height(invader);
	if(invader->x <= shot->x && invader->x + i_width >= shot->x){
		if(invader->y <= shot->y && invader->y + i_height >= shot->y){
			return 1;
		}else{
			return 0;	
		}
	}else{
		return 0;
	}

}