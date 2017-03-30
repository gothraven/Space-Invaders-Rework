/*****************************************************************************#
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

#define DEFAULT_SPEED 1

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
	int speed;
	int fireOn;
	Shot_t * shot;
	char ** shape;
}Player_t;

typedef struct {
	int type;
	/*time to apeare*/
	int x;
	int y;
	/*list circulaire*/
	int health;
	int speed;
	float freq;
	Shot_t * shot;
	char ** shape;
}Invader_t;

typedef struct {
	char * number;
	int nbShips;
	int ** data;
}Level_t;

typedef struct {
	char * name;
	Level_t ** levels;
}Mod_t;

typedef struct {
	int level;
	int score;
	int nbInaders;
	Player_t * defender;
	Invader_t ** invaders;
	char * map;
}Game_t;


#endif