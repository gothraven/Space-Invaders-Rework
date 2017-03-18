/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    move_player.c                               #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/18/03 23:26:09 by Z.Safiy                                  #
#    Updated: 2017/18/03 23:26:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "map.h"
#include "player.h"

void move_player_left(char * map,char ** shape,int x, int y){
	erase_shape(map,shape,x,y);
	draw_shape(map,shape,x-1,y);
}

void move_player_right(char * map, char ** shape, int x, int y){
	erase_shape(map,shape,x,y);
	draw_shape(map,shape,x+1,y);
}