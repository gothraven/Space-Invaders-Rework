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

void player_handler(Game_t * game, char * keypressed)
{
	shot_handler(game,keypressed);

	move_player(game->map,game->defender,keypressed);

}