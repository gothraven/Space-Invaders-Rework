/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    game.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/20/03 00:39:21 by Z.Safiy                                  #
#    Updated: 2017/20/03 00:39:21 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#ifndef GAME_H
#define GAME_H


typedef struct {
	char shape;
	int x;
	int y;
	int power;
}Shot_t;

typedef struct {
	char ** shape;
	int x;
	int y;
	int health;
	int speed;
	Shot_t * shot;
	int fireOn;
}Player_t;

typedef struct {
	char ** shape;
	int x;
	int y;
	int health;
	int speed;
	float freq;
	Shot_t shot;
	int type;
}Invader_t;

typedef struct {
	char * name;
	Player_t * defender;
	Invader_t invaders[];
}Mod_t;

typedef struct {
	char ** map;	
	int score;
	Mod_t mode[];
}Game_t;


#endif