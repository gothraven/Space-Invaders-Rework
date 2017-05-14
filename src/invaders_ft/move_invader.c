/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    move_invader.c                              #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/08/04 17:21:58 by Z.Safiy                                  #
#    Updated: 2017/08/04 17:21:58 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#include "invaders.h"
#include <string.h>

/*! \fn void move_invader(char * map, Invader_t * invader, int dirH, int dirV)
 *  \brief manage all the invader's move 
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  \param dirH is the horizontal direction UP 1 DOWN -1
 *  \param dirV is the vertical direction RIGHT 1 LEFT -1
 *  
 *  La fonction gere tout les mouvement des invaders
 *
 */

void move_invader(char * map, Invader_t * invader, int dirH, int dirV)
{
	if(dirH == RIGHT){
		if(dirV == UP){
			mv_invader_UP_RIGHT(map,invader);
		}else if(dirV == DOWN){
			mv_invader_DOWN_RIGHT(map,invader);
		}else if(dirV == ZERO){
			mv_invader_RIGHT(map,invader);
		}
	}else if(dirH == LEFT){
		if(dirV == UP){
			mv_invader_UP_LEFT(map,invader);
		}else if(dirV == DOWN){
			mv_invader_DOWN_LEFT(map,invader);
		}else if(dirV == ZERO){
			mv_invader_LEFT(map,invader);
		}
	}else if(dirH == ZERO){
		if(dirV == UP){
			mv_invader_UP(map,invader);
		}else if(dirV == DOWN){
			mv_invader_DOWN(map,invader);
		}else if(dirV == ZERO){
			mv_invader_STOP(map,invader);
		}
	}
}

/*! \fn void mv_invader_UP(char * map, Invader_t * invader)
 *  \brief manage all the invader's move up
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers le haut
 */

void mv_invader_UP(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->y -= 1;
	invader->dir = *(invader->dir.next); 
	
	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_DOWN(char * map, Invader_t * invader)
 *  \brief manage all the invader's move down
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers le bas
 */

void mv_invader_DOWN(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->y += 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_LEFT(char * map, Invader_t * invader)
 *  \brief manage all the invader's move left
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers la gauche
 */

void mv_invader_LEFT(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x -= 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_RIGHT(char * map, Invader_t * invader)
 *  \brief manage all the invader's move right
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers la droite
 */

void mv_invader_RIGHT(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x += 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_UP_LEFT(char * map, Invader_t * invader)
 *  \brief manage all the invader's move up-left
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers le haut à gauche
 */

void mv_invader_UP_LEFT(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x -= 1;
	invader->y -= 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_DOWN_LEFT(char * map, Invader_t * invader)
 *  \brief manage all the invader's move down-left
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers le bas à gauche
 */

void mv_invader_DOWN_LEFT(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x -= 1;
	invader->y += 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_UP_RIGHT(char * map, Invader_t * invader)
 *  \brief manage all the invader's move up-right
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers le haut à droite
 */

void mv_invader_UP_RIGHT(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x += 1;
	invader->y -= 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_DOWN_RIGHT(char * map, Invader_t * invader)
 *  \brief manage all the invader's move down-right
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les mouvement des invaders vers le bas à droite
 */
void mv_invader_DOWN_RIGHT(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);
	
	invader->x += 1;
	invader->y += 1;
	invader->dir = *(invader->dir.next);

	draw_shape(map,invader->shape,invader->x,invader->y);
}

/*! \fn void mv_invader_STOP(char * map, Invader_t * invader)
 *  \brief manage all the invader's stop
 *  \param map is a characters table which contains the map of the game  
 *  \param invader is the ship of the ennemies
 *  
 *  La fonction gere tout les arrets des invaders
 */

void mv_invader_STOP(char * map, Invader_t * invader)
{
	erase_shape(map,invader->shape,invader->x,invader->y);

	//doesn't move
	invader->dir = *(invader->dir.next); 

	draw_shape(map,invader->shape,invader->x,invader->y);
}