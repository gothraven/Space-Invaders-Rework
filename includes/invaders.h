/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    invaders.h                                  #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/08/04 17:21:58 by Z.Safiy                                  #
#    Updated: 2017/08/04 17:21:58 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/

#ifndef INVADERS_H
#define INVADERS_H value

#include "game.h"
#include "map.h"

#define UP 1
#define DOWN -1
#define LEFT -1
#define RIGHT 1
#define ZERO 0

void move_invader(char * map, Invader_t * invader, int dirH, int dirV);
void mv_invader_UP(char * map, Invader_t * invader);
void mv_invader_DOWN(char * map, Invader_t * invader);
void mv_invader_LEFT(char * map, Invader_t * invader);
void mv_invader_RIGHT(char * map, Invader_t * invader);
void mv_invader_UP_LEFT(char * map, Invader_t * invader);
void mv_invader_DOWN_LEFT(char * map, Invader_t * invader);
void mv_invader_UP_RIGHT(char * map, Invader_t * invader);
void mv_invader_DOWN_RIGHT(char * map, Invader_t * invader);
void mv_invader_STOP(char * map, Invader_t * invader);

#endif