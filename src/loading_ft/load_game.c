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

/*! \fn void load_game(Game_t * game,Mod_t * mode,int lvlnumber)
 *  \brief this function load the game with the structure passed in the paramaters
 *  \param game is a structure which contains all the game
 *  \param mode is the structure which contains the game mode 
 *  \param lvlnumber is the structure which contains the level of the game
 *
 *  La fonction charge le jeux avec les structures passer en parametres  
 */


void load_game(Game_t * game,Mod_t * mode,int lvlnumber)
{
	game->level = lvlnumber;
	game->nbInvaders = mode->levels[lvlnumber]->nbShips;
	game->defender = malloc(sizeof(Player_t *));
	
	load_defender(game->defender,mode->name);
	
	game->invaders = malloc(game->nbInvaders*sizeof(Invader_t*));
	
	for (int i = 0; i < game->nbInvaders; ++i){
		char n[3];
		sprintf(n,"%d",mode->levels[lvlnumber]->data[i][0]);
		game->invaders[i] = malloc(sizeof(Invader_t));
		load_invader(game->invaders[i],n,mode->name);	
		game->invaders[i]->appear = mode->levels[lvlnumber]->data[i][1];
		game->invaders[i]->id = i+1;
		game->invaders[i]->x = SCREEN_WIDTH - ((mode->levels[lvlnumber]->data[i][2]*SCREEN_WIDTH)/100);
		game->invaders[i]->y = SCREEN_HEIGHT - ((mode->levels[lvlnumber]->data[i][3]*SCREEN_HEIGHT)/100);
	}

	game->map = malloc(MAP_SIZE*sizeof(char));
}