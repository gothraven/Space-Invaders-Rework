/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    map_show.h                                  #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/12/03 18:05:32 by Z.Safiy                                  #
#    Updated: 2017/13/03 01:06:52 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "map.h"

/*! \fn void map_show(char * map){
 *  \brief draw the map on the terminal 
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine la map sur le terminal 
 *
 */

void map_show(char * map){

	write(1,map,MAP_SIZE);

}