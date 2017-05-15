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


/*! \fn void map_xy(char * map, char charc,int x, int y)
 *  \brief this function place a character on the map 
 *  \param map is a characters table which contains the map of the game  
 *  \param charc is the caracters printed
 *  \param x is the horisental cordinate of where the shape will start being  
 *  \param y is the vertical cordinate of where the shape will start being  
 *   
 *  La fonction nous indique où placer le caractère en fonction de son x et de son y 
 *
 */
void map_xy(char * map, char charc, int x, int y){

	map[(y-1)*(SCREEN_WIDTH)+(x-1)] = charc;

}
