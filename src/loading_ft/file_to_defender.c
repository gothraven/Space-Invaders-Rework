/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    file_to_defender.c                          #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/30/03 13:48:32 by Z.Safiy                                  #
*    Updated: 2017/30/03 13:48:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"
#include "map.h"

void file_to_defender(Player_t * defender,Ship_fs * file){

	defender->x = (SCREEN_WIDTH/2)-(file->ship_width/2);
	defender->y = SCREEN_HEIGHT-(file->ship_height);
	defender->health = file->ship_health;
	
	defender->fireOn = 0;
	
	defender->shot = malloc(sizeof(Shot_t *));
	defender->shot->shape = file->shot;
	defender->shot->x = 0;
	defender->shot->y = 0;
	
	defender->shot->power = file->shot_power;
	
	defender->shot->speed = file->shot_speed;
	
	defender->shape = malloc(/*file->ship_height*/3+1*sizeof(char*));

	for (int i = 0; i < /*file->ship_height*/3; ++i){
		defender->shape[i] = malloc(/*file->ship_width*/5*sizeof(char));
		for(int j =0; j< /*file->ship_width*/5; ++j){	
			defender->shape[i][j] = file->shape[i][j];
		}
	}
	defender->shape[/*file->ship_height*/3] = NULL;
	//printf("(%d)(%s)[%s]\n",file->ship_height,defender->shape[0],file->shape[0]);

	
}