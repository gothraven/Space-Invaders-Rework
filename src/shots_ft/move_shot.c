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
#include "player.h"


void move_shot(char * map, Player_t * defender, char * keypressed){
	if(keypressed[0] == SPACEKEY && defender->fireOn == 1){
			defender->shot->x = defender->x+2;
			defender->shot->y = defender->y-1;
			defender->fireOn = 0;
			keypressed[0] = 'l';
	}
	if(defender->shot->y == 2){
		erase_shot(map,defender->shot);
		defender->fireOn = 1;
	}
	/*keypressed != SPACEKEY && */
	if(defender->fireOn == 0) move_shot_up(map,defender->shot);

}


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

void erase_shot(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
}