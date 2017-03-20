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
#define GAME_H value


struct missile_t{
	char * shape;
	int x;
	int y;
	int power;
};

struct player_t{
	char ** shape;
	int x;
	int y;
	int health;
	int speed;
	missile_t shot;
	int fireOn;
};

struct invader_t{
	char ** shape;
	int x;
	int y;
	int health;
	int speed;
	float freq;
	int type;
};

struct game_t{
	char ** map;
	mod_t mode;
	player_t defender;
	invader_t[] invaders;
	int score;
};


#endif