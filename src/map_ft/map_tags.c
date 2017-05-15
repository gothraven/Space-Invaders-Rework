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

void game_over(char * map)
{
	char * game_over[]={" _______  _______  __   __  _______    _______  __   __  _______  ______   ",
						"|       ||   _   ||  |_|  ||       |  |       ||  | |  ||       ||    _ |  ",
						"|    ___||  |_|  ||       ||    ___|  |   _   ||  |_|  ||    ___||   | ||  ",
						"|   | __ |       ||       ||   |___   |  | |  ||       ||   |___ |   |_||_ ",
						"|   ||  ||       ||       ||    ___|  |  |_|  ||       ||    ___||    __  |",
						"|   |_| ||   _   || ||_|| ||   |___   |       | |     | |   |___ |   |  | |",
						"|_______||__| |__||_|   |_||_______|  |_______|  |___|  |_______||___|  |_|",
						NULL};
	draw_shape(map,game_over,40,20);
	map_show(map);
	sleep(2);
	erase_shape(map,game_over,40,20);
}

/*! \fn void game_start(char * map){
 *  \brief draw "start" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "level - start" sur la map et est supprimer apres un certains temps
 *
 */

void game_start(char * map)
{
	char * game_start[]={" ___      _______  __   __  _______  ___                 _______  _______  _______  ______    _______ ",
						 "|   |    |       ||  | |  ||       ||   |               |       ||       ||   _   ||    _ |  |       |",
						 "|   |    |    ___||  |_|  ||    ___||   |       ____    |  _____||_     _||  |_|  ||   | ||  |_     _|",
						 "|   |    |   |___ |       ||   |___ |   |      |____|   | |_____   |   |  |       ||   |_||_   |   |  ",
						 "|   |___ |    ___||       ||    ___||   |___            |_____  |  |   |  |       ||    __  |  |   |  ",
						 "|       ||   |___  |     | |   |___ |       |            _____| |  |   |  |   _   ||   |  | |  |   |  ",
						 "|_______||_______|  |___|  |_______||_______|           |_______|  |___|  |__| |__||___|  |_|  |___|  ",
						NULL};
	draw_shape(map,game_start,25,20);
	map_show(map);
	sleep(2);
	erase_shape(map,game_start,25,20);
}


void level_done(char * map)
{
	char * leve_done[]={" ___      _______  __   __  _______  ___        ______   _______  __    _  _______ ",
						"|   |    |       ||  | |  ||       ||   |      |      | |       ||  |  | ||       |",
						"|   |    |    ___||  |_|  ||    ___||   |      |  _    ||   _   ||   |_| ||    ___|",
						"|   |    |   |___ |       ||   |___ |   |      | | |   ||  | |  ||       ||   |___ ",
						"|   |___ |    ___||       ||    ___||   |___   | |_|   ||  |_|  ||  _    ||    ___|",
						"|       ||   |___  |     | |   |___ |       |  |       ||       || | |   ||   |___ ",
						"|_______||_______|  |___|  |_______||_______|  |______| |_______||_|  |__||_______|",
						NULL};
	draw_shape(map,leve_done,35,20);
	map_show(map);
	sleep(2);
	erase_shape(map,leve_done,35,20);
}

void next_level(char * map)
{
	char * next_level[]={" __    _  _______  __   __  _______                     ",
						 "|  |  | ||       ||  |_|  ||       |                    ",
						 "|   |_| ||    ___||       ||_     _|                    ",
						 "|       ||   |___ |       |  |   |                      ",
						 "|  _    ||    ___| |     |   |   |     ___   ___   ___  ",
						 "| | |   ||   |___ |   _   |  |   |    |   | |   | |   | ",
						 "|_|  |__||_______||__| |__|  |___|    |___| |___| |___| ",
						NULL};
	draw_shape(map,next_level,35,20);
	map_show(map);
	sleep(2);
	erase_shape(map,next_level,35,20);
}

void game_pause(char * map)
{
	char * game_pause[]={" _______  _______  __   __  _______  _______ ",
						 "|       ||   _   ||  | |  ||       ||       |",
						 "|    _  ||  |_|  ||  | |  ||  _____||    ___|",
						 "|   |_| ||       ||  |_|  || |_____ |   |___ ",
						 "|    ___||       ||       ||_____  ||    ___|",
						 "|   |    |   _   ||       | _____| ||   |___ ",
						 "|___|    |__| |__||_______||_______||_______|",
						NULL};
	draw_shape(map,game_pause,GAME_PAUSE_X,GAME_PAUSE_Y);
	map_show(map);
}

void game_continue(char * map)
{	
	char * game_pause[]={" _______  _______  __   __  _______  _______ ",
						 "|       ||   _   ||  | |  ||       ||       |",
						 "|    _  ||  |_|  ||  | |  ||  _____||    ___|",
						 "|   |_| ||       ||  |_|  || |_____ |   |___ ",
						 "|    ___||       ||       ||_____  ||    ___|",
						 "|   |    |   _   ||       | _____| ||   |___ ",
						 "|___|    |__| |__||_______||_______||_______|",
						NULL};
	erase_shape(map,game_pause,GAME_PAUSE_X,GAME_PAUSE_Y);
	map_show(map);
}