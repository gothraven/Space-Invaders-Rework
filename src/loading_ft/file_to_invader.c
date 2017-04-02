/*****************************************************************************#
*                                                                             #
*                                                #   # #### #### ####         #
*    file_to_invader.c                           #   # #  # #    #            #
*                                                #   # #### ###  #            #
*    By: Z. Safiy Errahmane                      #   # #    #    #            #
*                                                 ###  #    #### ####         #
*    Created: 2017/30/03 13:48:32 by Z.Safiy                                  #
*    Updated: 2017/30/03 13:48:32 by Z.Safiy                                  #
*                                                                             #
******************************************************************************/

#include "load.h"
#include "map.h"

void file_to_invader(Invader_t * invader,Ship_fs * file,char * enemytipe){

	
	invader->type = atoi(enemytipe);
	invader->x = 0;
	invader->y = 0;
	
	/*list circulaire*/

	invader-> health = file->ship_health;
	invader-> freq = file->shot_freq;

	invader->shot = malloc(sizeof(Shot_t *));
	invader->shot->shape = file->shot;
	invader->shot->x = 0;
	invader->shot->y = 0;
	invader->shot->speed = file->shot_speed;
	invader->shot->power = file->shot_power;
	
	invader->shape = malloc(file->ship_height+1*sizeof(char*));

	for (int i = 0; i < file->ship_height; ++i){
		invader->shape[i] = malloc(file->ship_width*sizeof(char));
		strcpy(invader->shape[i],file->shape[i]);
	}
	invader->shape[file->ship_height] = NULL;

}
