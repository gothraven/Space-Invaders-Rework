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
#include "map.h"

void load_game(Game_t * game,Mod_t * mode,int lvlnumber){
	game->level = lvlnumber;
	game->nbInaders = mode->levels[lvlnumber]->nbShips;
	game->defender = malloc(sizeof(Player_t *));
	
	load_defender(game->defender,mode->name);
	
	game->invaders = malloc(game->nbInaders*sizeof(Invader_t*));
	
	for (int i = 0; i < game->nbInaders; ++i){
		char n[3];
		sprintf(n,"%d",mode->levels[lvlnumber]->data[i][0]);
		game->invaders[i] = malloc(sizeof(Invader_t));
		load_invader(game->invaders[i],n,mode->name);	
	}
	
	game->score = 0;

	game->map = malloc(MAP_SIZE*sizeof(char));
}