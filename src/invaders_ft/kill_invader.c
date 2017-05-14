/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    kill_invader.c                              #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 01:15:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "invaders.h"

void kill_invader(Game_t * game,int id)
{
	
	erase_shape(game->map,game->invaders[id-1]->shape,game->invaders[id-1]->x,game->invaders[id-1]->y);

	for (int i = (id-1); i < game->nbInvaders; i++)
	{	
		game->invaders[i] = game->invaders[i+1];
	}

	game->nbInvaders--;
	
	for (int i = 0; i < game->nbInvaders; ++i)
	{
		game->invaders[i]->id = (i+1);	
	}

}
