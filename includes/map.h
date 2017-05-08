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

#define SCREEN_WIDTH 150
#define SCREEN_HEIGHT 50
#define MAP_SIZE SCREEN_WIDTH*SCREEN_HEIGHT

#define SCORE_X 7
#define SCORE_Y 2
#define HEALTH_X 120
#define HEALTH_Y 2
#define LEVEL_X 65
#define LEVEL_Y 2




void map_xy(char * map, char charc, int x, int y);

void map_init(char * map);
void map_show(char * map);

void fill_map(char * map);
void draw_borders(char * map);
void draw_status_bar(char * map);

void draw_shape(char * map,char ** shape,int x, int y);
void erase_shape(char * map,char ** shape,int x, int y);

void game_over(char * map);
void game_start(char * map);

#endif