/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    move_shot.c                                 #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/11/04 17:15:09 by Z.Safiy                                  #
#    Updated: 2017/11/04 17:15:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/


#include "shots.h"
#include "player.h"

/*! \fn void move_shot(char * map, Player_t * defender, char * keypressed)
 *  \brief manage the shot and the move of the user's ship
 *  \param map is a characters table which contains the map of the game  
 *  \param defender is the user ship
 *  \param keypressed is a character key pressed by the user 
 *  
 *  La fonction gere les tires et les deplacement du vaisseaux de l'utilisateur
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
 *  La fonction fait monter le tire du vaisseau de l'utilisateurs en l'affichant sur la ligne du dessus 
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
 *  La fonction fait descendre le tire de l'envahiseur en l'affichant sur la ligne du dessous
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
 *  La fonction remplace le tire par un espace pour le faire disparaitre de l'écran
 *
 */

void erase_shot(char * map, Shot_t * shot){
	map_xy(map,' ',shot->x,shot->y);
}