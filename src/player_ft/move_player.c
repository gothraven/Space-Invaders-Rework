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

/*! \fn void move_player(char * map,Player_t * defender, char * keypressed)
 *  \brief move the defender according to the key pressed by the user
 *  \param map is a characters table which contains the map of the game  
 *  \param defender is the user ship
 *  \param keypressed is a character key pressed by the user 
 *  
 *  La fonction bouge le vaisseau en fonction de la touche pressée par l'utilisateur
 *
 */

void move_player(char * map,Player_t * defender, char * keypressed){

	if(keypressed[0] == LEFTKEY) move_player_left(map,defender);
	if(keypressed[0] == RIGHTKEY) move_player_right(map,defender);
	if(defender->x == 3) move_player_right(map,defender);
	if(defender->x+defender_width(defender) == SCREEN_WIDTH - 1) move_player_left(map,defender);
}	

/*! \fn void move_player_left(char * map,Player_t * defender)
 *  \brief move the defender to the left
 *  \param map is a characters table which contains the map of the game  
 *  \param defender is the user ship
 *  
 *  La fonction bouge le vaisseau vers la gauche
 *
 */


void move_player_left(char * map,Player_t * defender){

	erase_shape(map,defender->shape,defender->x,defender->y);
	
	defender->x -= 1;
	
	draw_shape(map,defender->shape,defender->x,defender->y);

}

/*! \fn void move_player_right(char * map,Player_t * defender)
 *  \brief move the defender to the right
 *  \param map is a characters table which contains the map of the game  
 *  \param defender is the user ship
 *  
 *  La fonction bouge le vaisseau vers la droite
 *
 */

void move_player_right(char * map,Player_t * defender){

	erase_shape(map,defender->shape,defender->x,defender->y);
	
	defender->x += 1;
	
	draw_shape(map,defender->shape,defender->x,defender->y);

}
