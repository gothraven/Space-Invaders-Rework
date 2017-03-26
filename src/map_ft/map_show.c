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
/**
 *this function just show the map
 *@param map available in map.h
 */
void map_show(char * map){

	write(1,map,MAP_SIZE);

}