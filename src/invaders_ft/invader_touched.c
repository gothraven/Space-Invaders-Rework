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


int invader_touched(Game_t * game)
{
	for (int i = 0; i < game->nbInvaders; ++i){
		
		if(is_touched(game->invaders[i],game->defender->shot)){
			return game->invaders[i]->id;
		}
	
	}
	return 0;
}



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