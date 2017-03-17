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


#define SCREEN_WIDTH 150
#define SCREEN_HEIGHT 50
#define MAP_SIZE SCREEN_WIDTH*SCREEN_HEIGHT



void map_xy(char * map, char charc, int x, int y);

void map_init(char * map);
void fill_map(char * map);
void draw_borders(char * map);
void draw_status_bar(char * map);
void draw_shape(char * map,char ** shape,int x, int y);
void erase_shape(char * map,char ** shape,int x, int y);

#endif