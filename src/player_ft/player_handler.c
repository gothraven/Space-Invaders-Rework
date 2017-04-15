/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    player_handler.h                            #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/15/04 14:19:05 by Z.Safiy                                  #
#    Updated: 2017/15/04 14:19:05 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#include "player.h"
#include "shots.h"

void player_handler(char * map, Player_t * defender, char * keypressed){

	move_shot(map,defender,keypressed);

	move_player(map,defender,keypressed);

}