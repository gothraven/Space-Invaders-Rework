/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    shots.h                                     #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/08/04 17:21:58 by Z.Safiy                                  #
#    Updated: 2017/08/04 17:21:58 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#ifndef SHOTS_H
#define SHOTS_H value

#include "map.h"
#include "game.h"

#define UP 1
#define DOWN -1

void shot_handler(Game_t * game, char * keypressed);

void move_shot(char * map, Shot_t * shot, int dir);
void move_shot_up(char * map, Shot_t * shot);
void move_shot_down(char * map, Shot_t * shot);

void erase_shot(char * map, Shot_t * shot);

int shot_touch(char * map, Shot_t * shot);




#endif