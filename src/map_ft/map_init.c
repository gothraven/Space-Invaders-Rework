/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    map_init.c                                  #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: L.Frederic                              #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/03 08:45:00 by Z.Safiy                                  #
#    Updated: 2017/14/03 09:19:10 by L.Frederic                               #
#                                                                             # 
#*****************************************************************************/

#include "map.h"

/*! \fn void map_init(char * map){
 *  \brief this function is just the initialisation of the map 
 *  \param map is a characters table which contains the map of the game  
 *  
 *  La fonction initialise les principaux composants de la map   
 *
 */

void map_init(char * map)
{
	fill_map(map);
	draw_borders(map);
	draw_status_bar(map);
}

/*! \fn void fill_map(char * map){
 *  \brief print space torint the background of the map 
 *  \param map is a characters table which contains the map of the game  
 *  
 *  La fonction affiche des espaces afin de dessiner le fond de la map   
 *
 */

void fill_map(char * map)
{

	for(int i=0; i<MAP_SIZE; i++) map[i]=' ';

}

/*! \fn void draw_borders(char * map){
 *  \brief draw the borders using the size define in map.h 
 *  \param map is a characters table which contains the map of the game  
 *  
 *  La fonction dessine les bordures de la map en utilisant les dimensions se trouvant 
 *  dans le fichier map.h
 *
 */

void draw_borders(char * map)
{
	for (int i = 1; i <=SCREEN_HEIGHT; i++){
		for (int j = 1; j <=SCREEN_WIDTH; j++){
			if(j==1 || j==2 || j==SCREEN_WIDTH-1 || j==SCREEN_WIDTH || i==1 || i==SCREEN_HEIGHT){
				map_xy(map,'#',j,i);
			}
		}
	}
}

/*! \fn void draw_status_bar(char * map){
 *  \brief draw the the status bar including the score, the level, the health of the sheep 
 *  using the function draw_shape 
 *  \param map is a characters table which contains the map of the game  
 *  
 *  La fonction dessine la barre de statuts comportant le score, le niveau et la vie du vaisseau
 *  en utilisant la fonction draw_shape
 *
 */
void draw_status_bar(char * map)
{

	char * score[] = {"SCORE : ",NULL};
	
	char * level[] = {"LEVEL - ",NULL};
	
	char * health[] = {"HEALTH : ",NULL};

	draw_shape(map,score,SCORE_X,SCORE_Y);
	
	draw_shape(map,level,LEVEL_X,LEVEL_Y);
	
	draw_shape(map,health,HEALTH_X,HEALTH_Y);

}