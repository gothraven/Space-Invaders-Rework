/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    player_ship.c                               #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/15/05 04:02:57 by Z.Safiy                                  #
#    Updated: 2017/15/05 04:02:57 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "player.h"
#include "shots.h"


int defender_width(Player_t * defender)
{
	int i=0;
	int j=0;
	while(defender->shape[i][j] != '\0'){
		j++;
	}
	return j++;
}


int defender_height(Player_t * defender)
{
	int i = 0;
	while(defender->shape[i] != NULL){
		i++;
	}
	return i++;
}