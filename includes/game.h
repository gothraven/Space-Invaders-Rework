./*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    game.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/20/03 00:39:21 by Z.Safiy                                  #
#    Updated: 2017/25/03 00:56:21 by Z.Safiy                                  #
#                                                                             #
#*****************************************************************************/
#ifndef GAME_H
#define GAME_H

#include <time.h>

#define SCORE_LENGHT 20
#define HEALTH_LENGHT 3
#define LEVEL_LENGHT 4

typedef struct Path Path_t;

struct Path{
	int h; //horisental 
	int v; //vertical
	Path_t * next;
};

typedef struct {
	char shape;
	int x;
	int y;
	int power;
	int speed;
}Shot_t;

typedef struct {
	int x;
	int y;
	int health;
	int fireOn;
	Shot_t * shot;
	char ** shape;
}Player_t;

typedef struct {
	int id;
	int type;
	int appear;
	int x;
	int y;
	int health;
	float freq;
	Path_t dir;
	Shot_t * shot;
	char ** shape;
	Path_t * path;
}Invader_t;

typedef struct {
	int nbShips;
	char * number;
	int ** data;
}Level_t;

typedef struct {
	char * name;
	Level_t ** levels;
}Mod_t;

typedef struct {
	int level;
	int score;
	int nbInvaders;
	Player_t * defender;
	Invader_t ** invaders;
	char * map;
}Game_t;


#endif