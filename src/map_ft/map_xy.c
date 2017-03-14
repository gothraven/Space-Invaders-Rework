/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    map_xy.c                                    #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/14/03 08:10:20 by Z.Safiy                                  #
*    Updated: 2017/14/03 08:45:00 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include <stdio.h>
#include "map.h"


void map_xy(char * map, char charc, int x, int y){
	for(int i=0; i<SCREEN_HEIGHT; i++){
		for(int j=0; j<SCREEN_WIDTH; j++){
			if((i+1)==y && (j+1)==x){
				map[i*(SCREEN_WIDTH)+j] = charc;
			}
		}
	}
}