/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    shot_touch.c                                #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/05 00:00:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/


#include "shots.h"

int shot_touch(char * map, Shot_t * shot)
{

	if(map[(shot->y-2)*(SCREEN_WIDTH)+(shot->x-1)] != ' '){
		return 1;	
	}else {
		return 0;
	}

}