/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    load.h                                      #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/12/03 18:05:32 by Z.Safiy                                  #
#    Updated: 2017/12/03 20:09:52 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/

#ifndef LOAD_H
#define LOAD_H value

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "game.h"

#define DEF_PATH "defender/"
#define ENE_PATH "enemies/"
#define MOD_PATH "mods/"
#define LVL_PATH "levels/"

#define BUFFSIZE 1024
#define MAX_LEVELS 10

typedef struct {
	int ship_width;
	int ship_height;
	int path_size;
	int * path_h;
	int * path_v;
	int ship_health;
	float shot_freq;
	int shot_speed;
	int shot_power;
	char shot;
	char ** shape;
}Ship_fs;

void load_mode(Mod_t * mode);
void show_mode(Mod_t * mode);

void load_level(Level_t * level,Mod_t * mode);
void show_level(Level_t * level);

void load_defender(char * modename);
void load_enemy(char * enemytipe,char * modename);

void load_shipfile(Ship_fs * file,int fd);
void show_file(Ship_fs * file);
void free_file(Ship_fs * file);

char * get_line(char * buffer,int * i);
void parse_line(char * line,char ** buff);






#endif