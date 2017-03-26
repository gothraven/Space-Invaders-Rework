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

#include "map.h"

/**
 *this function jsut show the map in the terminal
 *@param map is available in map.h /charc is a char/ y and y is for de position   
 */
void map_xy(char * map, char charc, int x, int y){

	map[(y-1)*(SCREEN_WIDTH)+(x-1)] = charc;

}
