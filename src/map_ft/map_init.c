/*****************************************************************************#
#                                                                             #
#                                                #   # #### #### ####         #
#    map_init.c                                  #   # #  # #    #            #
#                                                #   # #### ###  #            #
#    By: Z. Safiy Errahmane                      #   # #    #    #            #
#                                                 ###  #    #### ####         #
#    Created: 2017/14/03 08:45:00 by Z.Safiy                                  #
#    Updated: 2017/14/03 09:19:10 by Z.Safiy                                  #
#                                                                             # 
#*****************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include "map.h"



void map_init(char * map){
	fill_map(map);
	draw_borders(map);
	draw_status_bar(map);
}



void fill_map(char * map){
	for(int i=0; i<MAP_SIZE; i++) map[i]=' ';
}



void draw_borders(char * map){
	for (int i = 1; i <=SCREEN_HEIGHT; i++){
		for (int j = 1; j <=SCREEN_WIDTH; j++){
			if(j==1 || j==2 || j==SCREEN_WIDTH-1 || j==SCREEN_WIDTH || i==1 || i==SCREEN_HEIGHT){
				map_xy(map,'#',j,i);
			}
		}
	}
}


void draw_status_bar(char * map){
	char * score = "SCORE : ";
	int x=7,y=2;
	char * level = "LEVEL - ";
	char * health = "HEALTH : ";

	for(unsigned int i=0; i<sizeof(score); i++){
		map_xy(map,score[i],x++,y);
	}
	
	x=65,y=2;
	for(unsigned int i=0; i<sizeof(level); i++){
		map_xy(map,level[i],x++,y);
	}

	x=120,y=2;
	for(unsigned int i=0; i<sizeof(health); i++){
		map_xy(map,health[i],x++,y);
	}
}
