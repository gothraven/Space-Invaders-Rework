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


/**
 *this function just draw the shape
 *@param map is available in map.h/ shape is a char ** /x and y is the direction 
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


/**
 *this function erase the shape
 *@param map is available in map.h/ shape is a char ** /x and y is the direction 
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