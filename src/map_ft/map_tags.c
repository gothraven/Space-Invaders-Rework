/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    map_tags.c                                  #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/03 08:45:00 by Z.Safiy                                  #
#    Updated: 2017/14/03 09:19:10 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#include "map.h"

/*! \fn void game_over(char * map){
 *  \brief draw "game over" on the map 
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "game over" sur la map  
 *
 */

void game_over(char * map){
	char * game_over[]={" _______  _______  __   __  _______    _______  __   __  _______  ______   ",
						"|       ||   _   ||  |_|  ||       |  |       ||  | |  ||       ||    _ |  ",
						"|    ___||  |_|  ||       ||    ___|  |   _   ||  |_|  ||    ___||   | ||  ",
						"|   | __ |       ||       ||   |___   |  | |  ||       ||   |___ |   |_||_ ",
						"|   ||  ||       ||       ||    ___|  |  |_|  ||       ||    ___||    __  |",
						"|   |_| ||   _   || ||_|| ||   |___   |       | |     | |   |___ |   |  | |",
						"|_______||__| |__||_|   |_||_______|  |_______|  |___|  |_______||___|  |_|",
										NULL};
	draw_shape(map,game_over,40,20);
}

/*! \fn void game_start(char * map){
 *  \brief draw "start" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "start" sur la map et est supprimer apres un certains temps
 *
 */

void game_start(char * map){
	char * game_start[]={" _______  _______  _______  ______    _______ ",
						 "|       ||       ||   _   ||    _ |  |       |",
						 "|  _____||_     _||  |_|  ||   | ||  |_     _|",
						 "| |_____   |   |  |       ||   |_||_   |   |  ",
						 "|_____  |  |   |  |       ||    __  |  |   |  ",
						 " _____| |  |   |  |   _   ||   |  | |  |   |  ",
						 "|_______|  |___|  |__| |__||___|  |_|  |___|  ",
										NULL};
	draw_shape(map,game_start,50,20);
	map_show(map);
	sleep(2);
	erase_shape(map,game_start,50,20);
}