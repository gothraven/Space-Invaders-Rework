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

/*! \fn void player_handler(char * map,Player_t * defender, char * keypressed)
 *  \brief manage the shot and the move of the user's ship
 *  \param map is a characters table which contains the map of the game  
 *  \param defender is the user ship
 *  \param keypressed is a character key pressed by the user 
 *  
 *  La fonction gere les tires et les deplacement du vaisseaux de l'utilisateur
 *
 */


void player_handler(char * map, Player_t * defender, char * keypressed){

	move_shot(map,defender,keypressed);

	move_player(map,defender,keypressed);

}