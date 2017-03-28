/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    load_game.c                                 #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/13/03 10:52:32 by Z.Safiy                                  #
*    Updated: 2017/13/03 10:52:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"

void load_game(Game_t * game,Mod_t * mode){
	game->mode = mode->name;
	printf("(%s is loaded you can start the game)\n",game->mode);

}