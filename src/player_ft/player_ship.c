/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    player_ship.c                               #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/15/05 04:02:57 by Z.Safiy                                  #
#    Updated: 2017/15/05 20:50:26 by L.Frederic                               #
#                                                                             # 
#*****************************************************************************/

#include "player.h"
#include "shots.h" 

/*! \fn int defender_width(Player_t * defender)
 *  \brief this function give the width of the user ship
 *  \param defender is the user ship
 *  
 *  La fonction donne la largeur du vaisseau de l'utilisateur
 *
 *  \return the width
 */

int defender_width(Player_t * defender)
{
	int i=0;
	int j=0;
	while(defender->shape[i][j] != '\0'){
		j++;
	}
	return j++;
}

/*! \fn int defender_width(Player_t * defender)
 *  \brief this function give the height of the user ship
 *  \param defender is the user ship
 *  
 *  La fonction donne la longueur du vaisseau de l'utilisateur
 *
 *  \return the heith
 */

int defender_height(Player_t * defender)
{
	int i = 0;
	while(defender->shape[i] != NULL){
		i++;
	}
	return i++;
}