/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    move_shot.c                                 #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: L.Frederic                              #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/11/04 17:15:09 by Z.Safiy                                  #
#    Updated: 2017/14/04 03:32:25 by L.Frederic                               #
#                                                                             # 
#*****************************************************************************/


#include "shots.h"
#include "player.h"

/*! \fn void move_shot(char * map, Player_t * defender, char * keypressed)
 *  \brief manage the shot and the move of the user's ship
 *  \param map is a characters table which contains the map of the game  
 *  \param shot is a struct which contains everithing about a certains shot 
 *  \param dir=1 canonical mode dir=0 normal mode 
 *  
 *  La fonction gère les tirs et les déplacements du vaisseau de l'utilisateur
 *
 */


void move_shot(char * map, Shot_t * shot, int dir){

	if(dir == 1) move_shot_up(map,shot);

	if(dir == -1) move_shot_down(map,shot);

}


/*! \fn void move_shot_up(char * map, Shot_t * shot)
 *  \brief "move" the shoot from the user's ship to the line up
 *  \param map is a characters table which contains the map of the game  
 *  \param shot is a struct which contains everithing about a certains shot 
 *  
 *  La fonction fait monter le tir du vaisseau de l'utilisateur en l'affichant sur la ligne du dessus 
 *
 */

void move_shot_up(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
	
	shot->y -= 1;
	
	map_xy(map,shot->shape,shot->x,shot->y);
}

/*! \fn void move_shot_down(char * map, Shot_t * shot)
 *  \brief "move" the shoot from the user's ship to the line down
 *  \param map is a characters table which contains the map of the game  
 *  \param shot is a struct which contains everithing about a certains shot 
 *  
 *  La fonction fait descendre le tir de l'envahiseur en l'affichant sur la ligne du dessous
 *
 */

void move_shot_down(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
	
	shot->y += 1;
	
	map_xy(map,shot->shape,shot->x,shot->y);

}

/*! \fn void erase_shot(char * map, Shot_t * shot)
 *  \brief replace the shoot by a space to erase it 
 *  \param map is a characters table which contains the map of the game  
 *  \param shot is a struct which contains everithing about a certains shot 
 *  
 *  La fonction remplace le tir par un espace pour le faire disparaître de l'écran
 *
 */

void erase_shot(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
}