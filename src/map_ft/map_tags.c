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
	draw_shape(map,game_over,GAME_OVER_X,GAME_OVER_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,game_over,GAME_OVER_X,GAME_OVER_Y);
}

/*! \fn void game_start(char * map)
 *  \brief draw "start" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "level - start" sur la map et elle le supprime après un certain temps
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
	draw_shape(map,game_start,LEVEL_START_X,LEVEL_START_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,game_start,LEVEL_START_X,LEVEL_START_Y);
}

/*! \fn void level_done(char * map)
 *  \brief draw "level-done" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "level - done" sur la map et elle le supprime après un certain temps
 *
 */

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
	draw_shape(map,leve_done,LEVEL_DONE_X,LEVEL_DONE_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,leve_done,LEVEL_DONE_X,LEVEL_DONE_Y);
}

/*! \fn void next_level(char * map)
 *  \brief draw "next level" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "next level" sur la map et elle le supprime après un certain temps
 *
 */

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
	draw_shape(map,next_level,NEXT_LEVEL_X,NEXT_LEVEL_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,next_level,NEXT_LEVEL_X,NEXT_LEVEL_Y);
}

/*! \fn void game_pause(char * map)
 *  \brief draw "pause" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "pause" sur la map et elle le supprime après un certain temps
 *
 */

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

/*! \fn void game_continue (char * map)
 *  \brief draw "pause" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "pause" sur la map et elle le supprime après un certain temps
 *
 */

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

/*! \fn void good_bye (char * map)
 *  \brief draw "good bye" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "good bye" sur la map et elle le supprime après un certain temps
 *
 */

void good_bye(char * map)
{
	char * good_bye[]={" _______  _______  _______  ______     _______  __   __  _______ ",
					   "|       ||       ||       ||      |   |  _    ||  | |  ||       |",
					   "|    ___||   _   ||   _   ||  _    |  | |_|   ||  |_|  ||    ___|",
					   "|   | __ |  | |  ||  | |  || | |   |  |       ||       ||   |___ ",
					   "|   ||  ||  |_|  ||  |_|  || |_|   |  |  _   | |_     _||    ___|",
					   "|   |_| ||       ||       ||       |  | |_|   |  |   |  |   |___ ",
					   "|_______||_______||_______||______|   |_______|  |___|  |_______|",
						NULL};
	draw_shape(map,good_bye,GOOD_BYE_X,GOOD_BYE_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,good_bye,GOOD_BYE_X,GOOD_BYE_Y);
}

/*! \fn void earth_saved(char * map)
 *  \brief draw "earth_saved" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "earth_saved" sur la map et elle le supprime après un certain temps
 *
 */

void earth_saved(char * map)
{
	char * earth_saved[]={" _______  _______  ______    _______  __   __    _______  _______  __   __  _______  ______  ",
					   	  "|       ||   _   ||    _ |  |       ||  | |  |  |       ||   _   ||  | |  ||       ||      | ",
					      "|    ___||  |_|  ||   | ||  |_     _||  |_|  |  |  _____||  |_|  ||  |_|  ||    ___||  _    |",
					      "|   |___ |       ||   |_||_   |   |  |       |  | |_____ |       ||       ||   |___ | | |   |",
					      "|    ___||       ||    __  |  |   |  |       |  |_____  ||       ||       ||    ___|| |_|   |",
					      "|   |___ |   _   ||   |  | |  |   |  |   _   |   _____| ||   _   | |     | |   |___ |       |",
					      "|_______||__| |__||___|  |_|  |___|  |__| |__|  |_______||__| |__|  |___|  |_______||______| ",
						  NULL};
	draw_shape(map,earth_saved,EARTH_SAVED_X,EARTH_SAVED_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,earth_saved,EARTH_SAVED_X,EARTH_SAVED_Y);
}

/*! \fn void surrender(char * map)
 *  \brief draw "surrender yes?" on the map and then erase it after sometime
 *  \param map is a characters table wihch contains the map of the game  
 *  
 *  La fonction dessine "surrender yes?" sur la map et elle le supprime après un certain temps
 *
 */

void surrender(char * map)
{
	char * surrender[]={" _______  __   __  ______    ______    _______  __    _  ______   _______  ______                     ",
					   	"|       ||  | |  ||    _ |  |    _ |  |       ||  |  | ||      | |       ||    _ |                    ",
					    "|  _____||  | |  ||   | ||  |   | ||  |    ___||   |_| ||  _    ||    ___||   | ||                    ",
					    "| |_____ |  |_|  ||   |_||_ |   |_||_ |   |___ |       || | |   ||   |___ |   |_||_                   ",
					    "|_____  ||       ||    __  ||    __  ||    ___||  _    || |_|   ||    ___||    __  | ___   ___   ___  ",
					    " _____| ||       ||   |  | ||   |  | ||   |___ | | |   ||       ||   |___ |   |  | ||   | |   | |   | ",
					    "|_______||_______||___|  |_||___|  |_||_______||_|  |__||______| |_______||___|  |_||___| |___| |___| ",
					    "                             __   __  _______  _______  ______                                        ",
					    "                            |  | |  ||       ||       ||      |                                       ",
					    "                            |  |_|  ||    ___||  _____||___   |                                       ",
					    "                            |       ||   |___ | |_____   __|  |                                       ",
					    "                            |_     _||    ___||_____  | |_____|                                       ",
					    "                              |   |  |   |___  _____| |   __                                          ",
					    "                              |___|  |_______||_______|  |__|                                         ",
					    NULL};
	draw_shape(map,surrender,SURRENDER_X,SURRENDER_Y);
	map_show(map);
	sleep(2);
	erase_shape(map,surrender,SURRENDER_X,SURRENDER_Y);
}
