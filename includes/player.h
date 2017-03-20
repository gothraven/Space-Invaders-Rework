/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    player.h                                    #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/18/03 23:26:09 by Z.Safiy                                  #
#    Updated: 2017/18/03 23:26:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#ifndef PLAYER_H
#define PLAYER_H

#include "game.h"
#include "map.h" 

#define RIGHTKEY 'd'
#define LEFTKEY 'q'
#define SPACEKEY ' '

void move_player(char * map,Player_t * defender, char keypressed);
void move_player_left(char * map,Player_t * defender);
void move_player_right(char * map,Player_t * defender);


#endif