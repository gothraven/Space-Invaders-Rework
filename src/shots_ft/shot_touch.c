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


/*! \fn int shot_touch(char * map, Shot_t * shot)
 *  \brief this function tell us if the shot touch somthing
 *  \param map is a characters table which contains the map of the game
 *  \param shot is a struct which contains everithing about a certains shot
 *  
 *  La fonction nous indique si le tir touche quelque chose
 *
 *  \return 1 if the shot touch something, 0 if the shot touch nothing
 */

int shot_touch(char * map, Shot_t * shot)
{

	if(map[(shot->y-2)*(SCREEN_WIDTH)+(shot->x)] != ' '){
		return 1;	
	}else {
		return 0;
	}

}