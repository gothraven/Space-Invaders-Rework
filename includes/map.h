/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    map.h                                       #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/12/03 18:05:32 by Z.Safiy                                  #
#    Updated: 2017/13/03 01:06:52 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#ifndef MAP_H
#define MAP_H value

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"

#define SCREEN_WIDTH 150
#define SCREEN_HEIGHT 50
#define MAP_SIZE SCREEN_WIDTH*SCREEN_HEIGHT

#define SCORE_X 7
#define SCORE_Y 2
#define HEALTH_X 120
#define HEALTH_Y 2
#define LEVEL_X 65
#define LEVEL_Y 2

#define GAME_OVER_X (SCREEN_WIDTH/2) - 37
#define GAME_OVER_Y (SCREEN_HEIGHT/2) -5

#define LEVEL_START_X (SCREEN_WIDTH/2) - 51
#define LEVEL_START_Y (SCREEN_HEIGHT/2) -5

#define LEVEL_DONE_X (SCREEN_WIDTH/2) - 41
#define LEVEL_DONE_Y (SCREEN_HEIGHT/2) -5

#define NEXT_LEVEL_X (SCREEN_WIDTH/2) - 28
#define NEXT_LEVEL_Y (SCREEN_HEIGHT/2) -5

#define GAME_PAUSE_X (SCREEN_WIDTH/2) - 22
#define GAME_PAUSE_Y (SCREEN_HEIGHT/2) -5

#define GOOD_BYE_X (SCREEN_WIDTH/2) - 32
#define GOOD_BYE_Y (SCREEN_HEIGHT/2) - 5

#define EARTH_SAVED_X (SCREEN_WIDTH/2) - 47
#define EARTH_SAVED_Y (SCREEN_HEIGHT/2) - 5

#define SURRENDER_X (SCREEN_WIDTH/2) - 51
#define SURRENDER_Y (SCREEN_HEIGHT/2) - 5


void map_xy(char * map, char charc, int x, int y);

void map_init(char * map);
void map_show(char * map);

void fill_map(char * map);
void draw_borders(char * map);
void draw_status_bar(char * map);
void status_bar_handler(Game_t * game);

void draw_shape(char * map,char ** shape,int x, int y);
void erase_shape(char * map,char ** shape,int x, int y);

void game_over(char * map);
void game_start(char * map);
void level_done(char * map);
void next_level(char * map);
void game_pause(char * map);
void game_continue(char *map);
void good_bye(char * map);
void earth_saved(char * map);
void surrender(char * map);

#endif