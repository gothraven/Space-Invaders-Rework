/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    move_shot.c                                 #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/11/04 17:15:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/


#include "shots.h"

void move_shot_up(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
	
	shot->y -= 1;
	
	map_xy(map,shot->shape,shot->x,shot->y);
}


void move_shot_down(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
	
	shot->y += 1;
	
	map_xy(map,shot->shape,shot->x,shot->y);

}