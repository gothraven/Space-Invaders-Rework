/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    draw_shape.c                                #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/17/03 19:26:09 by Z.Safiy                                  #
#    Updated: 2017/17/03 19:26:09 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "map.h"

/*! \fn void draw_shape(char * map,char ** shape,int x, int y)
 *  \brief draw an object in the map using the coordonner 
 *  \param map is a characters table which contains the map of the game  
 *  \param shape is characters table which countains a certain shape to be 
 *  \param x is the horisental cordinate of where the shape will start being  
 *  \param y is the vertical cordinate of where the shape will start being  
 *  
 *  La fonction desinne un objet en utilisant ses coordonner x, y tel que 
 *  x et y soit le plus petit possible 
 *
 */

void draw_shape(char * map,char ** shape,int x, int y){
	int i=0,j=0;
	while(shape[i] != NULL){
		j=0;
		while(shape[i][j] != '\0'){
			map_xy(map,shape[i][j],x+j,y+i);
			j++; 
		}
		i++;
	}

}


/*! \fn void erase_shape(char * map,char ** shape,int x, int y)
 *  \brief print a space in the map using the coordonner to erase an object on the map 
 *  \param map is a characters table which contains the map of the game  
 *  \param shape is characters table which countains a certain shape to be deleted 
 *  \param x is the horisental cordinate of where the shape will start being deleted
 *  \param y is the vertical cordinate of where the shape will start being deleted
 *  
 *  La fonction echange les caracteres par des espace dans la map dans le but de changer l'objet 
 *  en utilisant ses coordonner x, y tel que x et y soit le plus petit possible 
 *
 */
void erase_shape(char * map,char ** shape,int x, int y){
	int i=0,j=0;
	while(shape[i] != NULL){
		j=0;
		while(shape[i][j] != '\0'){
			map_xy(map,' ',x+j,y+i);
			j++; 
		}
		i++;
	}

}