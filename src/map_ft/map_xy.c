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

	map[(y-1)*(SCREEN_WIDTH)+(x-1)] = charc;

}