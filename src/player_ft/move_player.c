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

#include "player.h"
#include "shots.h"

void move_player(char * map,Player_t * defender, char * keypressed){

	if(keypressed[0] == LEFTKEY) move_player_left(map,defender);
	if(keypressed[0] == RIGHTKEY) move_player_right(map,defender);

}

void move_player_left(char * map,Player_t * defender){

	erase_shape(map,defender->shape,defender->x,defender->y);
	
	defender->x -= 1;
	
	draw_shape(map,defender->shape,defender->x,defender->y);

}

void move_player_right(char * map,Player_t * defender){

	erase_shape(map,defender->shape,defender->x,defender->y);
	
	defender->x += 1;
	
	draw_shape(map,defender->shape,defender->x,defender->y);

}